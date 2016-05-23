################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Each subdirectory must supply rules for building sources it contributes
CC1310_LAUNCHXL.obj: ../CC1310_LAUNCHXL.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/bin/armcl" -mv7M3 --code_state=16 --float_support=vfplib --abi=eabi -me --include_path="C:/Users/antsis/workspace_v6_1/uartecho_CC1310_LAUNCHXL_TI_CC1310F128" --include_path="C:/ti/tirtos_cc13xx_cc26xx_2_16_00_08/products/cc13xxware_2_03_01_16780" --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/include" -g --define=DEBUG --define=ccs --diag_wrap=off --display_error_number --diag_warning=225 --diag_warning=255 --gen_func_subsections=on --preproc_with_compile --preproc_dependency="CC1310_LAUNCHXL.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

bsp_spi.obj: ../bsp_spi.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/bin/armcl" -mv7M3 --code_state=16 --float_support=vfplib --abi=eabi -me --include_path="C:/Users/antsis/workspace_v6_1/uartecho_CC1310_LAUNCHXL_TI_CC1310F128" --include_path="C:/ti/tirtos_cc13xx_cc26xx_2_16_00_08/products/cc13xxware_2_03_01_16780" --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/include" -g --define=DEBUG --define=ccs --diag_wrap=off --display_error_number --diag_warning=225 --diag_warning=255 --gen_func_subsections=on --preproc_with_compile --preproc_dependency="bsp_spi.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

ccfg.obj: ../ccfg.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/bin/armcl" -mv7M3 --code_state=16 --float_support=vfplib --abi=eabi -me --include_path="C:/Users/antsis/workspace_v6_1/uartecho_CC1310_LAUNCHXL_TI_CC1310F128" --include_path="C:/ti/tirtos_cc13xx_cc26xx_2_16_00_08/products/cc13xxware_2_03_01_16780" --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/include" -g --define=DEBUG --define=ccs --diag_wrap=off --display_error_number --diag_warning=225 --diag_warning=255 --gen_func_subsections=on --preproc_with_compile --preproc_dependency="ccfg.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

ext_flash.obj: ../ext_flash.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/bin/armcl" -mv7M3 --code_state=16 --float_support=vfplib --abi=eabi -me --include_path="C:/Users/antsis/workspace_v6_1/uartecho_CC1310_LAUNCHXL_TI_CC1310F128" --include_path="C:/ti/tirtos_cc13xx_cc26xx_2_16_00_08/products/cc13xxware_2_03_01_16780" --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/include" -g --define=DEBUG --define=ccs --diag_wrap=off --display_error_number --diag_warning=225 --diag_warning=255 --gen_func_subsections=on --preproc_with_compile --preproc_dependency="ext_flash.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

uartecho.obj: ../uartecho.c $(GEN_OPTS) $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/bin/armcl" -mv7M3 --code_state=16 --float_support=vfplib --abi=eabi -me --include_path="C:/Users/antsis/workspace_v6_1/uartecho_CC1310_LAUNCHXL_TI_CC1310F128" --include_path="C:/ti/tirtos_cc13xx_cc26xx_2_16_00_08/products/cc13xxware_2_03_01_16780" --include_path="C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/include" -g --define=DEBUG --define=ccs --diag_wrap=off --display_error_number --diag_warning=225 --diag_warning=255 --gen_func_subsections=on --preproc_with_compile --preproc_dependency="uartecho.pp" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

configPkg/linker.cmd: ../uartecho.cfg
	@echo 'Building file: $<'
	@echo 'Invoking: XDCtools'
	"C:/ti/xdctools_3_32_00_06_core/xs" --xdcpath="C:/ti/tirtos_cc13xx_cc26xx_2_16_00_08/packages;C:/ti/tirtos_cc13xx_cc26xx_2_16_00_08/products/tidrivers_cc13xx_cc26xx_2_16_00_08/packages;C:/ti/tirtos_cc13xx_cc26xx_2_16_00_08/products/bios_6_45_01_29/packages;C:/ti/tirtos_cc13xx_cc26xx_2_16_00_08/products/uia_2_00_05_50/packages;C:/ti/ccsv6/ccs_base;" xdc.tools.configuro -o configPkg -t ti.targets.arm.elf.M3 -p ti.platforms.simplelink:CC1310F128 -r release -c "C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5" --compileOptions "-mv7M3 --code_state=16 --float_support=vfplib --abi=eabi -me --include_path=\"C:/Users/antsis/workspace_v6_1/uartecho_CC1310_LAUNCHXL_TI_CC1310F128\" --include_path=\"C:/ti/tirtos_cc13xx_cc26xx_2_16_00_08/products/cc13xxware_2_03_01_16780\" --include_path=\"C:/ti/ccsv6/tools/compiler/ti-cgt-arm_5.2.5/include\" -g --define=DEBUG --define=ccs --diag_wrap=off --display_error_number --diag_warning=225 --diag_warning=255 --gen_func_subsections=on  " "$<"
	@echo 'Finished building: $<'
	@echo ' '

configPkg/compiler.opt: | configPkg/linker.cmd
configPkg/: | configPkg/linker.cmd


