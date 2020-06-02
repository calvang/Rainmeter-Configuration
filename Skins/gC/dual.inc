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
RotationAngle=3.0815927
LineColor=#ColorMeter#
AntiAlias=1

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
StartAngle=1.5407963
RotationAngle=-3.0815927
LineColor=#ColorMeter#
AntiAlias=1

[StyleLabel]
Meter=String
Text="#Label#"
X=#LabelX#
Y=#LabelYDual#
W=#Width#
H=#LabelHeightDual#
FontFace=#FontFace#
FontColor=#ColorLabel#
FontSize=#FontSizeDual#
StringAlign=CENTER
StringStyle=BOLD
AntiAlias=1

[StyleValue1]
MeasureName=Measure1
Meter=String
Postfix="#Postfix1#"
X=#LabelX#
Y=0R
W=#Width#
H=#LabelHeightDual#
FontFace=#FontFace#
FontColor=#ColorValue#
FontSize=#FontSizeDual#
StringAlign=CENTER
StringStyle=BOLD
AutoScale=1
NumOfDecimals=#Decimals1#
AntiAlias=1

[StyleValue2]
MeasureName=Measure2
Meter=String
Postfix="#Postfix2#"
X=#LabelX#
Y=0R
W=#Width#
H=#LabelHeightDual#
FontFace=#FontFace#
FontColor=#ColorValue#
FontSize=#FontSizeDual#
StringAlign=CENTER
StringStyle=BOLD
AutoScale=1
NumOfDecimals=#Decimals2#
AntiAlias=1

[BackgroundRound]
MeterStyle=StyleBackground

[MeterRound1]
MeterStyle=StyleRoundline1

[MeterRound2]
MeterStyle=StyleRoundline2

[MeterLabel]
MeterStyle=StyleLabel

[MeterText1]
MeterStyle=StyleValue1

[MeterText2]
MeterStyle=StyleValue2
