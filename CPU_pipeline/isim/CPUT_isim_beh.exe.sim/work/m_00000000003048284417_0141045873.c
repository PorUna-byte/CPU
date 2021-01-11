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
static int ng6[] = {1024, 0};
static unsigned int ng7[] = {0U, 0U, 0U, 0U};



static void NetDecl_38_0(char *t0)
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

LAB0:    t1 = (t0 + 2916U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2392);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 2392);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 2392);
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
    t32 = (t0 + 4060);
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
    t45 = (t0 + 3976);
    *((int *)t45) = 1;

LAB1:    return;
}

static void NetDecl_39_1(char *t0)
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

LAB0:    t1 = (t0 + 3060U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 2392);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 2392);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 2392);
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
    t32 = (t0 + 4096);
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
    t45 = (t0 + 3984);
    *((int *)t45) = 1;

LAB1:    return;
}

static void NetDecl_40_2(char *t0)
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

LAB0:    t1 = (t0 + 3204U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2392);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 2392);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 2392);
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
    t32 = (t0 + 4132);
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
    t45 = (t0 + 3992);
    *((int *)t45) = 1;

LAB1:    return;
}

static void NetDecl_41_3(char *t0)
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

LAB0:    t1 = (t0 + 3348U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2392);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = (t0 + 2392);
    t7 = (t6 + 44U);
    t8 = *((char **)t7);
    t9 = (t0 + 2392);
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
    t31 = (t0 + 4168);
    t32 = (t31 + 32U);
    t33 = *((char **)t32);
    t34 = (t33 + 40U);
    t35 = *((char **)t34);
    memcpy(t35, t22, 8);
    xsi_driver_vfirst_trans(t31, 0, 31U);
    t36 = (t0 + 4000);
    *((int *)t36) = 1;

LAB1:    return;
}

static void Always_42_4(char *t0)
{
    char t13[8];
    char t27[8];
    char t34[8];
    char t68[16];
    char t71[8];
    char t83[8];
    char t84[8];
    char t91[8];
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
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t102;
    int t103;
    char *t104;
    unsigned int t105;
    int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    int t110;
    int t111;

LAB0:    t1 = (t0 + 3492U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 4008);
    *((int *)t2) = 1;
    t3 = (t0 + 3520);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1244U);
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

LAB6:    xsi_set_current_line(45, ng0);

LAB9:    xsi_set_current_line(46, ng0);
    t11 = (t0 + 876U);
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

LAB14:    t25 = (t0 + 968U);
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

LAB24:    xsi_set_current_line(47, ng0);
    t69 = (t0 + 784U);
    t70 = *((char **)t69);
    t69 = (t0 + 692U);
    t72 = *((char **)t69);
    memset(t71, 0, 8);
    t69 = (t71 + 4);
    t73 = (t72 + 4);
    t74 = *((unsigned int *)t72);
    t75 = (t74 >> 12);
    *((unsigned int *)t71) = t75;
    t76 = *((unsigned int *)t73);
    t77 = (t76 >> 12);
    *((unsigned int *)t69) = t77;
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t78 & 1048575U);
    t79 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t79 & 1048575U);
    t80 = (t0 + 968U);
    t81 = *((char **)t80);
    t80 = ((char*)((ng1)));
    xsi_vlogtype_concat(t68, 54, 54, 4U, t80, 1, t81, 1, t71, 20, t70, 32);
    t82 = (t0 + 2392);
    t85 = (t0 + 2392);
    t86 = (t85 + 44U);
    t87 = *((char **)t86);
    t88 = (t0 + 2392);
    t89 = (t88 + 40U);
    t90 = *((char **)t89);
    t92 = (t0 + 692U);
    t93 = *((char **)t92);
    memset(t91, 0, 8);
    t92 = (t91 + 4);
    t94 = (t93 + 4);
    t95 = *((unsigned int *)t93);
    t96 = (t95 >> 2);
    *((unsigned int *)t91) = t96;
    t97 = *((unsigned int *)t94);
    t98 = (t97 >> 2);
    *((unsigned int *)t92) = t98;
    t99 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t99 & 1023U);
    t100 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t100 & 1023U);
    xsi_vlog_generic_convert_array_indices(t83, t84, t87, t90, 2, 1, t91, 10, 2);
    t101 = (t83 + 4);
    t102 = *((unsigned int *)t101);
    t103 = (!(t102));
    t104 = (t84 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (!(t105));
    t107 = (t103 && t106);
    if (t107 == 1)
        goto LAB27;

LAB28:    goto LAB26;

LAB27:    t108 = *((unsigned int *)t83);
    t109 = *((unsigned int *)t84);
    t110 = (t108 - t109);
    t111 = (t110 + 1);
    xsi_vlogvar_wait_assign_value(t82, t68, 0, *((unsigned int *)t84), t111, 0LL);
    goto LAB28;

}

static void Always_50_5(char *t0)
{
    char t4[8];
    char t19[8];
    char t28[8];
    char t43[8];
    char t52[8];
    char t68[8];
    char t76[8];
    char t112[8];
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
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t42;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    char *t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    char *t110;
    char *t111;
    char *t113;

LAB0:    t1 = (t0 + 3636U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 4016);
    *((int *)t2) = 1;
    t3 = (t0 + 3664);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(51, ng0);

LAB5:    xsi_set_current_line(52, ng0);
    t5 = (t0 + 1520U);
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

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1428U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t22 = (~(t18));
    t23 = (t15 & t22);
    if (t23 != 0)
        goto LAB62;

LAB59:    if (t18 != 0)
        goto LAB61;

LAB60:    *((unsigned int *)t4) = 1;

LAB62:    t13 = (t4 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t30 = (t26 & t25);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB63;

LAB64:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);

LAB65:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(53, ng0);

LAB13:    xsi_set_current_line(54, ng0);
    t20 = (t0 + 1612U);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t21 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t20) == 0)
        goto LAB14;

LAB16:    t27 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t27) = 1;

LAB17:    memset(t28, 0, 8);
    t29 = (t19 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t19);
    t33 = (t32 & t31);
    t34 = (t33 & 1U);
    if (t34 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t29) != 0)
        goto LAB20;

LAB21:    t36 = (t28 + 4);
    t37 = *((unsigned int *)t28);
    t38 = (!(t37));
    t39 = *((unsigned int *)t36);
    t40 = (t38 || t39);
    if (t40 > 0)
        goto LAB22;

LAB23:    memcpy(t76, t28, 8);

LAB24:    t104 = (t76 + 4);
    t105 = *((unsigned int *)t104);
    t106 = (~(t105));
    t107 = *((unsigned int *)t76);
    t108 = (t107 & t106);
    t109 = (t108 != 0);
    if (t109 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB40;

LAB41:    if (*((unsigned int *)t2) != 0)
        goto LAB42;

LAB43:    t6 = (t4 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (!(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB44;

LAB45:    memcpy(t28, t4, 8);

LAB46:    t41 = (t28 + 4);
    t59 = *((unsigned int *)t41);
    t60 = (~(t59));
    t61 = *((unsigned int *)t28);
    t62 = (t61 & t60);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(65, ng0);

LAB58:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t3, 32, t2, 32);
    t5 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB56:
LAB38:    goto LAB12;

LAB14:    *((unsigned int *)t19) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t28) = 1;
    goto LAB21;

LAB20:    t35 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB21;

LAB22:    t41 = (t0 + 1796U);
    t42 = *((char **)t41);
    t41 = (t0 + 600U);
    t44 = *((char **)t41);
    memset(t43, 0, 8);
    t41 = (t43 + 4);
    t45 = (t44 + 4);
    t46 = *((unsigned int *)t44);
    t47 = (t46 >> 12);
    *((unsigned int *)t43) = t47;
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 12);
    *((unsigned int *)t41) = t49;
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t50 & 1048575U);
    t51 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t51 & 1048575U);
    memset(t52, 0, 8);
    t53 = (t42 + 4);
    t54 = (t43 + 4);
    t55 = *((unsigned int *)t42);
    t56 = *((unsigned int *)t43);
    t57 = (t55 ^ t56);
    t58 = *((unsigned int *)t53);
    t59 = *((unsigned int *)t54);
    t60 = (t58 ^ t59);
    t61 = (t57 | t60);
    t62 = *((unsigned int *)t53);
    t63 = *((unsigned int *)t54);
    t64 = (t62 | t63);
    t65 = (~(t64));
    t66 = (t61 & t65);
    if (t66 != 0)
        goto LAB26;

LAB25:    if (t64 != 0)
        goto LAB27;

LAB28:    memset(t68, 0, 8);
    t69 = (t52 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t52);
    t73 = (t72 & t71);
    t74 = (t73 & 1U);
    if (t74 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t69) != 0)
        goto LAB31;

LAB32:    t77 = *((unsigned int *)t28);
    t78 = *((unsigned int *)t68);
    t79 = (t77 | t78);
    *((unsigned int *)t76) = t79;
    t80 = (t28 + 4);
    t81 = (t68 + 4);
    t82 = (t76 + 4);
    t83 = *((unsigned int *)t80);
    t84 = *((unsigned int *)t81);
    t85 = (t83 | t84);
    *((unsigned int *)t82) = t85;
    t86 = *((unsigned int *)t82);
    t87 = (t86 != 0);
    if (t87 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB24;

LAB26:    *((unsigned int *)t52) = 1;
    goto LAB28;

LAB27:    t67 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t68) = 1;
    goto LAB32;

LAB31:    t75 = (t68 + 4);
    *((unsigned int *)t68) = 1;
    *((unsigned int *)t75) = 1;
    goto LAB32;

LAB33:    t88 = *((unsigned int *)t76);
    t89 = *((unsigned int *)t82);
    *((unsigned int *)t76) = (t88 | t89);
    t90 = (t28 + 4);
    t91 = (t68 + 4);
    t92 = *((unsigned int *)t90);
    t93 = (~(t92));
    t94 = *((unsigned int *)t28);
    t95 = (t94 & t93);
    t96 = *((unsigned int *)t91);
    t97 = (~(t96));
    t98 = *((unsigned int *)t68);
    t99 = (t98 & t97);
    t100 = (~(t95));
    t101 = (~(t99));
    t102 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t102 & t100);
    t103 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t103 & t101);
    goto LAB35;

LAB36:    xsi_set_current_line(55, ng0);

LAB39:    xsi_set_current_line(56, ng0);
    t110 = (t0 + 600U);
    t111 = *((char **)t110);
    t110 = ((char*)((ng2)));
    memset(t112, 0, 8);
    xsi_vlog_unsigned_add(t112, 32, t111, 32, t110, 32);
    t113 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t113, t112, 0, 0, 32, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB38;

LAB40:    *((unsigned int *)t4) = 1;
    goto LAB43;

LAB42:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;
    goto LAB43;

LAB44:    t12 = (t0 + 1704U);
    t13 = *((char **)t12);
    memset(t19, 0, 8);
    t12 = (t13 + 4);
    t18 = *((unsigned int *)t12);
    t22 = (~(t18));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t12) != 0)
        goto LAB49;

LAB50:    t26 = *((unsigned int *)t4);
    t30 = *((unsigned int *)t19);
    t31 = (t26 | t30);
    *((unsigned int *)t28) = t31;
    t21 = (t4 + 4);
    t27 = (t19 + 4);
    t29 = (t28 + 4);
    t32 = *((unsigned int *)t21);
    t33 = *((unsigned int *)t27);
    t34 = (t32 | t33);
    *((unsigned int *)t29) = t34;
    t37 = *((unsigned int *)t29);
    t38 = (t37 != 0);
    if (t38 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB46;

LAB47:    *((unsigned int *)t19) = 1;
    goto LAB50;

LAB49:    t20 = (t19 + 4);
    *((unsigned int *)t19) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB50;

LAB51:    t39 = *((unsigned int *)t28);
    t40 = *((unsigned int *)t29);
    *((unsigned int *)t28) = (t39 | t40);
    t35 = (t4 + 4);
    t36 = (t19 + 4);
    t46 = *((unsigned int *)t35);
    t47 = (~(t46));
    t48 = *((unsigned int *)t4);
    t95 = (t48 & t47);
    t49 = *((unsigned int *)t36);
    t50 = (~(t49));
    t51 = *((unsigned int *)t19);
    t99 = (t51 & t50);
    t55 = (~(t95));
    t56 = (~(t99));
    t57 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t57 & t55);
    t58 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t58 & t56);
    goto LAB53;

LAB54:    xsi_set_current_line(60, ng0);

LAB57:    xsi_set_current_line(61, ng0);
    t42 = (t0 + 1888U);
    t44 = *((char **)t42);
    t42 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t42, t44, 0, 0, 32, 0LL);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB56;

LAB61:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB62;

LAB63:    xsi_set_current_line(71, ng0);
    t20 = (t0 + 784U);
    t21 = *((char **)t20);
    t20 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t20, t21, 0, 0, 32, 0LL);
    goto LAB65;

}

static void Initial_75_6(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(75, ng0);

LAB2:    xsi_set_current_line(76, ng0);
    t1 = ((char*)((ng5)));
    t2 = (t0 + 2208);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);
    xsi_set_current_line(77, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2116);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(78, ng0);
    xsi_set_current_line(78, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 2300);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 2300);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng6)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(79, ng0);
    t12 = ((char*)((ng7)));
    t13 = (t0 + 2392);
    t16 = (t0 + 2392);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = (t0 + 2392);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 2300);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 2300);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 2300);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB7;

}


extern void work_m_00000000003048284417_0141045873_init()
{
	static char *pe[] = {(void *)NetDecl_38_0,(void *)NetDecl_39_1,(void *)NetDecl_40_2,(void *)NetDecl_41_3,(void *)Always_42_4,(void *)Always_50_5,(void *)Initial_75_6};
	xsi_register_didat("work_m_00000000003048284417_0141045873", "isim/CPUT_isim_beh.exe.sim/work/m_00000000003048284417_0141045873.didat");
	xsi_register_executes(pe);
}
