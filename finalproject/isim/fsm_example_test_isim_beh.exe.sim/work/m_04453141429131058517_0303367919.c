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

/* This file is designed for use with ISim build 0x54af6ca1 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "%g\t%b\t%b\t\t%b\t\t%b";
static const char *ng1 = "/ad/eng/users/p/v/pvelarde/Desktop/final project/FSMExample/fsm_example_test.v";
static const char *ng2 = "time\tclk\treset\t\tinput_signal\t\toutput_signal";
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {4U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {7U, 0U};

void Monitor_30_1(char *);
void Monitor_30_1(char *);


static void Monitor_30_1_Func(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    t2 = xsi_vlog_time(t1, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 2176);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2016);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t0 + 1856);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 1456U);
    t13 = *((char **)t12);
    xsi_vlogfile_write(1, 0, 3, ng0, 6, t0, (char)118, t1, 64, (char)118, t5, 1, (char)118, t8, 1, (char)118, t11, 3, (char)118, t13, 6);

LAB1:    return;
}

static void Initial_27_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 3088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng1);

LAB4:    xsi_set_current_line(29, ng1);
    xsi_vlogfile_write(1, 0, 0, ng2, 1, t0);
    xsi_set_current_line(30, ng1);
    Monitor_30_1(t0);
    xsi_set_current_line(34, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(35, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(36, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(39, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(39, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(39, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(40, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(40, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(40, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2016);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(42, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(42, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(43, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(43, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(44, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(44, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB10:    xsi_set_current_line(46, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng1);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(47, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB11:    xsi_set_current_line(47, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(49, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB12:    xsi_set_current_line(49, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(50, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(51, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(52, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB15:    xsi_set_current_line(52, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(53, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    xsi_set_current_line(53, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(54, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB17:    xsi_set_current_line(54, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(56, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng1);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(57, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB19:    xsi_set_current_line(57, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(59, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB21;
    goto LAB1;

LAB21:    xsi_set_current_line(60, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(61, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(61, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(62, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(63, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(63, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(64, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(64, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(66, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB26:    xsi_set_current_line(66, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(66, ng1);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(67, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(67, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(68, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    xsi_set_current_line(68, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB29;
    goto LAB1;

LAB29:    xsi_set_current_line(69, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(70, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB30:    xsi_set_current_line(70, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(71, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB31;
    goto LAB1;

LAB31:    xsi_set_current_line(71, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB32:    xsi_set_current_line(73, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(73, ng1);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(74, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB33;
    goto LAB1;

LAB33:    xsi_set_current_line(74, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(75, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB34:    xsi_set_current_line(75, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(76, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB35:    xsi_set_current_line(76, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB36:    xsi_set_current_line(77, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB37:    xsi_set_current_line(78, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB38:    xsi_set_current_line(79, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB39:    xsi_set_current_line(80, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB40:    xsi_set_current_line(82, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(82, ng1);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1856);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    xsi_set_current_line(83, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB41:    xsi_set_current_line(83, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(85, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB42;
    goto LAB1;

LAB42:    xsi_set_current_line(85, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(86, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB43:    xsi_set_current_line(86, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB44:    xsi_set_current_line(87, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(88, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB45:    xsi_set_current_line(88, ng1);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(89, ng1);
    t2 = (t0 + 2896);
    xsi_process_wait(t2, 25000LL);
    *((char **)t1) = &&LAB46;
    goto LAB1;

LAB46:    xsi_set_current_line(89, ng1);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2176);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB1;

}

void Monitor_30_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    t1 = (t0 + 3144);
    t2 = (t0 + 3656);
    xsi_vlogfile_monitor((void *)Monitor_30_1_Func, t1, t2);

LAB1:    return;
}


extern void work_m_04453141429131058517_0303367919_init()
{
	static char *pe[] = {(void *)Initial_27_0,(void *)Monitor_30_1};
	xsi_register_didat("work_m_04453141429131058517_0303367919", "isim/fsm_example_test_isim_beh.exe.sim/work/m_04453141429131058517_0303367919.didat");
	xsi_register_executes(pe);
}
