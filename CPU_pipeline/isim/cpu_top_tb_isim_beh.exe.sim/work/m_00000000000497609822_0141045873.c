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
static const char *ng0 = "D:/CPU_Pipeline_BranchHazard/lab3/Branch_Target_Buffer.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {4, 0};
static int ng3[] = {0, 0};
static int ng4[] = {1, 0};
static unsigned int ng5[] = {4294967295U, 0U};



static void NetDecl_35_0(char *t0)
{
    char t5[16];
    char t12[8];
    char t22[8];
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
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 2548U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 2024);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 2024);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t13 = (t0 + 600U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 2);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 2);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 1023U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1023U);
    xsi_vlog_generic_get_array_select_value(t5, 54, t4, t8, t11, 2, 1, t12, 10, 2);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t24 = (t5 + 8);
    t25 = (t5 + 12);
    t26 = *((unsigned int *)t24);
    t27 = (t26 >> 21);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 21);
    *((unsigned int *)t23) = t29;
    t30 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t30 & 1U);
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t31 & 1U);
    t32 = (t0 + 3844);
    t33 = (t32 + 32U);
    t34 = *((char **)t33);
    t35 = (t34 + 40U);
    t36 = *((char **)t35);
    memset(t36, 0, 8);
    t37 = 1U;
    t38 = t37;
    t39 = (t22 + 4);
    t40 = *((unsigned int *)t22);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t39);
    t38 = (t38 & t41);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 | t37);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t44 | t38);
    xsi_driver_vfirst_trans(t32, 0, 0U);
    t45 = (t0 + 3752);
    *((int *)t45) = 1;

LAB1:    return;
}

static void NetDecl_36_1(char *t0)
{
    char t5[16];
    char t12[8];
    char t22[8];
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
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 2692U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 2024);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 2024);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t13 = (t0 + 600U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 2);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 2);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 1023U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1023U);
    xsi_vlog_generic_get_array_select_value(t5, 54, t4, t8, t11, 2, 1, t12, 10, 2);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t24 = (t5 + 8);
    t25 = (t5 + 12);
    t26 = *((unsigned int *)t24);
    t27 = (t26 >> 20);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 20);
    *((unsigned int *)t23) = t29;
    t30 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t30 & 1U);
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t31 & 1U);
    t32 = (t0 + 3880);
    t33 = (t32 + 32U);
    t34 = *((char **)t33);
    t35 = (t34 + 40U);
    t36 = *((char **)t35);
    memset(t36, 0, 8);
    t37 = 1U;
    t38 = t37;
    t39 = (t22 + 4);
    t40 = *((unsigned int *)t22);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t39);
    t38 = (t38 & t41);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 | t37);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t44 | t38);
    xsi_driver_vfirst_trans(t32, 0, 0U);
    t45 = (t0 + 3760);
    *((int *)t45) = 1;

LAB1:    return;
}

static void NetDecl_37_2(char *t0)
{
    char t5[16];
    char t12[8];
    char t22[8];
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
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;

LAB0:    t1 = (t0 + 2836U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 2024);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 2024);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t13 = (t0 + 600U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 2);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 2);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 1023U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1023U);
    xsi_vlog_generic_get_array_select_value(t5, 54, t4, t8, t11, 2, 1, t12, 10, 2);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t24 = (t5 + 8);
    t25 = (t5 + 12);
    t26 = *((unsigned int *)t24);
    t27 = (t26 >> 0);
    *((unsigned int *)t22) = t27;
    t28 = *((unsigned int *)t25);
    t29 = (t28 >> 0);
    *((unsigned int *)t23) = t29;
    t30 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t30 & 1048575U);
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t31 & 1048575U);
    t32 = (t0 + 3916);
    t33 = (t32 + 32U);
    t34 = *((char **)t33);
    t35 = (t34 + 40U);
    t36 = *((char **)t35);
    memset(t36, 0, 8);
    t37 = 1048575U;
    t38 = t37;
    t39 = (t22 + 4);
    t40 = *((unsigned int *)t22);
    t37 = (t37 & t40);
    t41 = *((unsigned int *)t39);
    t38 = (t38 & t41);
    t42 = (t36 + 4);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 | t37);
    t44 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t44 | t38);
    xsi_driver_vfirst_trans(t32, 0, 19U);
    t45 = (t0 + 3768);
    *((int *)t45) = 1;

LAB1:    return;
}

static void NetDecl_38_3(char *t0)
{
    char t5[16];
    char t12[8];
    char t22[8];
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
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 2980U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 2024);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 2024);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    t13 = (t0 + 600U);
    t14 = *((char **)t13);
    memset(t12, 0, 8);
    t13 = (t12 + 4);
    t15 = (t14 + 4);
    t16 = *((unsigned int *)t14);
    t17 = (t16 >> 2);
    *((unsigned int *)t12) = t17;
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 2);
    *((unsigned int *)t13) = t19;
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t20 & 1023U);
    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1023U);
    xsi_vlog_generic_get_array_select_value(t5, 54, t4, t8, t11, 2, 1, t12, 10, 2);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t24 = (t5 + 4);
    t25 = *((unsigned int *)t5);
    t26 = (t25 >> 0);
    *((unsigned int *)t22) = t26;
    t27 = *((unsigned int *)t24);
    t28 = (t27 >> 0);
    *((unsigned int *)t23) = t28;
    t29 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t29 & 4294967295U);
    t30 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t30 & 4294967295U);
    t31 = (t0 + 3952);
    t32 = (t31 + 32U);
    t33 = *((char **)t32);
    t34 = (t33 + 40U);
    t35 = *((char **)t34);
    memcpy(t35, t22, 8);
    xsi_driver_vfirst_trans(t31, 0, 31U);
    t36 = (t0 + 3776);
    *((int *)t36) = 1;

LAB1:    return;
}

static void Always_39_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 3124U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 3784);
    *((int *)t2) = 1;
    t3 = (t0 + 3152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);

LAB5:    xsi_set_current_line(41, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    t4 = (t0 + 1932);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB2;

}

static void Always_43_5(char *t0)
{
    char t13[8];
    char t27[8];
    char t34[8];
    char t68[16];
    char t71[8];
    char t85[8];
    char t86[8];
    char t93[8];
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
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t69;
    char *t70;
    char *t72;
    char *t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t91;
    char *t92;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;
    unsigned int t106;
    int t107;
    char *t108;
    unsigned int t109;
    int t110;
    int t111;
    unsigned int t112;
    unsigned int t113;
    int t114;
    int t115;

LAB0:    t1 = (t0 + 3268U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3792);
    *((int *)t2) = 1;
    t3 = (t0 + 3296);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(44, ng0);

LAB5:    xsi_set_current_line(45, ng0);
    t4 = (t0 + 1152U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(46, ng0);

LAB9:    xsi_set_current_line(47, ng0);
    t11 = (t0 + 784U);
    t12 = *((char **)t11);
    memset(t13, 0, 8);
    t11 = (t12 + 4);
    t14 = *((unsigned int *)t11);
    t15 = (~(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t11) != 0)
        goto LAB12;

LAB13:    t20 = (t13 + 4);
    t21 = *((unsigned int *)t13);
    t22 = (!(t21));
    t23 = *((unsigned int *)t20);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB14;

LAB15:    memcpy(t34, t13, 8);

LAB16:    t62 = (t34 + 4);
    t63 = *((unsigned int *)t62);
    t64 = (~(t63));
    t65 = *((unsigned int *)t34);
    t66 = (t65 & t64);
    t67 = (t66 != 0);
    if (t67 > 0)
        goto LAB24;

LAB25:
LAB26:    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB12:    t19 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB13;

LAB14:    t25 = (t0 + 876U);
    t26 = *((char **)t25);
    memset(t27, 0, 8);
    t25 = (t26 + 4);
    t28 = *((unsigned int *)t25);
    t29 = (~(t28));
    t30 = *((unsigned int *)t26);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t25) != 0)
        goto LAB19;

LAB20:    t35 = *((unsigned int *)t13);
    t36 = *((unsigned int *)t27);
    t37 = (t35 | t36);
    *((unsigned int *)t34) = t37;
    t38 = (t13 + 4);
    t39 = (t27 + 4);
    t40 = (t34 + 4);
    t41 = *((unsigned int *)t38);
    t42 = *((unsigned int *)t39);
    t43 = (t41 | t42);
    *((unsigned int *)t40) = t43;
    t44 = *((unsigned int *)t40);
    t45 = (t44 != 0);
    if (t45 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB16;

LAB17:    *((unsigned int *)t27) = 1;
    goto LAB20;

LAB19:    t33 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB20;

LAB21:    t46 = *((unsigned int *)t34);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t34) = (t46 | t47);
    t48 = (t13 + 4);
    t49 = (t27 + 4);
    t50 = *((unsigned int *)t48);
    t51 = (~(t50));
    t52 = *((unsigned int *)t13);
    t53 = (t52 & t51);
    t54 = *((unsigned int *)t49);
    t55 = (~(t54));
    t56 = *((unsigned int *)t27);
    t57 = (t56 & t55);
    t58 = (~(t53));
    t59 = (~(t57));
    t60 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t60 & t58);
    t61 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t61 & t59);
    goto LAB23;

LAB24:    xsi_set_current_line(48, ng0);

LAB27:    xsi_set_current_line(49, ng0);
    t69 = (t0 + 692U);
    t70 = *((char **)t69);
    t69 = (t0 + 1932);
    t72 = (t69 + 36U);
    t73 = *((char **)t72);
    memset(t71, 0, 8);
    t74 = (t71 + 4);
    t75 = (t73 + 4);
    t76 = *((unsigned int *)t73);
    t77 = (t76 >> 12);
    *((unsigned int *)t71) = t77;
    t78 = *((unsigned int *)t75);
    t79 = (t78 >> 12);
    *((unsigned int *)t74) = t79;
    t80 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t80 & 1048575U);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t81 & 1048575U);
    t82 = (t0 + 876U);
    t83 = *((char **)t82);
    t82 = ((char*)((ng1)));
    xsi_vlogtype_concat(t68, 54, 54, 4U, t82, 1, t83, 1, t71, 20, t70, 32);
    t84 = (t0 + 2024);
    t87 = (t0 + 2024);
    t88 = (t87 + 44U);
    t89 = *((char **)t88);
    t90 = (t0 + 2024);
    t91 = (t90 + 40U);
    t92 = *((char **)t91);
    t94 = (t0 + 1932);
    t95 = (t94 + 36U);
    t96 = *((char **)t95);
    memset(t93, 0, 8);
    t97 = (t93 + 4);
    t98 = (t96 + 4);
    t99 = *((unsigned int *)t96);
    t100 = (t99 >> 2);
    *((unsigned int *)t93) = t100;
    t101 = *((unsigned int *)t98);
    t102 = (t101 >> 2);
    *((unsigned int *)t97) = t102;
    t103 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t103 & 1023U);
    t104 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t104 & 1023U);
    xsi_vlog_generic_convert_array_indices(t85, t86, t89, t92, 2, 1, t93, 10, 2);
    t105 = (t85 + 4);
    t106 = *((unsigned int *)t105);
    t107 = (!(t106));
    t108 = (t86 + 4);
    t109 = *((unsigned int *)t108);
    t110 = (!(t109));
    t111 = (t107 && t110);
    if (t111 == 1)
        goto LAB28;

LAB29:    goto LAB26;

LAB28:    t112 = *((unsigned int *)t85);
    t113 = *((unsigned int *)t86);
    t114 = (t112 - t113);
    t115 = (t114 + 1);
    xsi_vlogvar_wait_assign_value(t84, t68, 0, *((unsigned int *)t86), t115, 0LL);
    goto LAB29;

}

static void Always_53_6(char *t0)
{
    char t4[8];
    char t13[8];
    char t28[8];
    char t37[8];
    char t53[8];
    char t61[8];
    char t97[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    char *t98;

LAB0:    t1 = (t0 + 3412U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3800);
    *((int *)t2) = 1;
    t3 = (t0 + 3440);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t5 = (t0 + 1244U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    memset(t13, 0, 8);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t4);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) != 0)
        goto LAB12;

LAB13:    t21 = (t13 + 4);
    t22 = *((unsigned int *)t13);
    t23 = (!(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB14;

LAB15:    memcpy(t61, t13, 8);

LAB16:    t89 = (t61 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t61);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB28;

LAB29:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t2) != 0)
        goto LAB34;

LAB35:    t6 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (!(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t16 || t17);
    if (t18 > 0)
        goto LAB36;

LAB37:    memcpy(t28, t4, 8);

LAB38:    t38 = (t28 + 4);
    t57 = *((unsigned int *)t38);
    t58 = (~(t57));
    t59 = *((unsigned int *)t28);
    t62 = (t59 & t58);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(66, ng0);

LAB50:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB48:
LAB30:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB12:    t20 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB13;

LAB14:    t26 = (t0 + 1428U);
    t27 = *((char **)t26);
    t26 = (t0 + 600U);
    t29 = *((char **)t26);
    memset(t28, 0, 8);
    t26 = (t28 + 4);
    t30 = (t29 + 4);
    t31 = *((unsigned int *)t29);
    t32 = (t31 >> 12);
    *((unsigned int *)t28) = t32;
    t33 = *((unsigned int *)t30);
    t34 = (t33 >> 12);
    *((unsigned int *)t26) = t34;
    t35 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t35 & 1048575U);
    t36 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t36 & 1048575U);
    memset(t37, 0, 8);
    t38 = (t27 + 4);
    t39 = (t28 + 4);
    t40 = *((unsigned int *)t27);
    t41 = *((unsigned int *)t28);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB18;

LAB17:    if (t49 != 0)
        goto LAB19;

LAB20:    memset(t53, 0, 8);
    t54 = (t37 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t54) != 0)
        goto LAB23;

LAB24:    t62 = *((unsigned int *)t13);
    t63 = *((unsigned int *)t53);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = (t13 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB16;

LAB18:    *((unsigned int *)t37) = 1;
    goto LAB20;

LAB19:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t53) = 1;
    goto LAB24;

LAB23:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB24;

LAB25:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t13 + 4);
    t76 = (t53 + 4);
    t77 = *((unsigned int *)t75);
    t78 = (~(t77));
    t79 = *((unsigned int *)t13);
    t80 = (t79 & t78);
    t81 = *((unsigned int *)t76);
    t82 = (~(t81));
    t83 = *((unsigned int *)t53);
    t84 = (t83 & t82);
    t85 = (~(t80));
    t86 = (~(t84));
    t87 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t87 & t85);
    t88 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t88 & t86);
    goto LAB27;

LAB28:    xsi_set_current_line(56, ng0);

LAB31:    xsi_set_current_line(57, ng0);
    t95 = (t0 + 600U);
    t96 = *((char **)t95);
    t95 = ((char*)((ng2)));
    memset(t97, 0, 8);
    xsi_vlog_unsigned_add(t97, 32, t96, 32, t95, 32);
    t98 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t98, t97, 0, 0, 32, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB30;

LAB32:    *((unsigned int *)t4) = 1;
    goto LAB35;

LAB34:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB35;

LAB36:    t12 = (t0 + 1336U);
    t14 = *((char **)t12);
    memset(t13, 0, 8);
    t12 = (t14 + 4);
    t19 = *((unsigned int *)t12);
    t22 = (~(t19));
    t23 = *((unsigned int *)t14);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t12) != 0)
        goto LAB41;

LAB42:    t31 = *((unsigned int *)t4);
    t32 = *((unsigned int *)t13);
    t33 = (t31 | t32);
    *((unsigned int *)t28) = t33;
    t21 = (t4 + 4);
    t26 = (t13 + 4);
    t27 = (t28 + 4);
    t34 = *((unsigned int *)t21);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    *((unsigned int *)t27) = t36;
    t40 = *((unsigned int *)t27);
    t41 = (t40 != 0);
    if (t41 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB38;

LAB39:    *((unsigned int *)t13) = 1;
    goto LAB42;

LAB41:    t20 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB42;

LAB43:    t42 = *((unsigned int *)t28);
    t43 = *((unsigned int *)t27);
    *((unsigned int *)t28) = (t42 | t43);
    t29 = (t4 + 4);
    t30 = (t13 + 4);
    t44 = *((unsigned int *)t29);
    t45 = (~(t44));
    t46 = *((unsigned int *)t4);
    t80 = (t46 & t45);
    t47 = *((unsigned int *)t30);
    t48 = (~(t47));
    t49 = *((unsigned int *)t13);
    t84 = (t49 & t48);
    t50 = (~(t80));
    t51 = (~(t84));
    t55 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t55 & t50);
    t56 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t56 & t51);
    goto LAB45;

LAB46:    xsi_set_current_line(61, ng0);

LAB49:    xsi_set_current_line(62, ng0);
    t39 = (t0 + 1520U);
    t52 = *((char **)t39);
    t39 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t39, t52, 0, 0, 32, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB48;

}

static void Initial_71_7(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(71, ng0);

LAB2:    xsi_set_current_line(72, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 1840);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(73, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}


extern void work_m_00000000000497609822_0141045873_init()
{
	static char *pe[] = {(void *)NetDecl_35_0,(void *)NetDecl_36_1,(void *)NetDecl_37_2,(void *)NetDecl_38_3,(void *)Always_39_4,(void *)Always_43_5,(void *)Always_53_6,(void *)Initial_71_7};
	xsi_register_didat("work_m_00000000000497609822_0141045873", "isim/cpu_top_tb_isim_beh.exe.sim/work/m_00000000000497609822_0141045873.didat");
	xsi_register_executes(pe);
}
