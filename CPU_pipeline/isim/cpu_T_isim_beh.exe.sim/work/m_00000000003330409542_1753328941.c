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
static const char *ng0 = "D:/CPU_Pipeline_BranchHazard/lab3/Forwarding_Unit.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {2U, 0U};
static unsigned int ng3[] = {1U, 0U};



static void Initial_35_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(36, ng0);

LAB2:    xsi_set_current_line(37, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 2, 0LL);
    xsi_set_current_line(38, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 2, 0LL);
    xsi_set_current_line(39, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 2, 0LL);
    xsi_set_current_line(40, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 2, 0LL);

LAB1:    return;
}

static void Always_42_1(char *t0)
{
    char t6[8];
    char t20[8];
    char t35[8];
    char t43[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;

LAB0:    t1 = (t0 + 2416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2612);
    *((int *)t2) = 1;
    t3 = (t0 + 2444);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1152U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB6;

LAB7:    if (*((unsigned int *)t4) != 0)
        goto LAB8;

LAB9:    t13 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t13);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB10;

LAB11:    memcpy(t43, t6, 8);

LAB12:    t75 = (t43 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB27;

LAB28:    if (*((unsigned int *)t2) != 0)
        goto LAB29;

LAB30:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB31;

LAB32:    memcpy(t43, t6, 8);

LAB33:    t57 = (t43 + 4);
    t76 = *((unsigned int *)t57);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB45;

LAB46:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB47:
LAB26:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t2) != 0)
        goto LAB50;

LAB51:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB52;

LAB53:    memcpy(t43, t6, 8);

LAB54:    t57 = (t43 + 4);
    t76 = *((unsigned int *)t57);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB66;

LAB67:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t2) != 0)
        goto LAB71;

LAB72:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB73;

LAB74:    memcpy(t43, t6, 8);

LAB75:    t57 = (t43 + 4);
    t76 = *((unsigned int *)t57);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB87;

LAB88:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB89:
LAB68:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB90;

LAB91:    if (*((unsigned int *)t2) != 0)
        goto LAB92;

LAB93:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB94;

LAB95:    memcpy(t43, t6, 8);

LAB96:    t57 = (t43 + 4);
    t76 = *((unsigned int *)t57);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB108;

LAB109:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB111;

LAB112:    if (*((unsigned int *)t2) != 0)
        goto LAB113;

LAB114:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB115;

LAB116:    memcpy(t43, t6, 8);

LAB117:    t57 = (t43 + 4);
    t76 = *((unsigned int *)t57);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB129;

LAB130:    xsi_set_current_line(65, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB131:
LAB110:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1152U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB132;

LAB133:    if (*((unsigned int *)t2) != 0)
        goto LAB134;

LAB135:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB136;

LAB137:    memcpy(t43, t6, 8);

LAB138:    t57 = (t43 + 4);
    t76 = *((unsigned int *)t57);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB150;

LAB151:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1244U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB153;

LAB154:    if (*((unsigned int *)t2) != 0)
        goto LAB155;

LAB156:    t5 = (t6 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t5);
    t16 = (t14 || t15);
    if (t16 > 0)
        goto LAB157;

LAB158:    memcpy(t43, t6, 8);

LAB159:    t57 = (t43 + 4);
    t76 = *((unsigned int *)t57);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 != 0);
    if (t80 > 0)
        goto LAB171;

LAB172:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB173:
LAB152:    goto LAB2;

LAB6:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t12 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB10:    t17 = (t0 + 968U);
    t18 = *((char **)t17);
    t17 = (t0 + 784U);
    t19 = *((char **)t17);
    memset(t20, 0, 8);
    t17 = (t18 + 4);
    t21 = (t19 + 4);
    t22 = *((unsigned int *)t18);
    t23 = *((unsigned int *)t19);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t17);
    t26 = *((unsigned int *)t21);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t17);
    t30 = *((unsigned int *)t21);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB16;

LAB13:    if (t31 != 0)
        goto LAB15;

LAB14:    *((unsigned int *)t20) = 1;

LAB16:    memset(t35, 0, 8);
    t36 = (t20 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t20);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB17;

LAB18:    if (*((unsigned int *)t36) != 0)
        goto LAB19;

LAB20:    t44 = *((unsigned int *)t6);
    t45 = *((unsigned int *)t35);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t6 + 4);
    t48 = (t35 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB21;

LAB22:
LAB23:    goto LAB12;

LAB15:    t34 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB16;

LAB17:    *((unsigned int *)t35) = 1;
    goto LAB20;

LAB19:    t42 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB20;

LAB21:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t6 + 4);
    t58 = (t35 + 4);
    t59 = *((unsigned int *)t6);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB23;

LAB24:    xsi_set_current_line(46, ng0);
    t81 = ((char*)((ng2)));
    t82 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t82, t81, 0, 0, 2, 0LL);
    goto LAB26;

LAB27:    *((unsigned int *)t6) = 1;
    goto LAB30;

LAB29:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB30;

LAB31:    t12 = (t0 + 1060U);
    t13 = *((char **)t12);
    t12 = (t0 + 784U);
    t17 = *((char **)t12);
    memset(t20, 0, 8);
    t12 = (t13 + 4);
    t18 = (t17 + 4);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t17);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t12);
    t26 = *((unsigned int *)t18);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t12);
    t30 = *((unsigned int *)t18);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB37;

LAB34:    if (t31 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t20) = 1;

LAB37:    memset(t35, 0, 8);
    t21 = (t20 + 4);
    t37 = *((unsigned int *)t21);
    t38 = (~(t37));
    t39 = *((unsigned int *)t20);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t21) != 0)
        goto LAB40;

LAB41:    t44 = *((unsigned int *)t6);
    t45 = *((unsigned int *)t35);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t36 = (t6 + 4);
    t42 = (t35 + 4);
    t47 = (t43 + 4);
    t50 = *((unsigned int *)t36);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t47);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB42;

LAB43:
LAB44:    goto LAB33;

LAB36:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB37;

LAB38:    *((unsigned int *)t35) = 1;
    goto LAB41;

LAB40:    t34 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB41;

LAB42:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t47);
    *((unsigned int *)t43) = (t55 | t56);
    t48 = (t6 + 4);
    t49 = (t35 + 4);
    t59 = *((unsigned int *)t6);
    t60 = (~(t59));
    t61 = *((unsigned int *)t48);
    t62 = (~(t61));
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t49);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t71 & t69);
    t72 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB44;

LAB45:    xsi_set_current_line(48, ng0);
    t58 = ((char*)((ng3)));
    t75 = (t0 + 1472);
    xsi_vlogvar_wait_assign_value(t75, t58, 0, 0, 2, 0LL);
    goto LAB47;

LAB48:    *((unsigned int *)t6) = 1;
    goto LAB51;

LAB50:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB51;

LAB52:    t12 = (t0 + 968U);
    t13 = *((char **)t12);
    t12 = (t0 + 876U);
    t17 = *((char **)t12);
    memset(t20, 0, 8);
    t12 = (t13 + 4);
    t18 = (t17 + 4);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t17);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t12);
    t26 = *((unsigned int *)t18);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t12);
    t30 = *((unsigned int *)t18);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB58;

LAB55:    if (t31 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t20) = 1;

LAB58:    memset(t35, 0, 8);
    t21 = (t20 + 4);
    t37 = *((unsigned int *)t21);
    t38 = (~(t37));
    t39 = *((unsigned int *)t20);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB59;

LAB60:    if (*((unsigned int *)t21) != 0)
        goto LAB61;

LAB62:    t44 = *((unsigned int *)t6);
    t45 = *((unsigned int *)t35);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t36 = (t6 + 4);
    t42 = (t35 + 4);
    t47 = (t43 + 4);
    t50 = *((unsigned int *)t36);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t47);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB63;

LAB64:
LAB65:    goto LAB54;

LAB57:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB58;

LAB59:    *((unsigned int *)t35) = 1;
    goto LAB62;

LAB61:    t34 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB62;

LAB63:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t47);
    *((unsigned int *)t43) = (t55 | t56);
    t48 = (t6 + 4);
    t49 = (t35 + 4);
    t59 = *((unsigned int *)t6);
    t60 = (~(t59));
    t61 = *((unsigned int *)t48);
    t62 = (~(t61));
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t49);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t71 & t69);
    t72 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB65;

LAB66:    xsi_set_current_line(53, ng0);
    t58 = ((char*)((ng2)));
    t75 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t75, t58, 0, 0, 2, 0LL);
    goto LAB68;

LAB69:    *((unsigned int *)t6) = 1;
    goto LAB72;

LAB71:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB72;

LAB73:    t12 = (t0 + 1060U);
    t13 = *((char **)t12);
    t12 = (t0 + 876U);
    t17 = *((char **)t12);
    memset(t20, 0, 8);
    t12 = (t13 + 4);
    t18 = (t17 + 4);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t17);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t12);
    t26 = *((unsigned int *)t18);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t12);
    t30 = *((unsigned int *)t18);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB79;

LAB76:    if (t31 != 0)
        goto LAB78;

LAB77:    *((unsigned int *)t20) = 1;

LAB79:    memset(t35, 0, 8);
    t21 = (t20 + 4);
    t37 = *((unsigned int *)t21);
    t38 = (~(t37));
    t39 = *((unsigned int *)t20);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t21) != 0)
        goto LAB82;

LAB83:    t44 = *((unsigned int *)t6);
    t45 = *((unsigned int *)t35);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t36 = (t6 + 4);
    t42 = (t35 + 4);
    t47 = (t43 + 4);
    t50 = *((unsigned int *)t36);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t47);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB84;

LAB85:
LAB86:    goto LAB75;

LAB78:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB79;

LAB80:    *((unsigned int *)t35) = 1;
    goto LAB83;

LAB82:    t34 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB83;

LAB84:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t47);
    *((unsigned int *)t43) = (t55 | t56);
    t48 = (t6 + 4);
    t49 = (t35 + 4);
    t59 = *((unsigned int *)t6);
    t60 = (~(t59));
    t61 = *((unsigned int *)t48);
    t62 = (~(t61));
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t49);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t71 & t69);
    t72 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB86;

LAB87:    xsi_set_current_line(55, ng0);
    t58 = ((char*)((ng3)));
    t75 = (t0 + 1564);
    xsi_vlogvar_wait_assign_value(t75, t58, 0, 0, 2, 0LL);
    goto LAB89;

LAB90:    *((unsigned int *)t6) = 1;
    goto LAB93;

LAB92:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB93;

LAB94:    t12 = (t0 + 968U);
    t13 = *((char **)t12);
    t12 = (t0 + 600U);
    t17 = *((char **)t12);
    memset(t20, 0, 8);
    t12 = (t13 + 4);
    t18 = (t17 + 4);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t17);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t12);
    t26 = *((unsigned int *)t18);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t12);
    t30 = *((unsigned int *)t18);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB100;

LAB97:    if (t31 != 0)
        goto LAB99;

LAB98:    *((unsigned int *)t20) = 1;

LAB100:    memset(t35, 0, 8);
    t21 = (t20 + 4);
    t37 = *((unsigned int *)t21);
    t38 = (~(t37));
    t39 = *((unsigned int *)t20);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB101;

LAB102:    if (*((unsigned int *)t21) != 0)
        goto LAB103;

LAB104:    t44 = *((unsigned int *)t6);
    t45 = *((unsigned int *)t35);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t36 = (t6 + 4);
    t42 = (t35 + 4);
    t47 = (t43 + 4);
    t50 = *((unsigned int *)t36);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t47);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB105;

LAB106:
LAB107:    goto LAB96;

LAB99:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB100;

LAB101:    *((unsigned int *)t35) = 1;
    goto LAB104;

LAB103:    t34 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB104;

LAB105:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t47);
    *((unsigned int *)t43) = (t55 | t56);
    t48 = (t6 + 4);
    t49 = (t35 + 4);
    t59 = *((unsigned int *)t6);
    t60 = (~(t59));
    t61 = *((unsigned int *)t48);
    t62 = (~(t61));
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t49);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t71 & t69);
    t72 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB107;

LAB108:    xsi_set_current_line(61, ng0);
    t58 = ((char*)((ng2)));
    t75 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t75, t58, 0, 0, 2, 0LL);
    goto LAB110;

LAB111:    *((unsigned int *)t6) = 1;
    goto LAB114;

LAB113:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB114;

LAB115:    t12 = (t0 + 1060U);
    t13 = *((char **)t12);
    t12 = (t0 + 600U);
    t17 = *((char **)t12);
    memset(t20, 0, 8);
    t12 = (t13 + 4);
    t18 = (t17 + 4);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t17);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t12);
    t26 = *((unsigned int *)t18);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t12);
    t30 = *((unsigned int *)t18);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB121;

LAB118:    if (t31 != 0)
        goto LAB120;

LAB119:    *((unsigned int *)t20) = 1;

LAB121:    memset(t35, 0, 8);
    t21 = (t20 + 4);
    t37 = *((unsigned int *)t21);
    t38 = (~(t37));
    t39 = *((unsigned int *)t20);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB122;

LAB123:    if (*((unsigned int *)t21) != 0)
        goto LAB124;

LAB125:    t44 = *((unsigned int *)t6);
    t45 = *((unsigned int *)t35);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t36 = (t6 + 4);
    t42 = (t35 + 4);
    t47 = (t43 + 4);
    t50 = *((unsigned int *)t36);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t47);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB126;

LAB127:
LAB128:    goto LAB117;

LAB120:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB121;

LAB122:    *((unsigned int *)t35) = 1;
    goto LAB125;

LAB124:    t34 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB125;

LAB126:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t47);
    *((unsigned int *)t43) = (t55 | t56);
    t48 = (t6 + 4);
    t49 = (t35 + 4);
    t59 = *((unsigned int *)t6);
    t60 = (~(t59));
    t61 = *((unsigned int *)t48);
    t62 = (~(t61));
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t49);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t71 & t69);
    t72 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB128;

LAB129:    xsi_set_current_line(63, ng0);
    t58 = ((char*)((ng3)));
    t75 = (t0 + 1656);
    xsi_vlogvar_wait_assign_value(t75, t58, 0, 0, 2, 0LL);
    goto LAB131;

LAB132:    *((unsigned int *)t6) = 1;
    goto LAB135;

LAB134:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB135;

LAB136:    t12 = (t0 + 968U);
    t13 = *((char **)t12);
    t12 = (t0 + 692U);
    t17 = *((char **)t12);
    memset(t20, 0, 8);
    t12 = (t13 + 4);
    t18 = (t17 + 4);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t17);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t12);
    t26 = *((unsigned int *)t18);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t12);
    t30 = *((unsigned int *)t18);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB142;

LAB139:    if (t31 != 0)
        goto LAB141;

LAB140:    *((unsigned int *)t20) = 1;

LAB142:    memset(t35, 0, 8);
    t21 = (t20 + 4);
    t37 = *((unsigned int *)t21);
    t38 = (~(t37));
    t39 = *((unsigned int *)t20);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB143;

LAB144:    if (*((unsigned int *)t21) != 0)
        goto LAB145;

LAB146:    t44 = *((unsigned int *)t6);
    t45 = *((unsigned int *)t35);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t36 = (t6 + 4);
    t42 = (t35 + 4);
    t47 = (t43 + 4);
    t50 = *((unsigned int *)t36);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t47);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB147;

LAB148:
LAB149:    goto LAB138;

LAB141:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB142;

LAB143:    *((unsigned int *)t35) = 1;
    goto LAB146;

LAB145:    t34 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB146;

LAB147:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t47);
    *((unsigned int *)t43) = (t55 | t56);
    t48 = (t6 + 4);
    t49 = (t35 + 4);
    t59 = *((unsigned int *)t6);
    t60 = (~(t59));
    t61 = *((unsigned int *)t48);
    t62 = (~(t61));
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t49);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t71 & t69);
    t72 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB149;

LAB150:    xsi_set_current_line(68, ng0);
    t58 = ((char*)((ng2)));
    t75 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t75, t58, 0, 0, 2, 0LL);
    goto LAB152;

LAB153:    *((unsigned int *)t6) = 1;
    goto LAB156;

LAB155:    t4 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB156;

LAB157:    t12 = (t0 + 1060U);
    t13 = *((char **)t12);
    t12 = (t0 + 692U);
    t17 = *((char **)t12);
    memset(t20, 0, 8);
    t12 = (t13 + 4);
    t18 = (t17 + 4);
    t22 = *((unsigned int *)t13);
    t23 = *((unsigned int *)t17);
    t24 = (t22 ^ t23);
    t25 = *((unsigned int *)t12);
    t26 = *((unsigned int *)t18);
    t27 = (t25 ^ t26);
    t28 = (t24 | t27);
    t29 = *((unsigned int *)t12);
    t30 = *((unsigned int *)t18);
    t31 = (t29 | t30);
    t32 = (~(t31));
    t33 = (t28 & t32);
    if (t33 != 0)
        goto LAB163;

LAB160:    if (t31 != 0)
        goto LAB162;

LAB161:    *((unsigned int *)t20) = 1;

LAB163:    memset(t35, 0, 8);
    t21 = (t20 + 4);
    t37 = *((unsigned int *)t21);
    t38 = (~(t37));
    t39 = *((unsigned int *)t20);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB164;

LAB165:    if (*((unsigned int *)t21) != 0)
        goto LAB166;

LAB167:    t44 = *((unsigned int *)t6);
    t45 = *((unsigned int *)t35);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t36 = (t6 + 4);
    t42 = (t35 + 4);
    t47 = (t43 + 4);
    t50 = *((unsigned int *)t36);
    t51 = *((unsigned int *)t42);
    t52 = (t50 | t51);
    *((unsigned int *)t47) = t52;
    t53 = *((unsigned int *)t47);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB168;

LAB169:
LAB170:    goto LAB159;

LAB162:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB163;

LAB164:    *((unsigned int *)t35) = 1;
    goto LAB167;

LAB166:    t34 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB167;

LAB168:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t47);
    *((unsigned int *)t43) = (t55 | t56);
    t48 = (t6 + 4);
    t49 = (t35 + 4);
    t59 = *((unsigned int *)t6);
    t60 = (~(t59));
    t61 = *((unsigned int *)t48);
    t62 = (~(t61));
    t63 = *((unsigned int *)t35);
    t64 = (~(t63));
    t65 = *((unsigned int *)t49);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t71 & t69);
    t72 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB170;

LAB171:    xsi_set_current_line(70, ng0);
    t58 = ((char*)((ng3)));
    t75 = (t0 + 1748);
    xsi_vlogvar_wait_assign_value(t75, t58, 0, 0, 2, 0LL);
    goto LAB173;

}


extern void work_m_00000000003330409542_1753328941_init()
{
	static char *pe[] = {(void *)Initial_35_0,(void *)Always_42_1};
	xsi_register_didat("work_m_00000000003330409542_1753328941", "isim/cpu_T_isim_beh.exe.sim/work/m_00000000003330409542_1753328941.didat");
	xsi_register_executes(pe);
}
