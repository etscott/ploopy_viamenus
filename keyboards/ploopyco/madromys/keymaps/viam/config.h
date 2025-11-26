/* Copyright 2025 Plodah
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define PLOOPY_VIAMENUS
#define BETTER_DRAGSCROLL
#define EECONFIG_USER_DATA_SIZE 68
#define PLOOPY_MSGESTURE_ENABLE
#define BETTER_DRAGSCROLL_TAPDANCE
#define COMBO_SHOULD_TRIGGER

#define BETTER_DRAGSCROLL_INVERT_V 1
#define BETTER_DRAGSCROLL_DIVISOR_H 1.5
#define BETTER_DRAGSCROLL_DIVISOR_V 1.5

#define POINTING_DEVICE_HIRES_SCROLL_ENABLE 0
#define POINTING_DEVICE_HIRES_SCROLL_MULTIPLIER 10

#define PLOOPY_DRAGSCROLL_MOMENTARY
#define PLOOPY_DRAGSCROLL_DIVISOR_H 4.0
#define PLOOPY_DRAGSCROLL_DIVISOR_V 4.0
#define PLOOPY_DRAGSCROLL_INVERT

#define UNUSABLE_PINS \
    { GP1, GP3, GP4, GP6, GP8, GP10, GP14, GP16, GP18, GP20, GP22, GP24, GP25, GP26, GP27, GP28, GP29 }

// https://github.com/drashna/qmk_modules/tree/main/pointing_device_accel
#define POINTING_DEVICE_ACCEL_TAKEOFF 1.5
#define POINTING_DEVICE_ACCEL_GROWTH_RATE 0.25
#define POINTING_DEVICE_ACCEL_OFFSET 1.5
#define POINTING_DEVICE_ACCEL_LIMIT 0.2

// #define POINTING_DEVICE_DEBUG
