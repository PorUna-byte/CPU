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
static const char *ng0 = "D:/CPU_Pipeline_BranchHazard/lab3/Updater.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {4294967295U, 0U};



static void Cont_35_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 2272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1060U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t4 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t4);
    t8 = (t7 & t6);
    t9 = (t8 & 1U);
    if (t9 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t2) == 0)
        goto LAB4;

LAB6:    t10 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t10) = 1;

LAB7:    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (~(t13));
    *((unsigned int *)t3) = t14;
    *((unsigned int *)t11) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB9;

LAB8:    t19 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t19 & 1U);
    t20 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t20 & 1U);
    t21 = (t0 + 2808);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    memset(t25, 0, 8);
    t26 = 1U;
    t27 = t26;
    t28 = (t3 + 4);
    t29 = *((unsigned int *)t3);
    t26 = (t26 & t29);
    t30 = *((unsigned int *)t28);
    t27 = (t27 & t30);
    t31 = (t25 + 4);
    t32 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t32 | t26);
    t33 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t33 | t27);
    xsi_driver_vfirst_trans(t21, 0, 0);
    t34 = (t0 + 2756);
    *((int *)t34) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t12);
    *((unsigned int *)t3) = (t15 | t16);
    t17 = *((unsigned int *)t11);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t11) = (t17 | t18);
    goto LAB8;

}

static void Always_36_1(char *t0)
{
    char t13[8];
    char t35[8];
    char t36[8];
    char t37[8];
    char t64[8];
    char t79[8];
    char t94[8];
    char t102[8];
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;
    char *t78;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    char *t106;
    char *t107;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    char *t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    int t126;
    int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    char *t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;

LAB0:    t1 = (t0 + 2416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 2764);
    *((int *)t2) = 1;
    t3 = (t0 + 2444);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t4 = (t0 + 1060U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(41, ng0);

LAB9:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 876U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB68:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(39, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(43, ng0);

LAB13:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1244U);
    t5 = *((char **)t4);
    t4 = (t0 + 692U);
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
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t12);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB17;

LAB14:    if (t23 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t13) = 1;

LAB17:    t27 = (t13 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t13);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t2) != 0)
        goto LAB23;

LAB24:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB25;

LAB26:    memcpy(t37, t13, 8);

LAB27:    memset(t64, 0, 8);
    t65 = (t37 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t37);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t65) != 0)
        goto LAB41;

LAB42:    t72 = (t64 + 4);
    t73 = *((unsigned int *)t64);
    t74 = *((unsigned int *)t72);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB43;

LAB44:    memcpy(t102, t64, 8);

LAB45:    t134 = (t102 + 4);
    t135 = *((unsigned int *)t134);
    t136 = (~(t135));
    t137 = *((unsigned int *)t102);
    t138 = (t137 & t136);
    t139 = (t138 != 0);
    if (t139 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB59:
LAB20:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB63;

LAB61:    if (*((unsigned int *)t2) == 0)
        goto LAB60;

LAB62:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;

LAB63:    t5 = (t13 + 4);
    t11 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (~(t14));
    *((unsigned int *)t13) = t15;
    *((unsigned int *)t5) = 0;
    if (*((unsigned int *)t11) != 0)
        goto LAB65;

LAB64:    t20 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t20 & 1U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 1U);
    t12 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t12, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB12;

LAB16:    t26 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(45, ng0);
    t33 = ((char*)((ng2)));
    t34 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t34, t33, 0, 0, 1, 0LL);
    goto LAB20;

LAB21:    *((unsigned int *)t13) = 1;
    goto LAB24;

LAB23:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB24;

LAB25:    t11 = (t0 + 692U);
    t12 = *((char **)t11);
    memset(t35, 0, 8);
    t11 = (t12 + 4);
    t17 = *((unsigned int *)t11);
    t18 = (~(t17));
    t19 = *((unsigned int *)t12);
    t20 = (t19 & t18);
    t21 = (t20 & 1U);
    if (t21 != 0)
        goto LAB31;

LAB29:    if (*((unsigned int *)t11) == 0)
        goto LAB28;

LAB30:    t26 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t26) = 1;

LAB31:    memset(t36, 0, 8);
    t27 = (t35 + 4);
    t22 = *((unsigned int *)t27);
    t23 = (~(t22));
    t24 = *((unsigned int *)t35);
    t25 = (t24 & t23);
    t28 = (t25 & 1U);
    if (t28 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t27) != 0)
        goto LAB34;

LAB35:    t29 = *((unsigned int *)t13);
    t30 = *((unsigned int *)t36);
    t31 = (t29 & t30);
    *((unsigned int *)t37) = t31;
    t34 = (t13 + 4);
    t38 = (t36 + 4);
    t39 = (t37 + 4);
    t32 = *((unsigned int *)t34);
    t40 = *((unsigned int *)t38);
    t41 = (t32 | t40);
    *((unsigned int *)t39) = t41;
    t42 = *((unsigned int *)t39);
    t43 = (t42 != 0);
    if (t43 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB27;

LAB28:    *((unsigned int *)t35) = 1;
    goto LAB31;

LAB32:    *((unsigned int *)t36) = 1;
    goto LAB35;

LAB34:    t33 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB35;

LAB36:    t44 = *((unsigned int *)t37);
    t45 = *((unsigned int *)t39);
    *((unsigned int *)t37) = (t44 | t45);
    t46 = (t13 + 4);
    t47 = (t36 + 4);
    t48 = *((unsigned int *)t13);
    t49 = (~(t48));
    t50 = *((unsigned int *)t46);
    t51 = (~(t50));
    t52 = *((unsigned int *)t36);
    t53 = (~(t52));
    t54 = *((unsigned int *)t47);
    t55 = (~(t54));
    t56 = (t49 & t51);
    t57 = (t53 & t55);
    t58 = (~(t56));
    t59 = (~(t57));
    t60 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t60 & t58);
    t61 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t61 & t59);
    t62 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t62 & t58);
    t63 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t63 & t59);
    goto LAB38;

LAB39:    *((unsigned int *)t64) = 1;
    goto LAB42;

LAB41:    t71 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB42;

LAB43:    t76 = (t0 + 1152U);
    t77 = *((char **)t76);
    t76 = (t0 + 784U);
    t78 = *((char **)t76);
    memset(t79, 0, 8);
    t76 = (t77 + 4);
    t80 = (t78 + 4);
    t81 = *((unsigned int *)t77);
    t82 = *((unsigned int *)t78);
    t83 = (t81 ^ t82);
    t84 = *((unsigned int *)t76);
    t85 = *((unsigned int *)t80);
    t86 = (t84 ^ t85);
    t87 = (t83 | t86);
    t88 = *((unsigned int *)t76);
    t89 = *((unsigned int *)t80);
    t90 = (t88 | t89);
    t91 = (~(t90));
    t92 = (t87 & t91);
    if (t92 != 0)
        goto LAB47;

LAB46:    if (t90 != 0)
        goto LAB48;

LAB49:    memset(t94, 0, 8);
    t95 = (t79 + 4);
    t96 = *((unsigned int *)t95);
    t97 = (~(t96));
    t98 = *((unsigned int *)t79);
    t99 = (t98 & t97);
    t100 = (t99 & 1U);
    if (t100 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t95) != 0)
        goto LAB52;

LAB53:    t103 = *((unsigned int *)t64);
    t104 = *((unsigned int *)t94);
    t105 = (t103 & t104);
    *((unsigned int *)t102) = t105;
    t106 = (t64 + 4);
    t107 = (t94 + 4);
    t108 = (t102 + 4);
    t109 = *((unsigned int *)t106);
    t110 = *((unsigned int *)t107);
    t111 = (t109 | t110);
    *((unsigned int *)t108) = t111;
    t112 = *((unsigned int *)t108);
    t113 = (t112 != 0);
    if (t113 == 1)
        goto LAB54;

LAB55:
LAB56:    goto LAB45;

LAB47:    *((unsigned int *)t79) = 1;
    goto LAB49;

LAB48:    t93 = (t79 + 4);
    *((unsigned int *)t79) = 1;
    *((unsigned int *)t93) = 1;
    goto LAB49;

LAB50:    *((unsigned int *)t94) = 1;
    goto LAB53;

LAB52:    t101 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t101) = 1;
    goto LAB53;

LAB54:    t114 = *((unsigned int *)t102);
    t115 = *((unsigned int *)t108);
    *((unsigned int *)t102) = (t114 | t115);
    t116 = (t64 + 4);
    t117 = (t94 + 4);
    t118 = *((unsigned int *)t64);
    t119 = (~(t118));
    t120 = *((unsigned int *)t116);
    t121 = (~(t120));
    t122 = *((unsigned int *)t94);
    t123 = (~(t122));
    t124 = *((unsigned int *)t117);
    t125 = (~(t124));
    t126 = (t119 & t121);
    t127 = (t123 & t125);
    t128 = (~(t126));
    t129 = (~(t127));
    t130 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t130 & t128);
    t131 = *((unsigned int *)t108);
    *((unsigned int *)t108) = (t131 & t129);
    t132 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t132 & t128);
    t133 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t133 & t129);
    goto LAB56;

LAB57:    xsi_set_current_line(47, ng0);
    t140 = ((char*)((ng2)));
    t141 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t141, t140, 0, 0, 1, 0LL);
    goto LAB59;

LAB60:    *((unsigned int *)t13) = 1;
    goto LAB63;

LAB65:    t16 = *((unsigned int *)t13);
    t17 = *((unsigned int *)t11);
    *((unsigned int *)t13) = (t16 | t17);
    t18 = *((unsigned int *)t5);
    t19 = *((unsigned int *)t11);
    *((unsigned int *)t5) = (t18 | t19);
    goto LAB64;

LAB66:    xsi_set_current_line(55, ng0);

LAB69:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 1244U);
    t5 = *((char **)t4);
    memset(t35, 0, 8);
    t4 = (t5 + 4);
    t14 = *((unsigned int *)t4);
    t15 = (~(t14));
    t16 = *((unsigned int *)t5);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB70;

LAB71:    if (*((unsigned int *)t4) != 0)
        goto LAB72;

LAB73:    t12 = (t35 + 4);
    t19 = *((unsigned int *)t35);
    t20 = *((unsigned int *)t12);
    t21 = (t19 || t20);
    if (t21 > 0)
        goto LAB74;

LAB75:    t59 = *((unsigned int *)t35);
    t60 = (~(t59));
    t61 = *((unsigned int *)t12);
    t62 = (t60 || t61);
    if (t62 > 0)
        goto LAB76;

LAB77:    if (*((unsigned int *)t12) > 0)
        goto LAB78;

LAB79:    if (*((unsigned int *)t35) > 0)
        goto LAB80;

LAB81:    memcpy(t13, t72, 8);

LAB82:    t76 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t76, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB68;

LAB70:    *((unsigned int *)t35) = 1;
    goto LAB73;

LAB72:    t11 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB73;

LAB74:    t26 = (t0 + 1152U);
    t27 = *((char **)t26);
    t26 = (t0 + 968U);
    t33 = *((char **)t26);
    memset(t64, 0, 8);
    t26 = (t27 + 4);
    t34 = (t33 + 4);
    t22 = *((unsigned int *)t27);
    t23 = *((unsigned int *)t33);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t26);
    t28 = *((unsigned int *)t34);
    t29 = (t25 ^ t28);
    t30 = (t24 | t29);
    t31 = *((unsigned int *)t26);
    t32 = *((unsigned int *)t34);
    t40 = (t31 | t32);
    t41 = (~(t40));
    t42 = (t30 & t41);
    if (t42 != 0)
        goto LAB86;

LAB83:    if (t40 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t64) = 1;

LAB86:    memset(t37, 0, 8);
    t39 = (t64 + 4);
    t43 = *((unsigned int *)t39);
    t44 = (~(t43));
    t45 = *((unsigned int *)t64);
    t48 = (t45 & t44);
    t49 = (t48 & 1U);
    if (t49 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t39) != 0)
        goto LAB89;

LAB90:    t47 = (t37 + 4);
    t50 = *((unsigned int *)t37);
    t51 = *((unsigned int *)t47);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB91;

LAB92:    t53 = *((unsigned int *)t37);
    t54 = (~(t53));
    t55 = *((unsigned int *)t47);
    t58 = (t54 || t55);
    if (t58 > 0)
        goto LAB93;

LAB94:    if (*((unsigned int *)t47) > 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t37) > 0)
        goto LAB97;

LAB98:    memcpy(t36, t71, 8);

LAB99:    goto LAB75;

LAB76:    t72 = ((char*)((ng2)));
    goto LAB77;

LAB78:    xsi_vlog_unsigned_bit_combine(t13, 32, t36, 32, t72, 32);
    goto LAB82;

LAB80:    memcpy(t13, t36, 8);
    goto LAB82;

LAB85:    t38 = (t64 + 4);
    *((unsigned int *)t64) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB86;

LAB87:    *((unsigned int *)t37) = 1;
    goto LAB90;

LAB89:    t46 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t46) = 1;
    goto LAB90;

LAB91:    t65 = ((char*)((ng1)));
    goto LAB92;

LAB93:    t71 = ((char*)((ng2)));
    goto LAB94;

LAB95:    xsi_vlog_unsigned_bit_combine(t36, 32, t65, 32, t71, 32);
    goto LAB99;

LAB97:    memcpy(t36, t65, 8);
    goto LAB99;

}

static void Initial_64_2(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(64, ng0);

LAB2:    xsi_set_current_line(65, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t1 = ((char*)((ng3)));
    t2 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 32, 0LL);

LAB1:    return;
}


extern void work_m_00000000004137584699_2772040650_init()
{
	static char *pe[] = {(void *)Cont_35_0,(void *)Always_36_1,(void *)Initial_64_2};
	xsi_register_didat("work_m_00000000004137584699_2772040650", "isim/cpu_top_tb_isim_beh.exe.sim/work/m_00000000004137584699_2772040650.didat");
	xsi_register_executes(pe);
}
