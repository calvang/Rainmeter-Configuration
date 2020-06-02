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
W=#Width#
H=#Height#
Solid=1
LineStart=#MeterOuter#
LineLength=#MeterInner#
StartAngle=0
RotationAngle=6.2831853
LineColor=#ColorBG#
AntiAlias=1

[StyleHour]
MeasureName=MeasureHour
Meter=String
X=#LabelX#
Y=#LabelYClock#
W=#Width#
H=#LabelHeightClock#
FontFace=#FontFace#
FontColor=#ColorLabel#
FontSize=#FontSizeClock#
StringAlign=CENTER
StringStyle=BOLD
AntiAlias=1

[StyleMin]
MeasureName=MeasureMin
Meter=String
X=#LabelX#
Y=0R
W=#Width#
H=#LabelHeightClock#
FontFace=#FontFace#
FontColor=#ColorValue#
FontSize=#FontSizeClock#
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
