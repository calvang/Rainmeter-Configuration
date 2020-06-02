[MeasureFake]
Measure=Calc
Formula=1

;----------------------------------------------------------------

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

[StyleRoundline]
MeasureName=MeasureMain
Meter=Roundline
X=0
Y=0
W=#Width#
H=#Height#
Solid=1
LineStart=#MeterOuter#
LineLength=#MeterInner#
StartAngle=4.7123889
RotationAngle=6.2831853
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

;----------------------------------------------------------------

[BackgroundRound]
MeterStyle=StyleBackground

[MeterRound]
MeterStyle=StyleRoundline

[MeterLabel]
MeterStyle=StyleLabel

[MeterText]
MeterStyle=StyleValue
