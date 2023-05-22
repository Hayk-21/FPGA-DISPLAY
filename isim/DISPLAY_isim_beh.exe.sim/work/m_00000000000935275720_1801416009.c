/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/User/Documents/FPGA/DISPLAY/DISPLAY.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1058642330U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {126U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {79U, 0U};
static unsigned int ng8[] = {14U, 0U};



static void Always_38_0(char *t0)
{
    char t15[8];
    char t16[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    int t26;
    char *t27;
    unsigned int t28;
    int t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    int t33;
    int t34;
    unsigned int t35;
    unsigned int t36;

LAB0:    t1 = (t0 + 3736U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 4056);
    *((int *)t2) = 1;
    t3 = (t0 + 3768);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(38, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 1616U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2816);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB8:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 23);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 23);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 255U);
    t25 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t25 & 255U);
    t12 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t13 = (t15 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB16;

LAB15:    t14 = (t12 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t15) > *((unsigned int *)t12))
        goto LAB17;

LAB18:    t18 = (t16 + 4);
    t28 = *((unsigned int *)t18);
    t31 = (~(t28));
    t32 = *((unsigned int *)t16);
    t35 = (t32 & t31);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 23);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 23);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 255U);
    t25 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t25 & 255U);
    t12 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t13 = (t15 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB25;

LAB24:    t14 = (t12 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB25;

LAB28:    if (*((unsigned int *)t15) < *((unsigned int *)t12))
        goto LAB26;

LAB27:    t18 = (t16 + 4);
    t28 = *((unsigned int *)t18);
    t31 = (~(t28));
    t32 = *((unsigned int *)t16);
    t35 = (t32 & t31);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(51, ng0);

LAB33:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 8388607U);
    t25 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t25 & 8388607U);
    t12 = ((char*)((ng4)));
    memset(t16, 0, 8);
    t13 = (t15 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB35;

LAB34:    t14 = (t12 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t15) > *((unsigned int *)t12))
        goto LAB36;

LAB37:    t18 = (t16 + 4);
    t28 = *((unsigned int *)t18);
    t31 = (~(t28));
    t32 = *((unsigned int *)t16);
    t35 = (t32 & t31);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t15, 0, 8);
    t5 = (t15 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t5) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 8388607U);
    t25 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t25 & 8388607U);
    t12 = ((char*)((ng4)));
    memset(t16, 0, 8);
    t13 = (t15 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB44;

LAB43:    t14 = (t12 + 4);
    if (*((unsigned int *)t14) != 0)
        goto LAB44;

LAB47:    if (*((unsigned int *)t15) < *((unsigned int *)t12))
        goto LAB45;

LAB46:    t18 = (t16 + 4);
    t28 = *((unsigned int *)t18);
    t31 = (~(t28));
    t32 = *((unsigned int *)t16);
    t35 = (t32 & t31);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(57, ng0);

LAB52:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2496);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB50:
LAB41:
LAB31:
LAB22:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 2496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB53;

LAB54:    xsi_set_current_line(65, ng0);

LAB57:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB55:    goto LAB2;

LAB6:    xsi_set_current_line(39, ng0);

LAB9:    xsi_set_current_line(40, ng0);
    t11 = (t0 + 2816);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t0 + 2656);
    t17 = (t0 + 2656);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 2656);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = ((char*)((ng1)));
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t23, 32, 1);
    t24 = (t15 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t16 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (!(t28));
    t30 = (t26 && t29);
    if (t30 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2656);
    t4 = (t0 + 2656);
    t5 = (t4 + 72U);
    t11 = *((char **)t5);
    t12 = (t0 + 2656);
    t13 = (t12 + 64U);
    t14 = *((char **)t13);
    t17 = ((char*)((ng3)));
    xsi_vlog_generic_convert_array_indices(t15, t16, t11, t14, 2, 1, t17, 32, 1);
    t18 = (t15 + 4);
    t6 = *((unsigned int *)t18);
    t26 = (!(t6));
    t19 = (t16 + 4);
    t7 = *((unsigned int *)t19);
    t29 = (!(t7));
    t30 = (t26 && t29);
    if (t30 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3544);
    xsi_process_wait(t2, 1000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB10:    t31 = *((unsigned int *)t15);
    t32 = *((unsigned int *)t16);
    t33 = (t31 - t32);
    t34 = (t33 + 1);
    xsi_vlogvar_assign_value(t14, t13, 0, *((unsigned int *)t16), t34);
    goto LAB11;

LAB12:    t8 = *((unsigned int *)t15);
    t9 = *((unsigned int *)t16);
    t33 = (t8 - t9);
    t34 = (t33 + 1);
    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t16), t34);
    goto LAB13;

LAB14:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 1776U);
    t4 = *((char **)t3);
    t3 = (t0 + 2816);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB8;

LAB16:    t17 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB18;

LAB17:    *((unsigned int *)t16) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(47, ng0);

LAB23:    xsi_set_current_line(48, ng0);
    t19 = ((char*)((ng6)));
    t20 = (t0 + 2496);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 1);
    goto LAB22;

LAB25:    t17 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB27;

LAB26:    *((unsigned int *)t16) = 1;
    goto LAB27;

LAB29:    xsi_set_current_line(49, ng0);

LAB32:    xsi_set_current_line(50, ng0);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 2496);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 1);
    goto LAB31;

LAB35:    t17 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t16) = 1;
    goto LAB37;

LAB39:    xsi_set_current_line(53, ng0);

LAB42:    xsi_set_current_line(54, ng0);
    t19 = ((char*)((ng6)));
    t20 = (t0 + 2496);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 1);
    goto LAB41;

LAB44:    t17 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB46;

LAB45:    *((unsigned int *)t16) = 1;
    goto LAB46;

LAB48:    xsi_set_current_line(55, ng0);

LAB51:    xsi_set_current_line(56, ng0);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 2496);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 1);
    goto LAB50;

LAB53:    xsi_set_current_line(62, ng0);

LAB56:    xsi_set_current_line(63, ng0);
    t11 = ((char*)((ng7)));
    t12 = (t0 + 2176);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 7);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 2336);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB55;

}


extern void work_m_00000000000935275720_1801416009_init()
{
	static char *pe[] = {(void *)Always_38_0};
	xsi_register_didat("work_m_00000000000935275720_1801416009", "isim/DISPLAY_isim_beh.exe.sim/work/m_00000000000935275720_1801416009.didat");
	xsi_register_executes(pe);
}
