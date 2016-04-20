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
static const char *ng0 = "/ad/eng/users/p/v/pvelarde/Desktop/final_project/final_final_version/IMem.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {3827367943U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1210122240U, 0U};
static int ng5[] = {2, 0};
static unsigned int ng6[] = {3357675279U, 0U};
static int ng7[] = {3, 0};
static unsigned int ng8[] = {4030857220U, 0U};
static int ng9[] = {4, 0};
static unsigned int ng10[] = {3965911044U, 0U};



static void Always_44_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 2496U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2816);
    *((int *)t2) = 1;
    t3 = (t0 + 2528);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1184U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng1)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 16, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 16, t2, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 16, t2, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 16, t2, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng9)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 16, t2, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(304, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1584);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(66, ng0);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 1584);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB19;

LAB9:    xsi_set_current_line(68, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB19;

LAB11:    xsi_set_current_line(70, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB19;

LAB13:    xsi_set_current_line(71, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB19;

LAB15:    xsi_set_current_line(72, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1584);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    goto LAB19;

}


extern void work_m_13714532964083914422_0984947828_init()
{
	static char *pe[] = {(void *)Always_44_0};
	xsi_register_didat("work_m_13714532964083914422_0984947828", "isim/IMem_isim_beh.exe.sim/work/m_13714532964083914422_0984947828.didat");
	xsi_register_executes(pe);
}
