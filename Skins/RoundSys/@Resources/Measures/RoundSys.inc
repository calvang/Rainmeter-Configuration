[Variables]
@include=#@#Style.inc
@include2=#@#Languages\#language#.inc
@include3=#@#Notes\Colors.txt

[SFDT]
Meter=Shape
Shape=Ellipse (285*#SCALE#),(285*#SCALE#),(288*#SCALE#) | Fill Color 0,0,0,1 | StrokeWidth 0
Shape2=Ellipse (286*#SCALE#),(288*#SCALE#),(267*#SCALE#) | Extend Plus
Plus=StrokeWidth 4 | Fill Color 0,0,0,1 | Stroke LinearGradient Gradient 
Shape3=Rectangle (350*#SCALE#),(160*#SCALE#),(120*#SCALE#),(2*#SCALE#),6 | Fill Color 167,210,255 | StrokeWidth 0
Shape4=Rectangle (390*#SCALE#),(310*#SCALE#),(120*#SCALE#),(2*#SCALE#),6 | Fill Color 78,255,245 | StrokeWidth 0
Shape5=Rectangle (310*#SCALE#),(460*#SCALE#),(120*#SCALE#),(2*#SCALE#),6 | Fill Color 195,175,255 | StrokeWidth 0
Shape6=Rectangle (100*#SCALE#),(160*#SCALE#),(120*#SCALE#),(2*#SCALE#),6 | Fill Color 255,192,131 | StrokeWidth 0
Shape7=Rectangle (60*#SCALE#),(310*#SCALE#),(120*#SCALE#),(2*#SCALE#),6 | Fill Color 196,255,118 | StrokeWidth 0
Shape8=Rectangle (140*#SCALE#),(460*#SCALE#),(120*#SCALE#),(2*#SCALE#),6 | Fill Color 151,114,255 | StrokeWidth 0
 Gradient=90 | #FBC# ; 0.0 | #DA1# ; 1.0
UpdateDivider=-1

[SFDT1]
Meter=Shape
Shape=Ellipse (286*#SCALE#),(288*#SCALE#),(227*#SCALE#) | Extend Plus2
Plus2=StrokeWidth (4*#SCALE#) | Fill Color 0,0,0,0 | Stroke LinearGradient Gradient |StrokeDashes 0,3 | StrokeDashCap Round | StrokeDashOffset[MLoop]
DynamicVariables=1
Gradient=90 | #FBC# ; 0.0 | #DA1# ; 1.0

[MLoop]
Measure=Loop
StartValue=5
EndValue=0
Increment=-1


[MPercent]
Measure=Plugin
PlugIn=PowerPlugin.dll
PowerState=PERCENT
UpdateDivider=5
MaxValue=100
MinValue=0
OnChangeAction=[!UpdateMeter PCent1][!UpdateMeter RBattery]

[MCPU]
Measure=CPU

[D2]
AutoScale=1
NumOfDecimals=2

[MMemTotal]
Measure=PhysicalMemory
Total=1
UpdateDivider=-1
Group=RA

[MUsedMem]
Measure=PhysicalMemory
UpdateDivider=-1
Group=RA

[MFreeMem]
Measure=PhysicalMemory
InvertMeasure=1
UpdateDivider=5
OnChangeAction=[!UpdateMeasureGroup RA][!UpdateMeterGroup RA]

[MSwapTotal]
Measure=SwapMemory
Total=1
UpdateDivider=-1
Group=RA1

[MUsedSwap]
Measure=SwapMemory
UpdateDivider=-1
Group=RA1

[MFreeSwap]
Measure=SwapMemory
InvertMeasure=1
UpdateDivider=5
OnChangeAction=[!UpdateMeasureGroup RA1][!UpdateMeterGroup RA1]

[MDriveFreeDisk]
Measure=FreeDiskSpace
Drive=#DD#:
IgnoreRemovable=0
UpdateDivider=5
OnChangeAction=[!UpdateMeasureGroup HDD][!UpdateMeterGroup HDD]

[MDriveUsedDisk]
Measure=FreeDiskSpace
InvertMeasure=1
Drive=#DD#:
UpdateDivider=-1
IgnoreRemovable=0
Group=HDD

[MDriveSizeDisk]
Measure=FreeDiskSpace
Drive=#DD#:
Total=1
IgnoreRemovable=0
UpdateDivider=-1
Group=HDD

[MNameDisk]
Measure=FreeDiskSpace
Label=1
Drive=#DD#:
IgnoreRemovable=0
UpdateDivider=-1
Group=HDD

[STVT]
LeftMouseUpAction=[!CommandMeasure "MVolume" "ChangeVolume 1"][!UpdateMeasureGroup Volu][!UpdateMeterGroup Volu]
RightMouseUpAction=[!CommandMeasure "MVolume" "ChangeVolume -1"][!UpdateMeasureGroup Volu][!UpdateMeterGroup Volu]
TooltipText=#VOLC#
ToolTipType=1
Group=Volu

[MVolume]
Measure=Plugin
Plugin=Win7AudioPlugin
OnChangeAction=[!UpdateMeasureGroup Volu][!UpdateMeterGroup Volu]

[PercentageCalc]
Measure=Calc
Formula=MVolume
IfBelowValue=0
IfBelowAction=[!SetOption MetVolume Text "#Mu#"]
IfAboveValue=-1
IfAboveAction=[!SetOption MetVolume Text "#vol# %1%"]
UpdateDivider=-1
Group=Volu

[STRD]
X=(287*#Scale#)
Y=(288*#Scale#)
LineStart=(260*#Scale#)
LineLength=(240*#Scale#)
Solid=1
AntiAlias=1
RotationAngle=1.02
UpdateDivider=-1

[Base1]
Meter=Roundline
MeterStyle=STRD
LineColor=#CC1#,50
StartAngle=-1.57

[RBattery]
Meter=Roundline
MeasureName=MPercent
MeterStyle=STRD
LineColor=#CC1#
StartAngle=-1.57

[Base2]
Meter=Roundline
MeterStyle=STRD
LineColor=#CC2#,50
StartAngle=-0.525

[RCPU]
Meter=Roundline
MeasureName=MCPU
MeterStyle=STRD
LineColor=#CC2#
StartAngle=-0.525
UpdateDivider=1

[Base3]
Meter=Roundline
MeterStyle=STRD
LineColor=#CC3#,50
StartAngle=0.525

[RRAM]
Meter=Roundline
MeasureName=MFreeMem
MeterStyle=STRD
LineColor=#CC3#
StartAngle=0.525
Group=RA

[Base4]
Meter=Roundline
MeterStyle=STRD
LineColor=#CC4#,50
StartAngle=1.57

[RSWAP]
Meter=Roundline
MeasureName=MFreeSwap
MeterStyle=STRD
LineColor=#CC4#
StartAngle=1.57
Group=RA1

[Base5]
Meter=Roundline
MeterStyle=STRD
LineColor=#CC5#,50
StartAngle=2.62

[RHDD]
Meter=Roundline
MeasureName=MDriveFreeDisk
MeterStyle=STRD
LineColor=#CC5#
StartAngle=2.62
Group=HDD

[Base6]
Meter=Roundline
MeterStyle=STRD
LineColor=#CC6#,50
StartAngle=3.67

[RVol]
Meter=Roundline
MeasureName=MVolume
MeterStyle=STRD|STVT
LineColor=#CC6#
StartAngle=3.67

[PCent1]
Meter=STRING
MeterStyle=Style3
MeasureName=MPercent
Text=#bap# %1%
X=(430*#SCALE#)
Y=(130*#SCALE#)
FontColor=#CC1#

[CPUValue]
Meter=STRING
MeterStyle=Style3
MeasureName=MCPU
Text=CPU %1%
UpdateDivider=1
X=(490*#SCALE#)
Y=(280*#SCALE#)
FontColor=#CC2#

[FM%]
Meter=STRING
MeasureName=MFreeMem
MeterStyle=Style3|D2
Percentual=1
Text=RAM %1%
ToolTipTitle=RAM: [MMemTotal:/1073741824, 2]GB
ToolTipText=#f#: [MFreeMem:/1073741824, 2]GB#CRLF##u#: [MUsedMem:/1073741824, 2]GB
Group=RA
X=(435*#SCALE#)
Y=(430*#SCALE#)
FontColor=#CC3#

[FSw%]
Meter=STRING
MeasureName=MFreeSwap
MeterStyle=Style2|D2
Percentual=1
Text=SWAP %1%
ToolTipTitle=SWAP: [MSwapTotal:/1073741824, 2]GB
ToolTipText=#f#: [MFreeSwap:/1073741824, 2]GB#CRLF##u#: [MUsedSwap:/1073741824, 2]GB
Group=RA1
X=(130*#SCALE#)
Y=(430*#SCALE#)
FontColor=#CC4#

[FD%]
Meter=STRING
MeasureName=MDriveFreeDisk
MeterStyle=Style2|D3
Percentual=1
Text=#DD#: [MNameDisk] %1%
LeftMouseUpAction=[#DD#:]
ToolTipTitle=#DD#: [MNameDisk]: [MDriveSizeDisk:/1073741824, 2]GB
ToolTipText=#f#: [MDriveFreeDisk:/1073741824, 2]GB#CRLF##u#: [MDriveUsedDisk:/1073741824, 2]GB
Group=HDD
X=(70*#SCALE#)
Y=(280*#SCALE#)
FontColor=#CC5#

[MetVolume]
Meter=String
MeasureName=PercentageCalc
MeterStyle=Style2|STVT
Group=Volu
X=(125*#SCALE#)
Y=(130*#SCALE#)
FontColor=#CC6#

[MTime]
Measure=TIME
Format=#TForm#

[MDate]
Measure=Time
FormatLocale=Local
Format= %#d %B, %A
OnChangeAction=[!UpdateMeter Date]
UpdateDivider=10

[Date]
Meter=String
MeterStyle=Style4
MeasureName=MDate
Text=%1
Y=(250*#SCALE#)
LeftMouseupAction=control.exe timedate.cpl
ToolTipText=#D&THP#

[Time]
Meter=String
MeterStyle=Style4
MeasureName=MTime
Text=%1
UpdateDivider=1
Y=(300*#SCALE#)

[Point]
Meter=Shape
MeterStyle=BRG2
LeftMouseUpAction=[#@#Notes\Colors.txt]
Tooltiptext=#op16#