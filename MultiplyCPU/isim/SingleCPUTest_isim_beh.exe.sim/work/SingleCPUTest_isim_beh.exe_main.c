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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000002154502904_1938225339_init();
    work_m_00000000001996417839_1733832700_init();
    work_m_00000000003599387904_2138213552_init();
    work_m_00000000001338965317_3674772129_init();
    work_m_00000000000335156854_0886308060_init();
    work_m_00000000002038112835_3781281531_init();
    work_m_00000000000996317031_2461264495_init();
    work_m_00000000000123864454_1978072525_init();
    work_m_00000000000759645922_1548247302_init();
    work_m_00000000001831563286_2704462173_init();
    work_m_00000000001903531225_3640830355_init();
    work_m_00000000001903531225_0779232509_init();
    work_m_00000000001348344753_1711025897_init();
    work_m_00000000001893200802_2244295302_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001893200802_2244295302");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
