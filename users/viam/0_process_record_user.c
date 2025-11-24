#pragma once

bool process_record_user(uint16_t keycode, keyrecord_t *record) {

  #if defined(BETTER_DRAGSCROLL)
    process_record_better_dragscroll(keycode, record);
  #endif // defined(BETTER_DRAGSCROLL)

  #if defined(PLOOPY_MSGESTURE_ENABLE) && defined(DEFERRED_EXEC_ENABLE)
    process_record_msGesture();
  #endif // defined(PLOOPY_MSGESTURE_ENABLE) && defined(DEFERRED_EXEC_ENABLE)

  switch (keycode) {

    #if defined(KC_PL_SCRL)
      case PL_SCRL:
        tap_code(KC_SCRL);
        return false;
    #endif // defined(KC_PL_SCRL)

    #if defined(COMMUNITY_MODULE_MOUSE_JIGGLER_ENABLE)
      case PL_MSJG:
        // jiggler_toggle();
        process_record_mouse_jiggler(COMMUNITY_MODULE_MOUSE_JIGGLER_TOGGLE, record);
        return false;
    #endif // defined(COMMUNITY_MODULE_MOUSE_JIGGLER_ENABLE)

    #if defined(COMMUNITY_MODULE_TASK_SWITCH_ENABLE)
      case PL_TSKN:
        process_record_task_switch(COMMUNITY_MODULE_TASK_SWITCH_NEXT, record);
        return false;
      case PL_TSKP:
        process_record_task_switch(COMMUNITY_MODULE_TASK_SWITCH_PREVIOUS, record);
        return false;
    #endif // defined(COMMUNITY_MODULE_TASK_SWITCH_ENABLE)

    #if defined(COMMUNITY_MODULE_POINTING_DEVICE_ACCEL_ENABLE)
        case PDA_TOGG:
            if (record->event.pressed){
                pointing_device_accel_toggle_enabled();
            }
          return false;
        case PDA_TKOF:
            if (record->event.pressed){
                pointing_device_accel_takeoff_increment();
            }
            return false;
        case PDA_GROW:
            if (record->event.pressed){
                pointing_device_accel_growth_rate_increment();
            }
            return false;
        case PDA_OFST:
            if (record->event.pressed){
                pointing_device_accel_offset_increment();
            }
            return false;
        case PDA_LMT:
            if (record->event.pressed){
                pointing_device_accel_set_limit_increment();
            }
            return false;
    #endif // defined(COMMUNITY_MODULE_MOUSE_JIGGLER_ENABLE)

  }
  return true;
}
