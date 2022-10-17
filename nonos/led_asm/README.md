# 写在最前
写芯片驱动，实际上就是配置芯片上的寄存器，通过寄存器的配置组合实现特定功能，所以要对片上寄存器有充分了解。而知晓片上寄存器的途径就是阅读芯片手册：reference manual

# IOMUXC
- 32-bit software mux control registers (IOMUXC_SW_MUX_CTL_PAD_<PAD NAME> or IOMUXC_SW_MUX_CTL_GRP_<GROUP NAME>) to configure 1 of 8 alternate (ALT) MUX_MODE feilds of each pad or a predefined group of pads and to enable the forcing of an input path of the pad(s) (SION bit)
- 32-bit software pad control registers(IOMUXC_SW_PAD_CTL_PAD_<PAD_NAME> or IOMUXC_SW_PAD_CTL_GRP_<GROUP NAME>) to configure specific pad settings of each pad, or a predefined group of pads

The IOMUXC consists of two sub-blocks:
• IOMUXC_REGISTERS includes all of the IOMUXC registers (see Features).
• IOMUXC_LOGIC includes all of the IOMUXC combinatorial logic (IP interface controls, address decoder, observability muxes)

如果一个pad只提供一种功能，那么IOMUX就不需要了，直接将该pad和对应模块连接