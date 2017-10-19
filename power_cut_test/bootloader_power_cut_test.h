//----------------------------------------------------------------------------
//   The confidential and proprietary information contained in this file may
//   only be used by a person authorised under and to the extent permitted
//   by a subsisting licensing agreement from ARM Limited or its affiliates.
//
//          (C) COPYRIGHT 2016 ARM Limited or its affiliates.
//              ALL RIGHTS RESERVED
//
//   This entire notice must be reproduced on all copies of this file
//   and copies of this file may only be made by a person if such person is
//   permitted to do so under the terms of a subsisting license agreement
//   from ARM Limited or its affiliates.
//----------------------------------------------------------------------------

#ifdef BOOTLOADER_POWER_CUT_TEST
#ifndef __BOOTLOADER_POWER_CUT_TEST_H__
#define __BOOTLOADER_POWER_CUT_TEST_H__

typedef enum {
    POWER_CUT_TEST_STATE_START,
    POWER_CUT_TEST_STATE_ERASE,
    POWER_CUT_TEST_STATE_COPY_FIRMWARE,
    POWER_CUT_TEST_STATE_FIRMWARE_VALIDATION,
    POWER_CUT_TEST_STATE_END
} power_cut_test_state_t;

void power_cut_test_setup();
void power_cut_test_success();
void power_cut_test_fail();
void power_cut_test_end();
void power_cut_test_assert_state(power_cut_test_state_t state);

#endif /* __BOOTLOADER_POWER_CUT_TEST_H__ */
#endif /* BOOTLOADER_POWER_CUT_TEST */