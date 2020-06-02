[MeasureFake]
Measure=Calc
Formula=1

[MeasureHour]
Measure=Time
Format=%H

[MeasureMin]
Measure=Time
Format=%M

;----------------------------------------------------------------

[StyleBackground]
Meter=Roundline
MeasureName=MeasureFake
X=0
Y=0
W=#BigWidth#
H=#BigHeight#
Solid=1
LineStart=#BigMeterInner#
LineLength=#BigMeterWidth#
StartAngle=0
RotationAngle=6.2831853
LineColor=#ColorBG#
AntiAlias=1

[StyleHour]
MeasureName=MeasureHour
Meter=String
X=#BigLabelX#
Y=#BigLabelY#
W=#BigWidth#
H=#BigLabelHeight#
FontFace=#FontFace#
FontColor=#ColorLabel#
FontSize=#BigFontSize#
StringAlign=CENTER
StringStyle=BOLD
AntiAlias=1

[StyleMin]
MeasureName=MeasureMin
Meter=String
X=#BigLabelX#
Y=0R
W=#BigWidth#
H=#BigLabelHeight#
FontFace=#FontFace#
FontColor=#ColorValue#
FontSize=#BigFontSize#
StringAlign=CENTER
StringStyle=BOLD
AutoScale=1
AntiAlias=1

;----------------------------------------------------------------

[BackgroundRound]
MeterStyle=StyleBackground

[MeterRound]
MeterStyle=StyleRoundline

[MeterLabel]
MeterStyle=StyleHour

[MeterText]
MeterStyle=StyleMin
