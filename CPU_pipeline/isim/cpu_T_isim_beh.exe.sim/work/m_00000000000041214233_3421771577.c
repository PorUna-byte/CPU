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
static const char *ng0 = "D:/CPU_Pipeline_BranchHazard/lab3/Mux3_32.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};



static void Cont_28_0(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t11[8];
    char t44[8];
    char t45[8];
    char t47[8];
    char t52[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    char *t13;
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
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t46;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
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
    char *t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t79;
    char *t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(28, ng0);
    t2 = (t0 + 876U);
    t5 = *((char **)t2);
    t2 = (t0 + 852U);
    t7 = (t2 + 44U);
    t8 = *((char **)t7);
    t9 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t6, 32, t5, t8, 2, t9, 32, 1);
    t10 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t12 = (t6 + 4);
    t13 = (t10 + 4);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB7;

LAB4:    if (t23 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t11) = 1;

LAB7:    memset(t4, 0, 8);
    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t27) != 0)
        goto LAB10;

LAB11:    t34 = (t4 + 4);
    t35 = *((unsigned int *)t4);
    t36 = *((unsigned int *)t34);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB12;

LAB13:    t40 = *((unsigned int *)t4);
    t41 = (~(t40));
    t42 = *((unsigned int *)t34);
    t43 = (t41 || t42);
    if (t43 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t34) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t44, 8);

LAB20:    t79 = (t0 + 1868);
    t86 = (t79 + 32U);
    t87 = *((char **)t86);
    t88 = (t87 + 40U);
    t89 = *((char **)t88);
    memcpy(t89, t3, 8);
    xsi_driver_vfirst_trans(t79, 0, 31);
    t90 = (t0 + 1824);
    *((int *)t90) = 1;

LAB1:    return;
LAB6:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t33 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t33) = 1;
    goto LAB11;

LAB12:    t38 = (t0 + 784U);
    t39 = *((char **)t38);
    goto LAB13;

LAB14:    t38 = (t0 + 876U);
    t46 = *((char **)t38);
    t38 = (t0 + 852U);
    t48 = (t38 + 44U);
    t49 = *((char **)t48);
    t50 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t47, 32, t46, t49, 2, t50, 32, 1);
    t51 = ((char*)((ng1)));
    memset(t52, 0, 8);
    t53 = (t47 + 4);
    t54 = (t51 + 4);
    t55 = *((unsigned int *)t47);
    t56 = *((unsigned int *)t51);
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
        goto LAB24;

LAB21:    if (t64 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t52) = 1;

LAB24:    memset(t45, 0, 8);
    t68 = (t52 + 4);
    t69 = *((unsigned int *)t68);
    t70 = (~(t69));
    t71 = *((unsigned int *)t52);
    t72 = (t71 & t70);
    t73 = (t72 & 1U);
    if (t73 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t68) != 0)
        goto LAB27;

LAB28:    t75 = (t45 + 4);
    t76 = *((unsigned int *)t45);
    t77 = *((unsigned int *)t75);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB29;

LAB30:    t81 = *((unsigned int *)t45);
    t82 = (~(t81));
    t83 = *((unsigned int *)t75);
    t84 = (t82 || t83);
    if (t84 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t75) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t45) > 0)
        goto LAB35;

LAB36:    memcpy(t44, t85, 8);

LAB37:    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t39, 32, t44, 32);
    goto LAB20;

LAB18:    memcpy(t3, t39, 8);
    goto LAB20;

LAB23:    t67 = (t52 + 4);
    *((unsigned int *)t52) = 1;
    *((unsigned int *)t67) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t45) = 1;
    goto LAB28;

LAB27:    t74 = (t45 + 4);
    *((unsigned int *)t45) = 1;
    *((unsigned int *)t74) = 1;
    goto LAB28;

LAB29:    t79 = (t0 + 692U);
    t80 = *((char **)t79);
    goto LAB30;

LAB31:    t79 = (t0 + 600U);
    t85 = *((char **)t79);
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t44, 32, t80, 32, t85, 32);
    goto LAB37;

LAB35:    memcpy(t44, t80, 8);
    goto LAB37;

}


extern void work_m_00000000000041214233_3421771577_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("work_m_00000000000041214233_3421771577", "isim/cpu_T_isim_beh.exe.sim/work/m_00000000000041214233_3421771577.didat");
	xsi_register_executes(pe);
}
