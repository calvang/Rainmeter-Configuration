[MeasureFake]
Measure=Calc
Formula=1

[StyleBackground]
Meter=Roundline
MeasureName=MeasureFake
X=0
Y=0
W=#Width#
H=#Height#
Solid=1
LineStart=#MeterOuter#
LineLength=#MeterInner#
StartAngle=0
RotationAngle=6.2831853
LineColor=#ColorBG#
AntiAlias=1

;bottom left
[StyleRoundline1]
MeasureName=Measure1
Meter=Roundline
X=0
Y=0
W=#Width#
H=#Height#
Solid=1
LineStart=#MeterOuter#
LineLength=#MeterInner#
StartAngle=1.6007963
RotationAngle=1.4807963
LineColor=#ColorMeter#
AntiAlias=1

;top left
[StyleRoundline2]
MeasureName=Measure2
Meter=Roundline
X=0
Y=0
W=#Width#
H=#Height#
Solid=1
LineStart=#MeterOuter#
LineLength=#MeterInner#
StartAngle=3.1715926
RotationAngle=1.4807963
LineColor=#ColorMeter#
AntiAlias=1

;bottom right
[StyleRoundline3]
MeasureName=Measure3
Meter=Roundline
X=0
Y=0
W=#Width#
H=#Height#
Solid=1
LineStart=#MeterOuter#
LineLength=#MeterInner#
StartAngle=1.5407963
RotationAngle=-1.4807963
LineColor=#ColorMeter#
AntiAlias=1

;top right
[StyleRoundline4]
MeasureName=Measure4
Meter=Roundline
X=0
Y=0
W=#Width#
H=#Height#
Solid=1
LineStart=#MeterOuter#
LineLength=#MeterInner#
StartAngle=-0.03
RotationAngle=-1.4807963
LineColor=#ColorMeter#
AntiAlias=1

[StyleLabel]
Meter=String
Text="#Label#"
X=#LabelX#
Y=#LabelY#
W=#Width#
H=#LabelHeight#
FontFace=#FontFace#
FontColor=#ColorLabel#
FontSize=#FontSize#
StringAlign=CENTER
StringStyle=BOLD
AntiAlias=1

[StyleValue]
MeasureName=MeasureMain
Meter=String
Postfix="#Postfix#"
X=#LabelX#
Y=0R
W=#Width#
H=#LabelHeight#
FontFace=#FontFace#
FontColor=#ColorValue#
FontSize=#FontSize#
StringAlign=CENTER
StringStyle=BOLD
AutoScale=1
NumOfDecimals=#Decimals#
AntiAlias=1

[BackgroundRound]
MeterStyle=StyleBackground

[MeterRound1]
MeterStyle=StyleRoundline1

[MeterRound2]
MeterStyle=StyleRoundline2

[MeterRound3]
MeterStyle=StyleRoundline3

[MeterRound4]
MeterStyle=StyleRoundline4

[MeterLabel]
MeterStyle=StyleLabel

[MeterText]
MeterStyle=StyleValue
