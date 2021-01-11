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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/CPU_Pipeline_BranchHazard/lab3/cpu_top.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {146U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {193U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {198U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {192U, 0U};
static unsigned int ng9[] = {249U, 0U};
static unsigned int ng10[] = {164U, 0U};
static unsigned int ng11[] = {176U, 0U};
static unsigned int ng12[] = {4U, 0U};
static unsigned int ng13[] = {153U, 0U};
static unsigned int ng14[] = {5U, 0U};
static unsigned int ng15[] = {6U, 0U};
static unsigned int ng16[] = {130U, 0U};
static unsigned int ng17[] = {7U, 0U};
static unsigned int ng18[] = {248U, 0U};
static unsigned int ng19[] = {8U, 0U};
static unsigned int ng20[] = {128U, 0U};
static unsigned int ng21[] = {9U, 0U};
static unsigned int ng22[] = {144U, 0U};
static unsigned int ng23[] = {255U, 0U};
static const char *ng24 = "./lab3.data/base_cpu_trace";
static int ng25[] = {0, 0};
static int ng26[] = {15, 0};
static const char *ng27 = "\t----PASS!!!";
static const char *ng28 = "Test end!";
static const char *ng29 = "==============================================================";
static const char *ng30 = "--------------------------------------------------------------";
static const char *ng31 = "Error!!!";
static const char *ng32 = "    Reference : PC = 0x%8h, write back reg number = %2d, write back data = 0x%8h";
static const char *ng33 = "    Error     : PC = 0x%8h, write back reg number = %2d, write back data = 0x%8h";
static int ng34[] = {1, 0};
static unsigned int ng35[] = {15U, 0U};
static unsigned int ng36[] = {65535U, 0U};
static unsigned int ng37[] = {11U, 0U};
static unsigned int ng38[] = {13U, 0U};
static unsigned int ng39[] = {14U, 0U};



static int sp_segans_display(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    char *t19;
    char *t20;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 484);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(127, ng0);
    t5 = (t1 + 2556);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t7);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(136, ng0);
    t4 = (t1 + 2096);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t6 + 4);
    t9 = *((unsigned int *)t7);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(151, ng0);

LAB51:    xsi_set_current_line(152, ng0);
    t4 = ((char*)((ng23)));
    t5 = (t1 + 2832);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);

LAB24:
LAB7:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB5:    xsi_set_current_line(127, ng0);

LAB8:    xsi_set_current_line(128, ng0);
    t14 = (t1 + 2648);
    t15 = (t14 + 36U);
    t16 = *((char **)t15);

LAB9:    t17 = ((char*)((ng1)));
    t18 = xsi_vlog_unsigned_case_compare(t16, 2, t17, 2);
    if (t18 == 1)
        goto LAB10;

LAB11:    t4 = ((char*)((ng3)));
    t18 = xsi_vlog_unsigned_case_compare(t16, 2, t4, 2);
    if (t18 == 1)
        goto LAB12;

LAB13:    t4 = ((char*)((ng5)));
    t18 = xsi_vlog_unsigned_case_compare(t16, 2, t4, 2);
    if (t18 == 1)
        goto LAB14;

LAB15:    t4 = ((char*)((ng7)));
    t18 = xsi_vlog_unsigned_case_compare(t16, 2, t4, 2);
    if (t18 == 1)
        goto LAB16;

LAB17:
LAB19:
LAB18:    xsi_set_current_line(133, ng0);

LAB21:
LAB20:    goto LAB7;

LAB10:    xsi_set_current_line(129, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t1 + 2832);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 8, 0LL);
    goto LAB20;

LAB12:    xsi_set_current_line(130, ng0);
    t5 = ((char*)((ng4)));
    t6 = (t1 + 2832);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB20;

LAB14:    xsi_set_current_line(131, ng0);
    t5 = ((char*)((ng6)));
    t6 = (t1 + 2832);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB20;

LAB16:    xsi_set_current_line(132, ng0);
    t5 = ((char*)((ng6)));
    t6 = (t1 + 2832);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB20;

LAB22:    xsi_set_current_line(136, ng0);

LAB25:    xsi_set_current_line(137, ng0);
    t8 = (t1 + 2740);
    t14 = (t8 + 36U);
    t15 = *((char **)t14);

LAB26:    t17 = ((char*)((ng1)));
    t18 = xsi_vlog_unsigned_case_compare(t15, 4, t17, 4);
    if (t18 == 1)
        goto LAB27;

LAB28:    t4 = ((char*)((ng3)));
    t18 = xsi_vlog_unsigned_case_compare(t15, 4, t4, 4);
    if (t18 == 1)
        goto LAB29;

LAB30:    t4 = ((char*)((ng5)));
    t18 = xsi_vlog_unsigned_case_compare(t15, 4, t4, 4);
    if (t18 == 1)
        goto LAB31;

LAB32:    t4 = ((char*)((ng7)));
    t18 = xsi_vlog_unsigned_case_compare(t15, 4, t4, 4);
    if (t18 == 1)
        goto LAB33;

LAB34:    t4 = ((char*)((ng12)));
    t18 = xsi_vlog_unsigned_case_compare(t15, 4, t4, 4);
    if (t18 == 1)
        goto LAB35;

LAB36:    t4 = ((char*)((ng14)));
    t18 = xsi_vlog_unsigned_case_compare(t15, 4, t4, 4);
    if (t18 == 1)
        goto LAB37;

LAB38:    t4 = ((char*)((ng15)));
    t18 = xsi_vlog_unsigned_case_compare(t15, 4, t4, 4);
    if (t18 == 1)
        goto LAB39;

LAB40:    t4 = ((char*)((ng17)));
    t18 = xsi_vlog_unsigned_case_compare(t15, 4, t4, 4);
    if (t18 == 1)
        goto LAB41;

LAB42:    t4 = ((char*)((ng19)));
    t18 = xsi_vlog_unsigned_case_compare(t15, 4, t4, 4);
    if (t18 == 1)
        goto LAB43;

LAB44:    t4 = ((char*)((ng21)));
    t18 = xsi_vlog_unsigned_case_compare(t15, 4, t4, 4);
    if (t18 == 1)
        goto LAB45;

LAB46:
LAB48:
LAB47:    xsi_set_current_line(148, ng0);

LAB50:
LAB49:    goto LAB24;

LAB27:    xsi_set_current_line(138, ng0);
    t19 = ((char*)((ng8)));
    t20 = (t1 + 2832);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 8, 0LL);
    goto LAB49;

LAB29:    xsi_set_current_line(139, ng0);
    t5 = ((char*)((ng9)));
    t6 = (t1 + 2832);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB49;

LAB31:    xsi_set_current_line(140, ng0);
    t5 = ((char*)((ng10)));
    t6 = (t1 + 2832);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB49;

LAB33:    xsi_set_current_line(141, ng0);
    t5 = ((char*)((ng11)));
    t6 = (t1 + 2832);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB49;

LAB35:    xsi_set_current_line(142, ng0);
    t5 = ((char*)((ng13)));
    t6 = (t1 + 2832);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB49;

LAB37:    xsi_set_current_line(143, ng0);
    t5 = ((char*)((ng2)));
    t6 = (t1 + 2832);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB49;

LAB39:    xsi_set_current_line(144, ng0);
    t5 = ((char*)((ng16)));
    t6 = (t1 + 2832);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB49;

LAB41:    xsi_set_current_line(145, ng0);
    t5 = ((char*)((ng18)));
    t6 = (t1 + 2832);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB49;

LAB43:    xsi_set_current_line(146, ng0);
    t5 = ((char*)((ng20)));
    t6 = (t1 + 2832);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB49;

LAB45:    xsi_set_current_line(147, ng0);
    t5 = ((char*)((ng22)));
    t6 = (t1 + 2832);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 8, 0LL);
    goto LAB49;

}

static void Initial_19_0(char *t0)
{
    char *t1;

LAB0:    xsi_set_current_line(19, ng0);

LAB2:    xsi_set_current_line(20, ng0);
    t1 = (t0 + 2004);
    xsi_vlogfile_readmemh(ng24, 0, t1, 0, 0, 0, 0);

LAB1:    return;
}

static void NetDecl_45_1(char *t0)
{
    char t5[24];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 3500U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 2004);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 2004);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 2004);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 2280);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t5, 72, t4, t8, t11, 2, 1, t14, 32, 2);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t17 = (t5 + 8);
    t18 = (t5 + 12);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 8);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 8);
    *((unsigned int *)t16) = t22;
    t23 = (t5 + 16);
    t24 = (t5 + 20);
    t25 = *((unsigned int *)t23);
    t26 = (t25 << 24);
    t27 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t27 | t26);
    t28 = *((unsigned int *)t24);
    t29 = (t28 << 24);
    t30 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t30 | t29);
    t31 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t31 & 4294967295U);
    t32 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t32 & 4294967295U);
    t33 = (t0 + 4348);
    t34 = (t33 + 32U);
    t35 = *((char **)t34);
    t36 = (t35 + 40U);
    t37 = *((char **)t36);
    memcpy(t37, t15, 8);
    xsi_driver_vfirst_trans(t33, 0, 31U);
    t38 = (t0 + 4272);
    *((int *)t38) = 1;

LAB1:    return;
}

static void NetDecl_46_2(char *t0)
{
    char t5[24];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;

LAB0:    t1 = (t0 + 3644U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2004);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 2004);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 2004);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 2280);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t5, 72, t4, t8, t11, 2, 1, t14, 32, 2);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t17 = (t5 + 8);
    t18 = (t5 + 12);
    t19 = *((unsigned int *)t17);
    t20 = (t19 >> 0);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t16) = t22;
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 31U);
    t24 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t24 & 31U);
    t25 = (t0 + 4384);
    t26 = (t25 + 32U);
    t27 = *((char **)t26);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    memset(t29, 0, 8);
    t30 = 31U;
    t31 = t30;
    t32 = (t15 + 4);
    t33 = *((unsigned int *)t15);
    t30 = (t30 & t33);
    t34 = *((unsigned int *)t32);
    t31 = (t31 & t34);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 | t30);
    t37 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t37 | t31);
    xsi_driver_vfirst_trans(t25, 0, 4U);
    t38 = (t0 + 4280);
    *((int *)t38) = 1;

LAB1:    return;
}

static void NetDecl_47_3(char *t0)
{
    char t5[24];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 3788U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2004);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 2004);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 2004);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t12 = (t0 + 2280);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t5, 72, t4, t8, t11, 2, 1, t14, 32, 2);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t17 = (t5 + 4);
    t18 = *((unsigned int *)t5);
    t19 = (t18 >> 0);
    *((unsigned int *)t15) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 0);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t22 & 4294967295U);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 4294967295U);
    t24 = (t0 + 4420);
    t25 = (t24 + 32U);
    t26 = *((char **)t25);
    t27 = (t26 + 40U);
    t28 = *((char **)t27);
    memcpy(t28, t15, 8);
    xsi_driver_vfirst_trans(t24, 0, 31U);
    t29 = (t0 + 4288);
    *((int *)t29) = 1;

LAB1:    return;
}

static void Always_49_4(char *t0)
{
    char t13[8];
    char t28[8];
    char t43[8];
    char t58[8];
    char t66[8];
    char t94[8];
    char t110[8];
    char t125[8];
    char t133[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;
    char *t108;
    char *t109;
    char *t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t132;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t137;
    char *t138;
    char *t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    char *t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;

LAB0:    t1 = (t0 + 3932U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 4296);
    *((int *)t2) = 1;
    t3 = (t0 + 3960);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(49, ng0);

LAB5:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 948U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2280);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng26)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB13;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1132U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB19;

LAB20:
LAB21:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(50, ng0);

LAB9:    xsi_set_current_line(51, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2096);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2188);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 2280);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB12:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(55, ng0);

LAB17:    xsi_set_current_line(56, ng0);
    xsi_vlogfile_write(1, 0, 0, ng27, 1, t0);
    xsi_set_current_line(57, ng0);
    xsi_vlogfile_write(1, 0, 0, ng28, 1, t0);
    xsi_set_current_line(58, ng0);
    xsi_vlogfile_write(1, 0, 0, ng29, 1, t0);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2188);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3832);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    xsi_set_current_line(61, ng0);
    xsi_vlog_finish(1);
    goto LAB16;

LAB19:    xsi_set_current_line(63, ng0);

LAB22:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 1040U);
    t5 = *((char **)t4);
    t4 = (t0 + 1408U);
    t11 = *((char **)t4);
    memset(t13, 0, 8);
    t4 = (t5 + 4);
    t12 = (t11 + 4);
    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t11);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t12);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t23 = *((unsigned int *)t4);
    t24 = *((unsigned int *)t12);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t20 & t26);
    if (t27 != 0)
        goto LAB24;

LAB23:    if (t25 != 0)
        goto LAB25;

LAB26:    memset(t28, 0, 8);
    t22 = (t13 + 4);
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (t32 & 1U);
    if (t33 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t22) != 0)
        goto LAB29;

LAB30:    t35 = (t28 + 4);
    t36 = *((unsigned int *)t28);
    t37 = (!(t36));
    t38 = *((unsigned int *)t35);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB31;

LAB32:    memcpy(t66, t28, 8);

LAB33:    memset(t94, 0, 8);
    t95 = (t66 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t66);
    t99 = (t98 & t97);
    t100 = (t99 & 1U);
    if (t100 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t95) != 0)
        goto LAB47;

LAB48:    t102 = (t94 + 4);
    t103 = *((unsigned int *)t94);
    t104 = (!(t103));
    t105 = *((unsigned int *)t102);
    t106 = (t104 || t105);
    if (t106 > 0)
        goto LAB49;

LAB50:    memcpy(t133, t94, 8);

LAB51:    t161 = (t133 + 4);
    t162 = *((unsigned int *)t161);
    t163 = (~(t162));
    t164 = *((unsigned int *)t133);
    t165 = (t164 & t163);
    t166 = (t165 != 0);
    if (t166 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(75, ng0);

LAB68:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2280);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng34)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 2280);
    xsi_vlogvar_wait_assign_value(t11, t13, 0, 0, 32, 0LL);

LAB65:    goto LAB21;

LAB24:    *((unsigned int *)t13) = 1;
    goto LAB26;

LAB25:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB26;

LAB27:    *((unsigned int *)t28) = 1;
    goto LAB30;

LAB29:    t34 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB30;

LAB31:    t40 = (t0 + 1224U);
    t41 = *((char **)t40);
    t40 = (t0 + 1500U);
    t42 = *((char **)t40);
    memset(t43, 0, 8);
    t40 = (t41 + 4);
    t44 = (t42 + 4);
    t45 = *((unsigned int *)t41);
    t46 = *((unsigned int *)t42);
    t47 = (t45 ^ t46);
    t48 = *((unsigned int *)t40);
    t49 = *((unsigned int *)t44);
    t50 = (t48 ^ t49);
    t51 = (t47 | t50);
    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t44);
    t54 = (t52 | t53);
    t55 = (~(t54));
    t56 = (t51 & t55);
    if (t56 != 0)
        goto LAB35;

LAB34:    if (t54 != 0)
        goto LAB36;

LAB37:    memset(t58, 0, 8);
    t59 = (t43 + 4);
    t60 = *((unsigned int *)t59);
    t61 = (~(t60));
    t62 = *((unsigned int *)t43);
    t63 = (t62 & t61);
    t64 = (t63 & 1U);
    if (t64 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t59) != 0)
        goto LAB40;

LAB41:    t67 = *((unsigned int *)t28);
    t68 = *((unsigned int *)t58);
    t69 = (t67 | t68);
    *((unsigned int *)t66) = t69;
    t70 = (t28 + 4);
    t71 = (t58 + 4);
    t72 = (t66 + 4);
    t73 = *((unsigned int *)t70);
    t74 = *((unsigned int *)t71);
    t75 = (t73 | t74);
    *((unsigned int *)t72) = t75;
    t76 = *((unsigned int *)t72);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB33;

LAB35:    *((unsigned int *)t43) = 1;
    goto LAB37;

LAB36:    t57 = (t43 + 4);
    *((unsigned int *)t43) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t58) = 1;
    goto LAB41;

LAB40:    t65 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t65) = 1;
    goto LAB41;

LAB42:    t78 = *((unsigned int *)t66);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t66) = (t78 | t79);
    t80 = (t28 + 4);
    t81 = (t58 + 4);
    t82 = *((unsigned int *)t80);
    t83 = (~(t82));
    t84 = *((unsigned int *)t28);
    t85 = (t84 & t83);
    t86 = *((unsigned int *)t81);
    t87 = (~(t86));
    t88 = *((unsigned int *)t58);
    t89 = (t88 & t87);
    t90 = (~(t85));
    t91 = (~(t89));
    t92 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t92 & t90);
    t93 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t93 & t91);
    goto LAB44;

LAB45:    *((unsigned int *)t94) = 1;
    goto LAB48;

LAB47:    t101 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t101) = 1;
    goto LAB48;

LAB49:    t107 = (t0 + 1316U);
    t108 = *((char **)t107);
    t107 = (t0 + 1592U);
    t109 = *((char **)t107);
    memset(t110, 0, 8);
    t107 = (t108 + 4);
    t111 = (t109 + 4);
    t112 = *((unsigned int *)t108);
    t113 = *((unsigned int *)t109);
    t114 = (t112 ^ t113);
    t115 = *((unsigned int *)t107);
    t116 = *((unsigned int *)t111);
    t117 = (t115 ^ t116);
    t118 = (t114 | t117);
    t119 = *((unsigned int *)t107);
    t120 = *((unsigned int *)t111);
    t121 = (t119 | t120);
    t122 = (~(t121));
    t123 = (t118 & t122);
    if (t123 != 0)
        goto LAB53;

LAB52:    if (t121 != 0)
        goto LAB54;

LAB55:    memset(t125, 0, 8);
    t126 = (t110 + 4);
    t127 = *((unsigned int *)t126);
    t128 = (~(t127));
    t129 = *((unsigned int *)t110);
    t130 = (t129 & t128);
    t131 = (t130 & 1U);
    if (t131 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t126) != 0)
        goto LAB58;

LAB59:    t134 = *((unsigned int *)t94);
    t135 = *((unsigned int *)t125);
    t136 = (t134 | t135);
    *((unsigned int *)t133) = t136;
    t137 = (t94 + 4);
    t138 = (t125 + 4);
    t139 = (t133 + 4);
    t140 = *((unsigned int *)t137);
    t141 = *((unsigned int *)t138);
    t142 = (t140 | t141);
    *((unsigned int *)t139) = t142;
    t143 = *((unsigned int *)t139);
    t144 = (t143 != 0);
    if (t144 == 1)
        goto LAB60;

LAB61:
LAB62:    goto LAB51;

LAB53:    *((unsigned int *)t110) = 1;
    goto LAB55;

LAB54:    t124 = (t110 + 4);
    *((unsigned int *)t110) = 1;
    *((unsigned int *)t124) = 1;
    goto LAB55;

LAB56:    *((unsigned int *)t125) = 1;
    goto LAB59;

LAB58:    t132 = (t125 + 4);
    *((unsigned int *)t125) = 1;
    *((unsigned int *)t132) = 1;
    goto LAB59;

LAB60:    t145 = *((unsigned int *)t133);
    t146 = *((unsigned int *)t139);
    *((unsigned int *)t133) = (t145 | t146);
    t147 = (t94 + 4);
    t148 = (t125 + 4);
    t149 = *((unsigned int *)t147);
    t150 = (~(t149));
    t151 = *((unsigned int *)t94);
    t152 = (t151 & t150);
    t153 = *((unsigned int *)t148);
    t154 = (~(t153));
    t155 = *((unsigned int *)t125);
    t156 = (t155 & t154);
    t157 = (~(t152));
    t158 = (~(t156));
    t159 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t159 & t157);
    t160 = *((unsigned int *)t139);
    *((unsigned int *)t139) = (t160 & t158);
    goto LAB62;

LAB63:    xsi_set_current_line(64, ng0);

LAB66:    xsi_set_current_line(65, ng0);
    xsi_vlogfile_write(1, 0, 0, ng30, 1, t0);
    xsi_set_current_line(66, ng0);
    xsi_vlogfile_write(1, 0, 0, ng31, 1, t0);
    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1408U);
    t3 = *((char **)t2);
    t2 = (t0 + 1500U);
    t4 = *((char **)t2);
    t2 = (t0 + 1592U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng32, 4, t0, (char)118, t3, 32, (char)118, t4, 5, (char)118, t5, 32);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1040U);
    t3 = *((char **)t2);
    t2 = (t0 + 1224U);
    t4 = *((char **)t2);
    t2 = (t0 + 1316U);
    t5 = *((char **)t2);
    xsi_vlogfile_write(1, 0, 0, ng33, 4, t0, (char)118, t3, 32, (char)118, t4, 5, (char)118, t5, 32);
    xsi_set_current_line(69, ng0);
    xsi_vlogfile_write(1, 0, 0, ng30, 1, t0);
    xsi_set_current_line(70, ng0);
    xsi_vlogfile_write(1, 0, 0, ng29, 1, t0);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3832);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB67;
    goto LAB1;

LAB67:    xsi_set_current_line(73, ng0);
    xsi_vlog_finish(1);
    goto LAB65;

}

static void Always_85_5(char *t0)
{
    char t13[8];
    char t32[8];
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
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;

LAB0:    t1 = (t0 + 4076U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 4304);
    *((int *)t2) = 1;
    t3 = (t0 + 4104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);

LAB5:    xsi_set_current_line(86, ng0);
    t4 = (t0 + 948U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2372);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng36)));
    memset(t13, 0, 8);
    t11 = (t4 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB11;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB13:    t22 = (t13 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t13);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(95, ng0);

LAB18:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng25)));
    t3 = (t0 + 2372);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2464);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB19:    t5 = ((char*)((ng1)));
    t34 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t34 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng3)));
    t34 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t34 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng5)));
    t34 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t34 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng7)));
    t34 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t34 == 1)
        goto LAB26;

LAB27:
LAB28:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(86, ng0);

LAB9:    xsi_set_current_line(87, ng0);
    t11 = ((char*)((ng25)));
    t12 = (t0 + 2372);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2464);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng35)));
    t3 = (t0 + 1820);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1912);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 8, 0LL);
    goto LAB8;

LAB11:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB12:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(92, ng0);

LAB17:    xsi_set_current_line(93, ng0);
    t28 = (t0 + 2372);
    t29 = (t28 + 36U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng34)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t30, 32, t31, 32);
    t33 = (t0 + 2372);
    xsi_vlogvar_wait_assign_value(t33, t32, 0, 0, 32, 0LL);
    goto LAB16;

LAB20:    xsi_set_current_line(98, ng0);

LAB29:    xsi_set_current_line(99, ng0);
    t11 = ((char*)((ng3)));
    t12 = (t0 + 2464);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 1820);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2188);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t11 = (t0 + 2464);
    t12 = (t11 + 36U);
    t21 = *((char **)t12);
    t22 = (t0 + 1408U);
    t28 = *((char **)t22);
    memset(t13, 0, 8);
    t22 = (t13 + 4);
    t29 = (t28 + 4);
    t6 = *((unsigned int *)t28);
    t7 = (t6 >> 12);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t29);
    t9 = (t8 >> 12);
    *((unsigned int *)t22) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 15U);
    t14 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t14 & 15U);
    t30 = (t0 + 3976);
    t31 = (t0 + 484);
    t33 = xsi_create_subprogram_invocation(t30, 0, t0, t31, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t31, t33);
    t35 = (t0 + 2556);
    xsi_vlogvar_assign_value(t35, t5, 0, 0, 1);
    t36 = (t0 + 2648);
    xsi_vlogvar_assign_value(t36, t21, 0, 0, 2);
    t37 = (t0 + 2740);
    xsi_vlogvar_assign_value(t37, t13, 0, 0, 4);

LAB32:    t38 = (t0 + 4028);
    t39 = *((char **)t38);
    t40 = (t39 + 44U);
    t41 = *((char **)t40);
    t42 = (t41 + 148U);
    t43 = *((char **)t42);
    t44 = (t43 + 0U);
    t45 = *((char **)t44);
    t34 = ((int  (*)(char *, char *))t45)(t0, t39);

LAB34:    if (t34 != 0)
        goto LAB35;

LAB30:    t39 = (t0 + 484);
    xsi_vlog_subprogram_popinvocation(t39);

LAB31:    t46 = (t0 + 4028);
    t47 = *((char **)t46);
    t46 = (t0 + 2832);
    t48 = (t46 + 36U);
    t49 = *((char **)t48);
    t50 = (t0 + 1912);
    xsi_vlogvar_assign_value(t50, t49, 0, 0, 8);
    t51 = (t0 + 484);
    t52 = (t0 + 3976);
    t53 = 0;
    xsi_delete_subprogram_invocation(t51, t47, t0, t52, t53);
    goto LAB28;

LAB22:    xsi_set_current_line(103, ng0);

LAB36:    xsi_set_current_line(104, ng0);
    t3 = ((char*)((ng5)));
    t5 = (t0 + 2464);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng37)));
    t3 = (t0 + 1820);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 2188);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t11 = (t0 + 2464);
    t12 = (t11 + 36U);
    t21 = *((char **)t12);
    t22 = (t0 + 1408U);
    t28 = *((char **)t22);
    memset(t13, 0, 8);
    t22 = (t13 + 4);
    t29 = (t28 + 4);
    t6 = *((unsigned int *)t28);
    t7 = (t6 >> 8);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t29);
    t9 = (t8 >> 8);
    *((unsigned int *)t22) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 15U);
    t14 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t14 & 15U);
    t30 = (t0 + 3976);
    t31 = (t0 + 484);
    t33 = xsi_create_subprogram_invocation(t30, 0, t0, t31, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t31, t33);
    t35 = (t0 + 2556);
    xsi_vlogvar_assign_value(t35, t5, 0, 0, 1);
    t36 = (t0 + 2648);
    xsi_vlogvar_assign_value(t36, t21, 0, 0, 2);
    t37 = (t0 + 2740);
    xsi_vlogvar_assign_value(t37, t13, 0, 0, 4);

LAB39:    t38 = (t0 + 4028);
    t39 = *((char **)t38);
    t40 = (t39 + 44U);
    t41 = *((char **)t40);
    t42 = (t41 + 148U);
    t43 = *((char **)t42);
    t44 = (t43 + 0U);
    t45 = *((char **)t44);
    t34 = ((int  (*)(char *, char *))t45)(t0, t39);

LAB41:    if (t34 != 0)
        goto LAB42;

LAB37:    t39 = (t0 + 484);
    xsi_vlog_subprogram_popinvocation(t39);

LAB38:    t46 = (t0 + 4028);
    t47 = *((char **)t46);
    t46 = (t0 + 2832);
    t48 = (t46 + 36U);
    t49 = *((char **)t48);
    t50 = (t0 + 1912);
    xsi_vlogvar_assign_value(t50, t49, 0, 0, 8);
    t51 = (t0 + 484);
    t52 = (t0 + 3976);
    t53 = 0;
    xsi_delete_subprogram_invocation(t51, t47, t0, t52, t53);
    goto LAB28;

LAB24:    xsi_set_current_line(108, ng0);

LAB43:    xsi_set_current_line(109, ng0);
    t3 = ((char*)((ng7)));
    t5 = (t0 + 2464);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng38)));
    t3 = (t0 + 1820);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 2188);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t11 = (t0 + 2464);
    t12 = (t11 + 36U);
    t21 = *((char **)t12);
    t22 = (t0 + 1408U);
    t28 = *((char **)t22);
    memset(t13, 0, 8);
    t22 = (t13 + 4);
    t29 = (t28 + 4);
    t6 = *((unsigned int *)t28);
    t7 = (t6 >> 4);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t29);
    t9 = (t8 >> 4);
    *((unsigned int *)t22) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 15U);
    t14 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t14 & 15U);
    t30 = (t0 + 3976);
    t31 = (t0 + 484);
    t33 = xsi_create_subprogram_invocation(t30, 0, t0, t31, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t31, t33);
    t35 = (t0 + 2556);
    xsi_vlogvar_assign_value(t35, t5, 0, 0, 1);
    t36 = (t0 + 2648);
    xsi_vlogvar_assign_value(t36, t21, 0, 0, 2);
    t37 = (t0 + 2740);
    xsi_vlogvar_assign_value(t37, t13, 0, 0, 4);

LAB46:    t38 = (t0 + 4028);
    t39 = *((char **)t38);
    t40 = (t39 + 44U);
    t41 = *((char **)t40);
    t42 = (t41 + 148U);
    t43 = *((char **)t42);
    t44 = (t43 + 0U);
    t45 = *((char **)t44);
    t34 = ((int  (*)(char *, char *))t45)(t0, t39);

LAB48:    if (t34 != 0)
        goto LAB49;

LAB44:    t39 = (t0 + 484);
    xsi_vlog_subprogram_popinvocation(t39);

LAB45:    t46 = (t0 + 4028);
    t47 = *((char **)t46);
    t46 = (t0 + 2832);
    t48 = (t46 + 36U);
    t49 = *((char **)t48);
    t50 = (t0 + 1912);
    xsi_vlogvar_assign_value(t50, t49, 0, 0, 8);
    t51 = (t0 + 484);
    t52 = (t0 + 3976);
    t53 = 0;
    xsi_delete_subprogram_invocation(t51, t47, t0, t52, t53);
    goto LAB28;

LAB26:    xsi_set_current_line(113, ng0);

LAB50:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2464);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng39)));
    t3 = (t0 + 1820);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2188);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t11 = (t0 + 2464);
    t12 = (t11 + 36U);
    t21 = *((char **)t12);
    t22 = (t0 + 1408U);
    t28 = *((char **)t22);
    memset(t13, 0, 8);
    t22 = (t13 + 4);
    t29 = (t28 + 4);
    t6 = *((unsigned int *)t28);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t29);
    t9 = (t8 >> 0);
    *((unsigned int *)t22) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 15U);
    t14 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t14 & 15U);
    t30 = (t0 + 3976);
    t31 = (t0 + 484);
    t33 = xsi_create_subprogram_invocation(t30, 0, t0, t31, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t31, t33);
    t35 = (t0 + 2556);
    xsi_vlogvar_assign_value(t35, t5, 0, 0, 1);
    t36 = (t0 + 2648);
    xsi_vlogvar_assign_value(t36, t21, 0, 0, 2);
    t37 = (t0 + 2740);
    xsi_vlogvar_assign_value(t37, t13, 0, 0, 4);

LAB53:    t38 = (t0 + 4028);
    t39 = *((char **)t38);
    t40 = (t39 + 44U);
    t41 = *((char **)t40);
    t42 = (t41 + 148U);
    t43 = *((char **)t42);
    t44 = (t43 + 0U);
    t45 = *((char **)t44);
    t34 = ((int  (*)(char *, char *))t45)(t0, t39);

LAB55:    if (t34 != 0)
        goto LAB56;

LAB51:    t39 = (t0 + 484);
    xsi_vlog_subprogram_popinvocation(t39);

LAB52:    t46 = (t0 + 4028);
    t47 = *((char **)t46);
    t46 = (t0 + 2832);
    t48 = (t46 + 36U);
    t49 = *((char **)t48);
    t50 = (t0 + 1912);
    xsi_vlogvar_assign_value(t50, t49, 0, 0, 8);
    t51 = (t0 + 484);
    t52 = (t0 + 3976);
    t53 = 0;
    xsi_delete_subprogram_invocation(t51, t47, t0, t52, t53);
    goto LAB28;

LAB33:;
LAB35:    t38 = (t0 + 4076U);
    *((char **)t38) = &&LAB32;
    goto LAB1;

LAB40:;
LAB42:    t38 = (t0 + 4076U);
    *((char **)t38) = &&LAB39;
    goto LAB1;

LAB47:;
LAB49:    t38 = (t0 + 4076U);
    *((char **)t38) = &&LAB46;
    goto LAB1;

LAB54:;
LAB56:    t38 = (t0 + 4076U);
    *((char **)t38) = &&LAB53;
    goto LAB1;

}


extern void work_m_00000000001990281515_0924832676_init()
{
	static char *pe[] = {(void *)Initial_19_0,(void *)NetDecl_45_1,(void *)NetDecl_46_2,(void *)NetDecl_47_3,(void *)Always_49_4,(void *)Always_85_5};
	static char *se[] = {(void *)sp_segans_display};
	xsi_register_didat("work_m_00000000001990281515_0924832676", "isim/cpu_top_tb_isim_beh.exe.sim/work/m_00000000001990281515_0924832676.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
