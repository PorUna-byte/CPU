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
static const char *ng0 = "D:/CPU_Pipeline_BranchHazard/lab3/Gshare.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {256, 0};
static int ng4[] = {1, 0};
static int ng5[] = {3, 0};
static unsigned int ng6[] = {1U, 0U};



static void Initial_32_0(char *t0)
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

LAB0:    xsi_set_current_line(32, ng0);

LAB2:    xsi_set_current_line(33, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1288);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 8, 0LL);
    xsi_set_current_line(34, ng0);
    xsi_set_current_line(34, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1472);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 1472);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng3)));
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
LAB4:    xsi_set_current_line(35, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 1380);
    t16 = (t0 + 1380);
    t17 = (t16 + 44U);
    t18 = *((char **)t17);
    t19 = (t0 + 1380);
    t20 = (t19 + 40U);
    t21 = *((char **)t20);
    t22 = (t0 + 1472);
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

LAB7:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 1472);
    t2 = (t1 + 36U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng4)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 1472);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB6:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB7;

}

static void Cont_37_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char t14[8];
    char t28[8];
    char t38[8];
    char t73[8];
    char t74[8];
    char t94[8];
    char t126[8];
    char t155[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    char *t71;
    char *t72;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    char *t108;
    char *t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    int t118;
    int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    char *t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t140;
    char *t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    char *t154;
    char *t156;
    char *t157;
    char *t158;
    char *t159;
    unsigned int t160;
    unsigned int t161;
    unsigned int t162;
    unsigned int t163;
    unsigned int t164;
    char *t165;
    char *t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    char *t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    char *t175;
    char *t176;
    char *t177;
    char *t178;
    char *t179;
    char *t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    unsigned int t184;
    unsigned int t185;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    char *t189;

LAB0:    t1 = (t0 + 2140U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1380);
    t5 = (t2 + 36U);
    t6 = *((char **)t5);
    t8 = (t0 + 1380);
    t9 = (t8 + 44U);
    t10 = *((char **)t9);
    t11 = (t0 + 1380);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    t15 = (t0 + 1288);
    t16 = (t15 + 36U);
    t17 = *((char **)t16);
    memset(t14, 0, 8);
    t18 = (t14 + 4);
    t19 = (t17 + 4);
    t20 = *((unsigned int *)t17);
    t21 = (~(t20));
    *((unsigned int *)t14) = t21;
    *((unsigned int *)t18) = 0;
    if (*((unsigned int *)t19) != 0)
        goto LAB5;

LAB4:    t26 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t26 & 255U);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t27 & 255U);
    t29 = (t0 + 600U);
    t30 = *((char **)t29);
    memset(t28, 0, 8);
    t29 = (t28 + 4);
    t31 = (t30 + 4);
    t32 = *((unsigned int *)t30);
    t33 = (t32 >> 2);
    *((unsigned int *)t28) = t33;
    t34 = *((unsigned int *)t31);
    t35 = (t34 >> 2);
    *((unsigned int *)t29) = t35;
    t36 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t36 & 255U);
    t37 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t37 & 255U);
    t39 = *((unsigned int *)t14);
    t40 = *((unsigned int *)t28);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t42 = (t14 + 4);
    t43 = (t28 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB6;

LAB7:
LAB8:    t70 = (t0 + 1288);
    t71 = (t70 + 36U);
    t72 = *((char **)t71);
    t75 = (t0 + 600U);
    t76 = *((char **)t75);
    memset(t74, 0, 8);
    t75 = (t74 + 4);
    t77 = (t76 + 4);
    t78 = *((unsigned int *)t76);
    t79 = (t78 >> 2);
    *((unsigned int *)t74) = t79;
    t80 = *((unsigned int *)t77);
    t81 = (t80 >> 2);
    *((unsigned int *)t75) = t81;
    t82 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t82 & 255U);
    t83 = *((unsigned int *)t75);
    *((unsigned int *)t75) = (t83 & 255U);
    memset(t73, 0, 8);
    t84 = (t73 + 4);
    t85 = (t74 + 4);
    t86 = *((unsigned int *)t74);
    t87 = (~(t86));
    *((unsigned int *)t73) = t87;
    *((unsigned int *)t84) = 0;
    if (*((unsigned int *)t85) != 0)
        goto LAB10;

LAB9:    t92 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t92 & 255U);
    t93 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t93 & 255U);
    t95 = *((unsigned int *)t72);
    t96 = *((unsigned int *)t73);
    t97 = (t95 & t96);
    *((unsigned int *)t94) = t97;
    t98 = (t72 + 4);
    t99 = (t73 + 4);
    t100 = (t94 + 4);
    t101 = *((unsigned int *)t98);
    t102 = *((unsigned int *)t99);
    t103 = (t101 | t102);
    *((unsigned int *)t100) = t103;
    t104 = *((unsigned int *)t100);
    t105 = (t104 != 0);
    if (t105 == 1)
        goto LAB11;

LAB12:
LAB13:    t127 = *((unsigned int *)t38);
    t128 = *((unsigned int *)t94);
    t129 = (t127 | t128);
    *((unsigned int *)t126) = t129;
    t130 = (t38 + 4);
    t131 = (t94 + 4);
    t132 = (t126 + 4);
    t133 = *((unsigned int *)t130);
    t134 = *((unsigned int *)t131);
    t135 = (t133 | t134);
    *((unsigned int *)t132) = t135;
    t136 = *((unsigned int *)t132);
    t137 = (t136 != 0);
    if (t137 == 1)
        goto LAB14;

LAB15:
LAB16:    xsi_vlog_generic_get_array_select_value(t7, 32, t6, t10, t13, 2, 1, t126, 8, 2);
    t154 = ((char*)((ng4)));
    memset(t155, 0, 8);
    t156 = (t7 + 4);
    if (*((unsigned int *)t156) != 0)
        goto LAB18;

LAB17:    t157 = (t154 + 4);
    if (*((unsigned int *)t157) != 0)
        goto LAB18;

LAB21:    if (*((unsigned int *)t7) > *((unsigned int *)t154))
        goto LAB19;

LAB20:    memset(t4, 0, 8);
    t159 = (t155 + 4);
    t160 = *((unsigned int *)t159);
    t161 = (~(t160));
    t162 = *((unsigned int *)t155);
    t163 = (t162 & t161);
    t164 = (t163 & 1U);
    if (t164 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t159) != 0)
        goto LAB24;

LAB25:    t166 = (t4 + 4);
    t167 = *((unsigned int *)t4);
    t168 = *((unsigned int *)t166);
    t169 = (t167 || t168);
    if (t169 > 0)
        goto LAB26;

LAB27:    t171 = *((unsigned int *)t4);
    t172 = (~(t171));
    t173 = *((unsigned int *)t166);
    t174 = (t172 || t173);
    if (t174 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t166) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t4) > 0)
        goto LAB32;

LAB33:    memcpy(t3, t175, 8);

LAB34:    t176 = (t0 + 2532);
    t177 = (t176 + 32U);
    t178 = *((char **)t177);
    t179 = (t178 + 40U);
    t180 = *((char **)t179);
    memset(t180, 0, 8);
    t181 = 1U;
    t182 = t181;
    t183 = (t3 + 4);
    t184 = *((unsigned int *)t3);
    t181 = (t181 & t184);
    t185 = *((unsigned int *)t183);
    t182 = (t182 & t185);
    t186 = (t180 + 4);
    t187 = *((unsigned int *)t180);
    *((unsigned int *)t180) = (t187 | t181);
    t188 = *((unsigned int *)t186);
    *((unsigned int *)t186) = (t188 | t182);
    xsi_driver_vfirst_trans(t176, 0, 0);
    t189 = (t0 + 2480);
    *((int *)t189) = 1;

LAB1:    return;
LAB5:    t22 = *((unsigned int *)t14);
    t23 = *((unsigned int *)t19);
    *((unsigned int *)t14) = (t22 | t23);
    t24 = *((unsigned int *)t18);
    t25 = *((unsigned int *)t19);
    *((unsigned int *)t18) = (t24 | t25);
    goto LAB4;

LAB6:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t14 + 4);
    t53 = (t28 + 4);
    t54 = *((unsigned int *)t14);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t28);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    t69 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t69 & t65);
    goto LAB8;

LAB10:    t88 = *((unsigned int *)t73);
    t89 = *((unsigned int *)t85);
    *((unsigned int *)t73) = (t88 | t89);
    t90 = *((unsigned int *)t84);
    t91 = *((unsigned int *)t85);
    *((unsigned int *)t84) = (t90 | t91);
    goto LAB9;

LAB11:    t106 = *((unsigned int *)t94);
    t107 = *((unsigned int *)t100);
    *((unsigned int *)t94) = (t106 | t107);
    t108 = (t72 + 4);
    t109 = (t73 + 4);
    t110 = *((unsigned int *)t72);
    t111 = (~(t110));
    t112 = *((unsigned int *)t108);
    t113 = (~(t112));
    t114 = *((unsigned int *)t73);
    t115 = (~(t114));
    t116 = *((unsigned int *)t109);
    t117 = (~(t116));
    t118 = (t111 & t113);
    t119 = (t115 & t117);
    t120 = (~(t118));
    t121 = (~(t119));
    t122 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t122 & t120);
    t123 = *((unsigned int *)t100);
    *((unsigned int *)t100) = (t123 & t121);
    t124 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t124 & t120);
    t125 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t125 & t121);
    goto LAB13;

LAB14:    t138 = *((unsigned int *)t126);
    t139 = *((unsigned int *)t132);
    *((unsigned int *)t126) = (t138 | t139);
    t140 = (t38 + 4);
    t141 = (t94 + 4);
    t142 = *((unsigned int *)t140);
    t143 = (~(t142));
    t144 = *((unsigned int *)t38);
    t145 = (t144 & t143);
    t146 = *((unsigned int *)t141);
    t147 = (~(t146));
    t148 = *((unsigned int *)t94);
    t149 = (t148 & t147);
    t150 = (~(t145));
    t151 = (~(t149));
    t152 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t152 & t150);
    t153 = *((unsigned int *)t132);
    *((unsigned int *)t132) = (t153 & t151);
    goto LAB16;

LAB18:    t158 = (t155 + 4);
    *((unsigned int *)t155) = 1;
    *((unsigned int *)t158) = 1;
    goto LAB20;

LAB19:    *((unsigned int *)t155) = 1;
    goto LAB20;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB24:    t165 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t165) = 1;
    goto LAB25;

LAB26:    t170 = ((char*)((ng4)));
    goto LAB27;

LAB28:    t175 = ((char*)((ng2)));
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t3, 32, t170, 32, t175, 32);
    goto LAB34;

LAB32:    memcpy(t3, t170, 8);
    goto LAB34;

}

static void Always_38_2(char *t0)
{
    char t25[8];
    char t26[8];
    char t30[8];
    char t41[8];
    char t76[8];
    char t87[8];
    char t89[8];
    char t90[8];
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
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t42;
    char *t43;
    unsigned int t44;
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
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t73;
    char *t74;
    char *t75;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t88;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned int t101;
    int t102;
    char *t103;
    unsigned int t104;
    int t105;
    int t106;
    unsigned int t107;
    unsigned int t108;
    int t109;
    int t110;

LAB0:    t1 = (t0 + 2284U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2488);
    *((int *)t2) = 1;
    t3 = (t0 + 2312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 784U);
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

LAB6:    xsi_set_current_line(41, ng0);

LAB9:    xsi_set_current_line(42, ng0);
    t11 = (t0 + 876U);
    t12 = *((char **)t11);
    t11 = (t12 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (~(t13));
    t15 = *((unsigned int *)t12);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB8;

LAB10:    xsi_set_current_line(43, ng0);

LAB13:    xsi_set_current_line(44, ng0);
    t18 = (t0 + 692U);
    t19 = *((char **)t18);
    t18 = (t19 + 4);
    t20 = *((unsigned int *)t18);
    t21 = (~(t20));
    t22 = *((unsigned int *)t19);
    t23 = (t22 & t21);
    t24 = (t23 != 0);
    if (t24 > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(50, ng0);

LAB37:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1380);
    t11 = (t5 + 44U);
    t12 = *((char **)t11);
    t18 = (t0 + 1380);
    t19 = (t18 + 40U);
    t27 = *((char **)t19);
    t28 = (t0 + 1288);
    t29 = (t28 + 36U);
    t31 = *((char **)t29);
    xsi_vlog_generic_get_array_select_value(t30, 32, t4, t12, t27, 2, 1, t31, 8, 2);
    t32 = ((char*)((ng2)));
    memset(t41, 0, 8);
    t33 = (t30 + 4);
    t34 = (t32 + 4);
    t6 = *((unsigned int *)t30);
    t7 = *((unsigned int *)t32);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t33);
    t10 = *((unsigned int *)t34);
    t13 = (t9 ^ t10);
    t14 = (t8 | t13);
    t15 = *((unsigned int *)t33);
    t16 = *((unsigned int *)t34);
    t17 = (t15 | t16);
    t20 = (~(t17));
    t21 = (t14 & t20);
    if (t21 != 0)
        goto LAB41;

LAB38:    if (t17 != 0)
        goto LAB40;

LAB39:    *((unsigned int *)t41) = 1;

LAB41:    memset(t26, 0, 8);
    t36 = (t41 + 4);
    t22 = *((unsigned int *)t36);
    t23 = (~(t22));
    t24 = *((unsigned int *)t41);
    t44 = (t24 & t23);
    t45 = (t44 & 1U);
    if (t45 != 0)
        goto LAB42;

LAB43:    if (*((unsigned int *)t36) != 0)
        goto LAB44;

LAB45:    t38 = (t26 + 4);
    t46 = *((unsigned int *)t26);
    t47 = *((unsigned int *)t38);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB46;

LAB47:    t49 = *((unsigned int *)t26);
    t50 = (~(t49));
    t51 = *((unsigned int *)t38);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t38) > 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t26) > 0)
        goto LAB52;

LAB53:    memcpy(t25, t87, 8);

LAB54:    t79 = (t0 + 1380);
    t80 = (t0 + 1380);
    t81 = (t80 + 44U);
    t82 = *((char **)t81);
    t83 = (t0 + 1380);
    t84 = (t83 + 40U);
    t85 = *((char **)t84);
    t86 = (t0 + 1288);
    t88 = (t86 + 36U);
    t91 = *((char **)t88);
    xsi_vlog_generic_convert_array_indices(t89, t90, t82, t85, 2, 1, t91, 8, 2);
    t92 = (t89 + 4);
    t53 = *((unsigned int *)t92);
    t102 = (!(t53));
    t93 = (t90 + 4);
    t54 = *((unsigned int *)t93);
    t105 = (!(t54));
    t106 = (t102 && t105);
    if (t106 == 1)
        goto LAB55;

LAB56:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    memset(t26, 0, 8);
    t11 = (t26 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t26) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t10 & 127U);
    t13 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t13 & 127U);
    xsi_vlogtype_concat(t25, 8, 8, 2U, t26, 7, t2, 1);
    t18 = (t0 + 1288);
    xsi_vlogvar_assign_value(t18, t25, 0, 0, 8);

LAB16:    goto LAB12;

LAB14:    xsi_set_current_line(45, ng0);

LAB17:    xsi_set_current_line(46, ng0);
    t27 = (t0 + 1380);
    t28 = (t27 + 36U);
    t29 = *((char **)t28);
    t31 = (t0 + 1380);
    t32 = (t31 + 44U);
    t33 = *((char **)t32);
    t34 = (t0 + 1380);
    t35 = (t34 + 40U);
    t36 = *((char **)t35);
    t37 = (t0 + 1288);
    t38 = (t37 + 36U);
    t39 = *((char **)t38);
    xsi_vlog_generic_get_array_select_value(t30, 32, t29, t33, t36, 2, 1, t39, 8, 2);
    t40 = ((char*)((ng5)));
    memset(t41, 0, 8);
    t42 = (t30 + 4);
    t43 = (t40 + 4);
    t44 = *((unsigned int *)t30);
    t45 = *((unsigned int *)t40);
    t46 = (t44 ^ t45);
    t47 = *((unsigned int *)t42);
    t48 = *((unsigned int *)t43);
    t49 = (t47 ^ t48);
    t50 = (t46 | t49);
    t51 = *((unsigned int *)t42);
    t52 = *((unsigned int *)t43);
    t53 = (t51 | t52);
    t54 = (~(t53));
    t55 = (t50 & t54);
    if (t55 != 0)
        goto LAB21;

LAB18:    if (t53 != 0)
        goto LAB20;

LAB19:    *((unsigned int *)t41) = 1;

LAB21:    memset(t26, 0, 8);
    t57 = (t41 + 4);
    t58 = *((unsigned int *)t57);
    t59 = (~(t58));
    t60 = *((unsigned int *)t41);
    t61 = (t60 & t59);
    t62 = (t61 & 1U);
    if (t62 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t57) != 0)
        goto LAB24;

LAB25:    t64 = (t26 + 4);
    t65 = *((unsigned int *)t26);
    t66 = *((unsigned int *)t64);
    t67 = (t65 || t66);
    if (t67 > 0)
        goto LAB26;

LAB27:    t69 = *((unsigned int *)t26);
    t70 = (~(t69));
    t71 = *((unsigned int *)t64);
    t72 = (t70 || t71);
    if (t72 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t64) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t26) > 0)
        goto LAB32;

LAB33:    memcpy(t25, t87, 8);

LAB34:    t88 = (t0 + 1380);
    t91 = (t0 + 1380);
    t92 = (t91 + 44U);
    t93 = *((char **)t92);
    t94 = (t0 + 1380);
    t95 = (t94 + 40U);
    t96 = *((char **)t95);
    t97 = (t0 + 1288);
    t98 = (t97 + 36U);
    t99 = *((char **)t98);
    xsi_vlog_generic_convert_array_indices(t89, t90, t93, t96, 2, 1, t99, 8, 2);
    t100 = (t89 + 4);
    t101 = *((unsigned int *)t100);
    t102 = (!(t101));
    t103 = (t90 + 4);
    t104 = *((unsigned int *)t103);
    t105 = (!(t104));
    t106 = (t102 && t105);
    if (t106 == 1)
        goto LAB35;

LAB36:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1288);
    t4 = (t3 + 36U);
    t5 = *((char **)t4);
    memset(t26, 0, 8);
    t11 = (t26 + 4);
    t12 = (t5 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (t6 >> 0);
    *((unsigned int *)t26) = t7;
    t8 = *((unsigned int *)t12);
    t9 = (t8 >> 0);
    *((unsigned int *)t11) = t9;
    t10 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t10 & 127U);
    t13 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t13 & 127U);
    xsi_vlogtype_concat(t25, 8, 8, 2U, t26, 7, t2, 1);
    t18 = (t0 + 1288);
    xsi_vlogvar_assign_value(t18, t25, 0, 0, 8);
    goto LAB16;

LAB20:    t56 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t56) = 1;
    goto LAB21;

LAB22:    *((unsigned int *)t26) = 1;
    goto LAB25;

LAB24:    t63 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t63) = 1;
    goto LAB25;

LAB26:    t68 = ((char*)((ng5)));
    goto LAB27;

LAB28:    t73 = (t0 + 1380);
    t74 = (t73 + 36U);
    t75 = *((char **)t74);
    t77 = (t0 + 1380);
    t78 = (t77 + 44U);
    t79 = *((char **)t78);
    t80 = (t0 + 1380);
    t81 = (t80 + 40U);
    t82 = *((char **)t81);
    t83 = (t0 + 1288);
    t84 = (t83 + 36U);
    t85 = *((char **)t84);
    xsi_vlog_generic_get_array_select_value(t76, 32, t75, t79, t82, 2, 1, t85, 8, 2);
    t86 = ((char*)((ng4)));
    memset(t87, 0, 8);
    xsi_vlog_unsigned_add(t87, 32, t76, 32, t86, 32);
    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t25, 32, t68, 32, t87, 32);
    goto LAB34;

LAB32:    memcpy(t25, t68, 8);
    goto LAB34;

LAB35:    t107 = *((unsigned int *)t89);
    t108 = *((unsigned int *)t90);
    t109 = (t107 - t108);
    t110 = (t109 + 1);
    xsi_vlogvar_assign_value(t88, t25, 0, *((unsigned int *)t90), t110);
    goto LAB36;

LAB40:    t35 = (t41 + 4);
    *((unsigned int *)t41) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB41;

LAB42:    *((unsigned int *)t26) = 1;
    goto LAB45;

LAB44:    t37 = (t26 + 4);
    *((unsigned int *)t26) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB45;

LAB46:    t39 = ((char*)((ng2)));
    goto LAB47;

LAB48:    t40 = (t0 + 1380);
    t42 = (t40 + 36U);
    t43 = *((char **)t42);
    t56 = (t0 + 1380);
    t57 = (t56 + 44U);
    t63 = *((char **)t57);
    t64 = (t0 + 1380);
    t68 = (t64 + 40U);
    t73 = *((char **)t68);
    t74 = (t0 + 1288);
    t75 = (t74 + 36U);
    t77 = *((char **)t75);
    xsi_vlog_generic_get_array_select_value(t76, 32, t43, t63, t73, 2, 1, t77, 8, 2);
    t78 = ((char*)((ng4)));
    memset(t87, 0, 8);
    xsi_vlog_unsigned_minus(t87, 32, t76, 32, t78, 32);
    goto LAB49;

LAB50:    xsi_vlog_unsigned_bit_combine(t25, 32, t39, 32, t87, 32);
    goto LAB54;

LAB52:    memcpy(t25, t39, 8);
    goto LAB54;

LAB55:    t55 = *((unsigned int *)t89);
    t58 = *((unsigned int *)t90);
    t109 = (t55 - t58);
    t110 = (t109 + 1);
    xsi_vlogvar_assign_value(t79, t25, 0, *((unsigned int *)t90), t110);
    goto LAB56;

}


extern void work_m_00000000003198082681_3978343310_init()
{
	static char *pe[] = {(void *)Initial_32_0,(void *)Cont_37_1,(void *)Always_38_2};
	xsi_register_didat("work_m_00000000003198082681_3978343310", "isim/cpu_top_tb_isim_beh.exe.sim/work/m_00000000003198082681_3978343310.didat");
	xsi_register_executes(pe);
}
