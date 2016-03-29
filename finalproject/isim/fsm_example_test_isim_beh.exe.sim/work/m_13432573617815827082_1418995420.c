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
static const char *ng0 = "/ad/eng/users/p/v/pvelarde/Desktop/final project/FSMExample/fsm_example.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {5U, 0U};
static unsigned int ng7[] = {4U, 3U};
static unsigned int ng8[] = {6U, 0U};
static unsigned int ng9[] = {7U, 0U};
static unsigned int ng10[] = {32U, 0U};
static unsigned int ng11[] = {33U, 0U};
static unsigned int ng12[] = {34U, 0U};
static unsigned int ng13[] = {35U, 0U};
static const char *ng14 = "Current state: S_IDLE";
static const char *ng15 = "Current State: S_NAP";
static const char *ng16 = "Current State: S_SLEEP";
static const char *ng17 = "Current State: S_HIBERNATE";
static const char *ng18 = "Current State: S_WAKEUP";
static const char *ng19 = "Current State: S_ATTENDCLASS";
static const char *ng20 = "Current State: Invalid State";



static int sp_nextstate_func(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t0 = 1;
    xsi_set_current_line(67, ng0);

LAB2:    xsi_set_current_line(70, ng0);
    t3 = (t1 + 6152);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB3:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 3);
    if (t7 == 1)
        goto LAB4;

LAB5:    t3 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 3);
    if (t7 == 1)
        goto LAB6;

LAB7:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 3);
    if (t7 == 1)
        goto LAB8;

LAB9:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 3);
    if (t7 == 1)
        goto LAB10;

LAB11:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 3);
    if (t7 == 1)
        goto LAB12;

LAB13:    t3 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 3);
    if (t7 == 1)
        goto LAB14;

LAB15:
LAB17:
LAB16:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 5992);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);

LAB18:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(72, ng0);
    t8 = (t1 + 6312);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);

LAB19:    t11 = ((char*)((ng2)));
    t12 = xsi_vlog_unsigned_case_compare(t10, 3, t11, 3);
    if (t12 == 1)
        goto LAB20;

LAB21:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t10, 3, t3, 3);
    if (t7 == 1)
        goto LAB22;

LAB23:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t10, 3, t3, 3);
    if (t7 == 1)
        goto LAB24;

LAB25:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t10, 3, t3, 3);
    if (t7 == 1)
        goto LAB26;

LAB27:
LAB29:
LAB28:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 5992);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);

LAB30:    goto LAB18;

LAB6:    xsi_set_current_line(81, ng0);
    t4 = (t1 + 6312);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);

LAB31:    t9 = ((char*)((ng7)));
    t12 = xsi_vlog_unsigned_case_zcompare(t8, 3, t9, 3);
    if (t12 == 1)
        goto LAB32;

LAB33:
LAB35:
LAB34:    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t1 + 5992);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);

LAB36:    goto LAB18;

LAB8:    xsi_set_current_line(86, ng0);
    t4 = (t1 + 6312);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);

LAB37:    t11 = ((char*)((ng6)));
    t12 = xsi_vlog_unsigned_case_compare(t9, 3, t11, 3);
    if (t12 == 1)
        goto LAB38;

LAB39:    t3 = ((char*)((ng8)));
    t7 = xsi_vlog_unsigned_case_compare(t9, 3, t3, 3);
    if (t7 == 1)
        goto LAB40;

LAB41:    t3 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t9, 3, t3, 3);
    if (t7 == 1)
        goto LAB42;

LAB43:
LAB45:
LAB44:    xsi_set_current_line(90, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t1 + 5992);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);

LAB46:    goto LAB18;

LAB10:    xsi_set_current_line(93, ng0);
    t4 = (t1 + 6312);
    t6 = (t4 + 56U);
    t11 = *((char **)t6);

LAB47:    t13 = ((char*)((ng9)));
    t12 = xsi_vlog_unsigned_case_compare(t11, 3, t13, 3);
    if (t12 == 1)
        goto LAB48;

LAB49:
LAB51:
LAB50:    xsi_set_current_line(95, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t1 + 5992);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);

LAB52:    goto LAB18;

LAB12:    xsi_set_current_line(98, ng0);
    t4 = (t1 + 6312);
    t6 = (t4 + 56U);
    t13 = *((char **)t6);

LAB53:    t14 = ((char*)((ng5)));
    t12 = xsi_vlog_unsigned_case_compare(t13, 3, t14, 3);
    if (t12 == 1)
        goto LAB54;

LAB55:
LAB57:
LAB56:    xsi_set_current_line(100, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 5992);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);

LAB58:    goto LAB18;

LAB14:    xsi_set_current_line(103, ng0);
    t4 = (t1 + 6312);
    t6 = (t4 + 56U);
    t14 = *((char **)t6);

LAB59:    t15 = ((char*)((ng2)));
    t12 = xsi_vlog_unsigned_case_compare(t14, 3, t15, 3);
    if (t12 == 1)
        goto LAB60;

LAB61:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t14, 3, t3, 3);
    if (t7 == 1)
        goto LAB62;

LAB63:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t14, 3, t3, 3);
    if (t7 == 1)
        goto LAB64;

LAB65:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t14, 3, t3, 3);
    if (t7 == 1)
        goto LAB66;

LAB67:
LAB69:
LAB68:    xsi_set_current_line(108, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 5992);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 3);

LAB70:    goto LAB18;

LAB20:    xsi_set_current_line(73, ng0);
    t13 = ((char*)((ng2)));
    t14 = (t1 + 5992);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 3);
    goto LAB30;

LAB22:    xsi_set_current_line(74, ng0);
    t4 = ((char*)((ng3)));
    t6 = (t1 + 5992);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB30;

LAB24:    xsi_set_current_line(75, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 5992);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB30;

LAB26:    xsi_set_current_line(76, ng0);
    t4 = ((char*)((ng6)));
    t6 = (t1 + 5992);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB30;

LAB32:    xsi_set_current_line(82, ng0);
    t11 = ((char*)((ng5)));
    t13 = (t1 + 5992);
    xsi_vlogvar_assign_value(t13, t11, 0, 0, 3);
    goto LAB36;

LAB38:    xsi_set_current_line(87, ng0);
    t13 = ((char*)((ng5)));
    t14 = (t1 + 5992);
    xsi_vlogvar_assign_value(t14, t13, 0, 0, 3);
    goto LAB46;

LAB40:    xsi_set_current_line(88, ng0);
    t4 = ((char*)((ng5)));
    t6 = (t1 + 5992);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB46;

LAB42:    xsi_set_current_line(89, ng0);
    t4 = ((char*)((ng5)));
    t6 = (t1 + 5992);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB46;

LAB48:    xsi_set_current_line(94, ng0);
    t14 = ((char*)((ng5)));
    t15 = (t1 + 5992);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 3);
    goto LAB52;

LAB54:    xsi_set_current_line(99, ng0);
    t15 = ((char*)((ng6)));
    t16 = (t1 + 5992);
    xsi_vlogvar_assign_value(t16, t15, 0, 0, 3);
    goto LAB58;

LAB60:    xsi_set_current_line(104, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t1 + 5992);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 3);
    goto LAB70;

LAB62:    xsi_set_current_line(105, ng0);
    t4 = ((char*)((ng3)));
    t6 = (t1 + 5992);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB70;

LAB64:    xsi_set_current_line(106, ng0);
    t4 = ((char*)((ng4)));
    t6 = (t1 + 5992);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB70;

LAB66:    xsi_set_current_line(107, ng0);
    t4 = ((char*)((ng6)));
    t6 = (t1 + 5992);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 3);
    goto LAB70;

}

static void Cont_63_0(char *t0)
{
    char t23[8];
    char *t1;
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
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;

LAB0:    t1 = (t0 + 7224U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 5832);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4792U);
    t6 = *((char **)t5);
    t5 = (t0 + 7032);
    t7 = (t0 + 4160);
    t8 = xsi_create_subprogram_invocation(t5, 0, t0, t7, 0, 0);
    t9 = (t0 + 6152);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 3);
    t10 = (t0 + 6312);
    xsi_vlogvar_assign_value(t10, t6, 0, 0, 3);

LAB4:    t11 = (t0 + 7128);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);
    if (t19 != 0)
        goto LAB6;

LAB5:    t12 = (t0 + 7128);
    t20 = *((char **)t12);
    t12 = (t0 + 5992);
    t21 = (t12 + 56U);
    t22 = *((char **)t21);
    memcpy(t23, t22, 8);
    t24 = (t0 + 4160);
    t25 = (t0 + 7032);
    t26 = 0;
    xsi_delete_subprogram_invocation(t24, t20, t0, t25, t26);
    t27 = (t0 + 8152);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memset(t31, 0, 8);
    t32 = 7U;
    t33 = t32;
    t34 = (t23 + 4);
    t35 = *((unsigned int *)t23);
    t32 = (t32 & t35);
    t36 = *((unsigned int *)t34);
    t33 = (t33 & t36);
    t37 = (t31 + 4);
    t38 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t38 | t32);
    t39 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t39 | t33);
    xsi_driver_vfirst_trans(t27, 0, 2);
    t40 = (t0 + 8040);
    *((int *)t40) = 1;

LAB1:    return;
LAB6:    t11 = (t0 + 7224U);
    *((char **)t11) = &&LAB4;
    goto LAB1;

}

static void Always_120_1(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    int t32;

LAB0:    t1 = (t0 + 7472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 8056);
    *((int *)t2) = 1;
    t3 = (t0 + 7504);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(121, ng0);

LAB5:    t4 = (t0 + 280);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 7280);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(122, ng0);
    t6 = (t0 + 5112U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t7 + 4);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB11;

LAB8:    if (t20 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t8) = 1;

LAB11:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(125, ng0);

LAB16:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 5832);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB17:    t5 = ((char*)((ng1)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t5, 3);
    if (t32 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng2)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t32 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng3)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t32 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng4)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t32 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng5)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t32 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng6)));
    t32 = xsi_vlog_unsigned_case_compare(t4, 3, t2, 3);
    if (t32 == 1)
        goto LAB28;

LAB29:
LAB31:
LAB30:    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 5672);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 6);

LAB32:
LAB14:    t2 = (t0 + 280);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t3 = (t0 + 7280);
    xsi_vlog_dispose_process_subprogram_invocation(t3);
    goto LAB2;

LAB10:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(122, ng0);

LAB15:    xsi_set_current_line(123, ng0);
    t30 = ((char*)((ng10)));
    t31 = (t0 + 5672);
    xsi_vlogvar_assign_value(t31, t30, 0, 0, 6);
    goto LAB14;

LAB18:    xsi_set_current_line(127, ng0);
    t6 = ((char*)((ng10)));
    t7 = (t0 + 5672);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 6);
    goto LAB32;

LAB20:    xsi_set_current_line(128, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 5672);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 6);
    goto LAB32;

LAB22:    xsi_set_current_line(129, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 5672);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 6);
    goto LAB32;

LAB24:    xsi_set_current_line(130, ng0);
    t3 = ((char*)((ng11)));
    t5 = (t0 + 5672);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 6);
    goto LAB32;

LAB26:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng12)));
    t5 = (t0 + 5672);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 6);
    goto LAB32;

LAB28:    xsi_set_current_line(132, ng0);
    t3 = ((char*)((ng13)));
    t5 = (t0 + 5672);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 6);
    goto LAB32;

}

static void Always_139_2(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    int t32;

LAB0:    t1 = (t0 + 7720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 8072);
    *((int *)t2) = 1;
    t3 = (t0 + 7752);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(140, ng0);

LAB5:    t4 = (t0 + 576);
    xsi_vlog_namedbase_setdisablestate(t4, &&LAB6);
    t5 = (t0 + 7528);
    xsi_vlog_namedbase_pushprocess(t4, t5);

LAB7:    xsi_set_current_line(147, ng0);
    t6 = (t0 + 5112U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t7 + 4);
    t10 = (t6 + 4);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t6);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB11;

LAB8:    if (t20 != 0)
        goto LAB10;

LAB9:    *((unsigned int *)t8) = 1;

LAB11:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(149, ng0);

LAB16:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 5272U);
    t3 = *((char **)t2);
    t2 = (t0 + 5832);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 3, 0LL);

LAB14:    xsi_set_current_line(156, ng0);
    t2 = (t0 + 5272U);
    t3 = *((char **)t2);

LAB17:    t2 = ((char*)((ng1)));
    t32 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t32 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng2)));
    t32 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t32 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng3)));
    t32 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t32 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng4)));
    t32 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t32 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng5)));
    t32 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t32 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng6)));
    t32 = xsi_vlog_unsigned_case_compare(t3, 3, t2, 3);
    if (t32 == 1)
        goto LAB28;

LAB29:
LAB31:
LAB30:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 576);
    xsi_vlogfile_write(1, 0, 0, ng20, 1, t2);

LAB32:    t2 = (t0 + 576);
    xsi_vlog_namedbase_popprocess(t2);

LAB6:    t4 = (t0 + 7528);
    xsi_vlog_dispose_process_subprogram_invocation(t4);
    goto LAB2;

LAB10:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB11;

LAB12:    xsi_set_current_line(147, ng0);

LAB15:    xsi_set_current_line(148, ng0);
    t30 = ((char*)((ng1)));
    t31 = (t0 + 5832);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 3, 0LL);
    goto LAB14;

LAB18:    xsi_set_current_line(157, ng0);
    t4 = (t0 + 576);
    xsi_vlogfile_write(1, 0, 0, ng14, 1, t4);
    goto LAB32;

LAB20:    xsi_set_current_line(158, ng0);
    t4 = (t0 + 576);
    xsi_vlogfile_write(1, 0, 0, ng15, 1, t4);
    goto LAB32;

LAB22:    xsi_set_current_line(159, ng0);
    t4 = (t0 + 576);
    xsi_vlogfile_write(1, 0, 0, ng16, 1, t4);
    goto LAB32;

LAB24:    xsi_set_current_line(160, ng0);
    t4 = (t0 + 576);
    xsi_vlogfile_write(1, 0, 0, ng17, 1, t4);
    goto LAB32;

LAB26:    xsi_set_current_line(161, ng0);
    t4 = (t0 + 576);
    xsi_vlogfile_write(1, 0, 0, ng18, 1, t4);
    goto LAB32;

LAB28:    xsi_set_current_line(162, ng0);
    t4 = (t0 + 576);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t4);
    goto LAB32;

}


extern void work_m_13432573617815827082_1418995420_init()
{
	static char *pe[] = {(void *)Cont_63_0,(void *)Always_120_1,(void *)Always_139_2};
	static char *se[] = {(void *)sp_nextstate_func};
	xsi_register_didat("work_m_13432573617815827082_1418995420", "isim/fsm_example_test_isim_beh.exe.sim/work/m_13432573617815827082_1418995420.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
