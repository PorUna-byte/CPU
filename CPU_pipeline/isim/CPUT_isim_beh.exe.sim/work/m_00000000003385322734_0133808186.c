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
static const char *ng0 = "D:/CPU_Pipeline_BranchHazard/lab3/Hazard_detection_unit.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};



static void Initial_34_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(35, ng0);

LAB2:    xsi_set_current_line(36, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 1, 0LL);

LAB1:    return;
}

static void Always_40_1(char *t0)
{
    char t13[8];
    char t27[8];
    char t42[8];
    char t58[8];
    char t73[8];
    char t81[8];
    char t109[8];
    char t117[8];
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
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t80;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    char *t121;
    char *t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    char *t131;
    char *t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    int t141;
    int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    char *t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    char *t155;
    char *t156;

LAB0:    t1 = (t0 + 2324U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2520);
    *((int *)t2) = 1;
    t3 = (t0 + 2352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 968U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(63, ng0);
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
        goto LAB91;

LAB92:    if (*((unsigned int *)t2) != 0)
        goto LAB93;

LAB94:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB95;

LAB96:    memcpy(t117, t13, 8);

LAB97:    t122 = (t117 + 4);
    t144 = *((unsigned int *)t122);
    t145 = (~(t144));
    t146 = *((unsigned int *)t117);
    t147 = (t146 & t145);
    t148 = (t147 != 0);
    if (t148 > 0)
        goto LAB127;

LAB128:    xsi_set_current_line(70, ng0);

LAB131:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB129:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(43, ng0);

LAB9:    xsi_set_current_line(44, ng0);
    t11 = (t0 + 1060U);
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
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB14;

LAB15:    memcpy(t117, t13, 8);

LAB16:    t149 = (t117 + 4);
    t150 = *((unsigned int *)t149);
    t151 = (~(t150));
    t152 = *((unsigned int *)t117);
    t153 = (t152 & t151);
    t154 = (t153 != 0);
    if (t154 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    memset(t13, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB50;

LAB51:    if (*((unsigned int *)t2) != 0)
        goto LAB52;

LAB53:    t5 = (t13 + 4);
    t14 = *((unsigned int *)t13);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB54;

LAB55:    memcpy(t117, t13, 8);

LAB56:    t122 = (t117 + 4);
    t144 = *((unsigned int *)t122);
    t145 = (~(t144));
    t146 = *((unsigned int *)t117);
    t147 = (t146 & t145);
    t148 = (t147 != 0);
    if (t148 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(57, ng0);

LAB90:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB88:
LAB48:    goto LAB8;

LAB10:    *((unsigned int *)t13) = 1;
    goto LAB13;

LAB12:    t19 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB13;

LAB14:    t24 = (t0 + 784U);
    t25 = *((char **)t24);
    t24 = (t0 + 600U);
    t26 = *((char **)t24);
    memset(t27, 0, 8);
    t24 = (t25 + 4);
    t28 = (t26 + 4);
    t29 = *((unsigned int *)t25);
    t30 = *((unsigned int *)t26);
    t31 = (t29 ^ t30);
    t32 = *((unsigned int *)t24);
    t33 = *((unsigned int *)t28);
    t34 = (t32 ^ t33);
    t35 = (t31 | t34);
    t36 = *((unsigned int *)t24);
    t37 = *((unsigned int *)t28);
    t38 = (t36 | t37);
    t39 = (~(t38));
    t40 = (t35 & t39);
    if (t40 != 0)
        goto LAB20;

LAB17:    if (t38 != 0)
        goto LAB19;

LAB18:    *((unsigned int *)t27) = 1;

LAB20:    memset(t42, 0, 8);
    t43 = (t27 + 4);
    t44 = *((unsigned int *)t43);
    t45 = (~(t44));
    t46 = *((unsigned int *)t27);
    t47 = (t46 & t45);
    t48 = (t47 & 1U);
    if (t48 != 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t43) != 0)
        goto LAB23;

LAB24:    t50 = (t42 + 4);
    t51 = *((unsigned int *)t42);
    t52 = (!(t51));
    t53 = *((unsigned int *)t50);
    t54 = (t52 || t53);
    if (t54 > 0)
        goto LAB25;

LAB26:    memcpy(t81, t42, 8);

LAB27:    memset(t109, 0, 8);
    t110 = (t81 + 4);
    t111 = *((unsigned int *)t110);
    t112 = (~(t111));
    t113 = *((unsigned int *)t81);
    t114 = (t113 & t112);
    t115 = (t114 & 1U);
    if (t115 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t110) != 0)
        goto LAB41;

LAB42:    t118 = *((unsigned int *)t13);
    t119 = *((unsigned int *)t109);
    t120 = (t118 & t119);
    *((unsigned int *)t117) = t120;
    t121 = (t13 + 4);
    t122 = (t109 + 4);
    t123 = (t117 + 4);
    t124 = *((unsigned int *)t121);
    t125 = *((unsigned int *)t122);
    t126 = (t124 | t125);
    *((unsigned int *)t123) = t126;
    t127 = *((unsigned int *)t123);
    t128 = (t127 != 0);
    if (t128 == 1)
        goto LAB43;

LAB44:
LAB45:    goto LAB16;

LAB19:    t41 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB20;

LAB21:    *((unsigned int *)t42) = 1;
    goto LAB24;

LAB23:    t49 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t49) = 1;
    goto LAB24;

LAB25:    t55 = (t0 + 784U);
    t56 = *((char **)t55);
    t55 = (t0 + 692U);
    t57 = *((char **)t55);
    memset(t58, 0, 8);
    t55 = (t56 + 4);
    t59 = (t57 + 4);
    t60 = *((unsigned int *)t56);
    t61 = *((unsigned int *)t57);
    t62 = (t60 ^ t61);
    t63 = *((unsigned int *)t55);
    t64 = *((unsigned int *)t59);
    t65 = (t63 ^ t64);
    t66 = (t62 | t65);
    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t59);
    t69 = (t67 | t68);
    t70 = (~(t69));
    t71 = (t66 & t70);
    if (t71 != 0)
        goto LAB31;

LAB28:    if (t69 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t58) = 1;

LAB31:    memset(t73, 0, 8);
    t74 = (t58 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t58);
    t78 = (t77 & t76);
    t79 = (t78 & 1U);
    if (t79 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t74) != 0)
        goto LAB34;

LAB35:    t82 = *((unsigned int *)t42);
    t83 = *((unsigned int *)t73);
    t84 = (t82 | t83);
    *((unsigned int *)t81) = t84;
    t85 = (t42 + 4);
    t86 = (t73 + 4);
    t87 = (t81 + 4);
    t88 = *((unsigned int *)t85);
    t89 = *((unsigned int *)t86);
    t90 = (t88 | t89);
    *((unsigned int *)t87) = t90;
    t91 = *((unsigned int *)t87);
    t92 = (t91 != 0);
    if (t92 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB27;

LAB30:    t72 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t72) = 1;
    goto LAB31;

LAB32:    *((unsigned int *)t73) = 1;
    goto LAB35;

LAB34:    t80 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t80) = 1;
    goto LAB35;

LAB36:    t93 = *((unsigned int *)t81);
    t94 = *((unsigned int *)t87);
    *((unsigned int *)t81) = (t93 | t94);
    t95 = (t42 + 4);
    t96 = (t73 + 4);
    t97 = *((unsigned int *)t95);
    t98 = (~(t97));
    t99 = *((unsigned int *)t42);
    t100 = (t99 & t98);
    t101 = *((unsigned int *)t96);
    t102 = (~(t101));
    t103 = *((unsigned int *)t73);
    t104 = (t103 & t102);
    t105 = (~(t100));
    t106 = (~(t104));
    t107 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t107 & t105);
    t108 = *((unsigned int *)t87);
    *((unsigned int *)t87) = (t108 & t106);
    goto LAB38;

LAB39:    *((unsigned int *)t109) = 1;
    goto LAB42;

LAB41:    t116 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t116) = 1;
    goto LAB42;

LAB43:    t129 = *((unsigned int *)t117);
    t130 = *((unsigned int *)t123);
    *((unsigned int *)t117) = (t129 | t130);
    t131 = (t13 + 4);
    t132 = (t109 + 4);
    t133 = *((unsigned int *)t13);
    t134 = (~(t133));
    t135 = *((unsigned int *)t131);
    t136 = (~(t135));
    t137 = *((unsigned int *)t109);
    t138 = (~(t137));
    t139 = *((unsigned int *)t132);
    t140 = (~(t139));
    t141 = (t134 & t136);
    t142 = (t138 & t140);
    t143 = (~(t141));
    t144 = (~(t142));
    t145 = *((unsigned int *)t123);
    *((unsigned int *)t123) = (t145 & t143);
    t146 = *((unsigned int *)t123);
    *((unsigned int *)t123) = (t146 & t144);
    t147 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t147 & t143);
    t148 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t148 & t144);
    goto LAB45;

LAB46:    xsi_set_current_line(45, ng0);

LAB49:    xsi_set_current_line(46, ng0);
    t155 = ((char*)((ng2)));
    t156 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t156, t155, 0, 0, 1, 0LL);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB48;

LAB50:    *((unsigned int *)t13) = 1;
    goto LAB53;

LAB52:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB53;

LAB54:    t11 = (t0 + 876U);
    t12 = *((char **)t11);
    t11 = (t0 + 600U);
    t19 = *((char **)t11);
    memset(t27, 0, 8);
    t11 = (t12 + 4);
    t20 = (t19 + 4);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t19);
    t21 = (t17 ^ t18);
    t22 = *((unsigned int *)t11);
    t23 = *((unsigned int *)t20);
    t29 = (t22 ^ t23);
    t30 = (t21 | t29);
    t31 = *((unsigned int *)t11);
    t32 = *((unsigned int *)t20);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t30 & t34);
    if (t35 != 0)
        goto LAB60;

LAB57:    if (t33 != 0)
        goto LAB59;

LAB58:    *((unsigned int *)t27) = 1;

LAB60:    memset(t42, 0, 8);
    t25 = (t27 + 4);
    t36 = *((unsigned int *)t25);
    t37 = (~(t36));
    t38 = *((unsigned int *)t27);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t25) != 0)
        goto LAB63;

LAB64:    t28 = (t42 + 4);
    t44 = *((unsigned int *)t42);
    t45 = (!(t44));
    t46 = *((unsigned int *)t28);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB65;

LAB66:    memcpy(t81, t42, 8);

LAB67:    memset(t109, 0, 8);
    t86 = (t81 + 4);
    t103 = *((unsigned int *)t86);
    t105 = (~(t103));
    t106 = *((unsigned int *)t81);
    t107 = (t106 & t105);
    t108 = (t107 & 1U);
    if (t108 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t86) != 0)
        goto LAB81;

LAB82:    t111 = *((unsigned int *)t13);
    t112 = *((unsigned int *)t109);
    t113 = (t111 & t112);
    *((unsigned int *)t117) = t113;
    t95 = (t13 + 4);
    t96 = (t109 + 4);
    t110 = (t117 + 4);
    t114 = *((unsigned int *)t95);
    t115 = *((unsigned int *)t96);
    t118 = (t114 | t115);
    *((unsigned int *)t110) = t118;
    t119 = *((unsigned int *)t110);
    t120 = (t119 != 0);
    if (t120 == 1)
        goto LAB83;

LAB84:
LAB85:    goto LAB56;

LAB59:    t24 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB60;

LAB61:    *((unsigned int *)t42) = 1;
    goto LAB64;

LAB63:    t26 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB64;

LAB65:    t41 = (t0 + 876U);
    t43 = *((char **)t41);
    t41 = (t0 + 692U);
    t49 = *((char **)t41);
    memset(t58, 0, 8);
    t41 = (t43 + 4);
    t50 = (t49 + 4);
    t48 = *((unsigned int *)t43);
    t51 = *((unsigned int *)t49);
    t52 = (t48 ^ t51);
    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t50);
    t60 = (t53 ^ t54);
    t61 = (t52 | t60);
    t62 = *((unsigned int *)t41);
    t63 = *((unsigned int *)t50);
    t64 = (t62 | t63);
    t65 = (~(t64));
    t66 = (t61 & t65);
    if (t66 != 0)
        goto LAB71;

LAB68:    if (t64 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t58) = 1;

LAB71:    memset(t73, 0, 8);
    t56 = (t58 + 4);
    t67 = *((unsigned int *)t56);
    t68 = (~(t67));
    t69 = *((unsigned int *)t58);
    t70 = (t69 & t68);
    t71 = (t70 & 1U);
    if (t71 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t56) != 0)
        goto LAB74;

LAB75:    t75 = *((unsigned int *)t42);
    t76 = *((unsigned int *)t73);
    t77 = (t75 | t76);
    *((unsigned int *)t81) = t77;
    t59 = (t42 + 4);
    t72 = (t73 + 4);
    t74 = (t81 + 4);
    t78 = *((unsigned int *)t59);
    t79 = *((unsigned int *)t72);
    t82 = (t78 | t79);
    *((unsigned int *)t74) = t82;
    t83 = *((unsigned int *)t74);
    t84 = (t83 != 0);
    if (t84 == 1)
        goto LAB76;

LAB77:
LAB78:    goto LAB67;

LAB70:    t55 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB71;

LAB72:    *((unsigned int *)t73) = 1;
    goto LAB75;

LAB74:    t57 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB75;

LAB76:    t88 = *((unsigned int *)t81);
    t89 = *((unsigned int *)t74);
    *((unsigned int *)t81) = (t88 | t89);
    t80 = (t42 + 4);
    t85 = (t73 + 4);
    t90 = *((unsigned int *)t80);
    t91 = (~(t90));
    t92 = *((unsigned int *)t42);
    t100 = (t92 & t91);
    t93 = *((unsigned int *)t85);
    t94 = (~(t93));
    t97 = *((unsigned int *)t73);
    t104 = (t97 & t94);
    t98 = (~(t100));
    t99 = (~(t104));
    t101 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t101 & t98);
    t102 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t102 & t99);
    goto LAB78;

LAB79:    *((unsigned int *)t109) = 1;
    goto LAB82;

LAB81:    t87 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB82;

LAB83:    t124 = *((unsigned int *)t117);
    t125 = *((unsigned int *)t110);
    *((unsigned int *)t117) = (t124 | t125);
    t116 = (t13 + 4);
    t121 = (t109 + 4);
    t126 = *((unsigned int *)t13);
    t127 = (~(t126));
    t128 = *((unsigned int *)t116);
    t129 = (~(t128));
    t130 = *((unsigned int *)t109);
    t133 = (~(t130));
    t134 = *((unsigned int *)t121);
    t135 = (~(t134));
    t141 = (t127 & t129);
    t142 = (t133 & t135);
    t136 = (~(t141));
    t137 = (~(t142));
    t138 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t138 & t136);
    t139 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t139 & t137);
    t140 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t140 & t136);
    t143 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t143 & t137);
    goto LAB85;

LAB86:    xsi_set_current_line(51, ng0);

LAB89:    xsi_set_current_line(52, ng0);
    t123 = ((char*)((ng2)));
    t131 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t131, t123, 0, 0, 1, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB88;

LAB91:    *((unsigned int *)t13) = 1;
    goto LAB94;

LAB93:    t4 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB94;

LAB95:    t11 = (t0 + 784U);
    t12 = *((char **)t11);
    t11 = (t0 + 600U);
    t19 = *((char **)t11);
    memset(t27, 0, 8);
    t11 = (t12 + 4);
    t20 = (t19 + 4);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t19);
    t21 = (t17 ^ t18);
    t22 = *((unsigned int *)t11);
    t23 = *((unsigned int *)t20);
    t29 = (t22 ^ t23);
    t30 = (t21 | t29);
    t31 = *((unsigned int *)t11);
    t32 = *((unsigned int *)t20);
    t33 = (t31 | t32);
    t34 = (~(t33));
    t35 = (t30 & t34);
    if (t35 != 0)
        goto LAB101;

LAB98:    if (t33 != 0)
        goto LAB100;

LAB99:    *((unsigned int *)t27) = 1;

LAB101:    memset(t42, 0, 8);
    t25 = (t27 + 4);
    t36 = *((unsigned int *)t25);
    t37 = (~(t36));
    t38 = *((unsigned int *)t27);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB102;

LAB103:    if (*((unsigned int *)t25) != 0)
        goto LAB104;

LAB105:    t28 = (t42 + 4);
    t44 = *((unsigned int *)t42);
    t45 = (!(t44));
    t46 = *((unsigned int *)t28);
    t47 = (t45 || t46);
    if (t47 > 0)
        goto LAB106;

LAB107:    memcpy(t81, t42, 8);

LAB108:    memset(t109, 0, 8);
    t86 = (t81 + 4);
    t103 = *((unsigned int *)t86);
    t105 = (~(t103));
    t106 = *((unsigned int *)t81);
    t107 = (t106 & t105);
    t108 = (t107 & 1U);
    if (t108 != 0)
        goto LAB120;

LAB121:    if (*((unsigned int *)t86) != 0)
        goto LAB122;

LAB123:    t111 = *((unsigned int *)t13);
    t112 = *((unsigned int *)t109);
    t113 = (t111 & t112);
    *((unsigned int *)t117) = t113;
    t95 = (t13 + 4);
    t96 = (t109 + 4);
    t110 = (t117 + 4);
    t114 = *((unsigned int *)t95);
    t115 = *((unsigned int *)t96);
    t118 = (t114 | t115);
    *((unsigned int *)t110) = t118;
    t119 = *((unsigned int *)t110);
    t120 = (t119 != 0);
    if (t120 == 1)
        goto LAB124;

LAB125:
LAB126:    goto LAB97;

LAB100:    t24 = (t27 + 4);
    *((unsigned int *)t27) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB101;

LAB102:    *((unsigned int *)t42) = 1;
    goto LAB105;

LAB104:    t26 = (t42 + 4);
    *((unsigned int *)t42) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB105;

LAB106:    t41 = (t0 + 784U);
    t43 = *((char **)t41);
    t41 = (t0 + 692U);
    t49 = *((char **)t41);
    memset(t58, 0, 8);
    t41 = (t43 + 4);
    t50 = (t49 + 4);
    t48 = *((unsigned int *)t43);
    t51 = *((unsigned int *)t49);
    t52 = (t48 ^ t51);
    t53 = *((unsigned int *)t41);
    t54 = *((unsigned int *)t50);
    t60 = (t53 ^ t54);
    t61 = (t52 | t60);
    t62 = *((unsigned int *)t41);
    t63 = *((unsigned int *)t50);
    t64 = (t62 | t63);
    t65 = (~(t64));
    t66 = (t61 & t65);
    if (t66 != 0)
        goto LAB112;

LAB109:    if (t64 != 0)
        goto LAB111;

LAB110:    *((unsigned int *)t58) = 1;

LAB112:    memset(t73, 0, 8);
    t56 = (t58 + 4);
    t67 = *((unsigned int *)t56);
    t68 = (~(t67));
    t69 = *((unsigned int *)t58);
    t70 = (t69 & t68);
    t71 = (t70 & 1U);
    if (t71 != 0)
        goto LAB113;

LAB114:    if (*((unsigned int *)t56) != 0)
        goto LAB115;

LAB116:    t75 = *((unsigned int *)t42);
    t76 = *((unsigned int *)t73);
    t77 = (t75 | t76);
    *((unsigned int *)t81) = t77;
    t59 = (t42 + 4);
    t72 = (t73 + 4);
    t74 = (t81 + 4);
    t78 = *((unsigned int *)t59);
    t79 = *((unsigned int *)t72);
    t82 = (t78 | t79);
    *((unsigned int *)t74) = t82;
    t83 = *((unsigned int *)t74);
    t84 = (t83 != 0);
    if (t84 == 1)
        goto LAB117;

LAB118:
LAB119:    goto LAB108;

LAB111:    t55 = (t58 + 4);
    *((unsigned int *)t58) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB112;

LAB113:    *((unsigned int *)t73) = 1;
    goto LAB116;

LAB115:    t57 = (t73 + 4);
    *((unsigned int *)t73) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB116;

LAB117:    t88 = *((unsigned int *)t81);
    t89 = *((unsigned int *)t74);
    *((unsigned int *)t81) = (t88 | t89);
    t80 = (t42 + 4);
    t85 = (t73 + 4);
    t90 = *((unsigned int *)t80);
    t91 = (~(t90));
    t92 = *((unsigned int *)t42);
    t100 = (t92 & t91);
    t93 = *((unsigned int *)t85);
    t94 = (~(t93));
    t97 = *((unsigned int *)t73);
    t104 = (t97 & t94);
    t98 = (~(t100));
    t99 = (~(t104));
    t101 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t101 & t98);
    t102 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t102 & t99);
    goto LAB119;

LAB120:    *((unsigned int *)t109) = 1;
    goto LAB123;

LAB122:    t87 = (t109 + 4);
    *((unsigned int *)t109) = 1;
    *((unsigned int *)t87) = 1;
    goto LAB123;

LAB124:    t124 = *((unsigned int *)t117);
    t125 = *((unsigned int *)t110);
    *((unsigned int *)t117) = (t124 | t125);
    t116 = (t13 + 4);
    t121 = (t109 + 4);
    t126 = *((unsigned int *)t13);
    t127 = (~(t126));
    t128 = *((unsigned int *)t116);
    t129 = (~(t128));
    t130 = *((unsigned int *)t109);
    t133 = (~(t130));
    t134 = *((unsigned int *)t121);
    t135 = (~(t134));
    t141 = (t127 & t129);
    t142 = (t133 & t135);
    t136 = (~(t141));
    t137 = (~(t142));
    t138 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t138 & t136);
    t139 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t139 & t137);
    t140 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t140 & t136);
    t143 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t143 & t137);
    goto LAB126;

LAB127:    xsi_set_current_line(64, ng0);

LAB130:    xsi_set_current_line(65, ng0);
    t123 = ((char*)((ng2)));
    t131 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t131, t123, 0, 0, 1, 0LL);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB129;

}


extern void work_m_00000000003385322734_0133808186_init()
{
	static char *pe[] = {(void *)Initial_34_0,(void *)Always_40_1};
	xsi_register_didat("work_m_00000000003385322734_0133808186", "isim/CPUT_isim_beh.exe.sim/work/m_00000000003385322734_0133808186.didat");
	xsi_register_executes(pe);
}
