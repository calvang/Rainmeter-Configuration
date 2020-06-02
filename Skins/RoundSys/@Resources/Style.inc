[Style]
FontColor=255,255,255
FontFace=Calibri
FontSize=8
StringStyle=Normal
StringEffect=Shadow
SolidColor=0,0,0,1
AntiAlias=1
StringAlign=Left
ToolTipType=1
Dynamicvariables=1

[Style1]
FontColor=#FBB#
FontFace=#eft2#
FontSize=#eft3#
FontWeight=#eft1#
StringEffect=#eft#
SolidColor=0,0,0,1
AntiAlias=1
InlineSetting=#eft4#
InlineSetting2=Case | #eft5#
StringAlign=LEFT
ToolTipType=1
X=8
Y=20r
UpdateDivider=-1

[Style2]
FontColor=#FBB#
FontFace=#eft2#
FontSize=#eft3#
FontWeight=#eft1#
StringEffect=#eft#
InlineSetting=#eft4#
InlineSetting2=Case | #eft5#
SolidColor=0,0,0,1
StringAlign=Left
ToolTipType=1
AntiAlias=1
Dynamicvariables=1
UpdateDivider=-1
InlineSetting2=Case | #eft5#
TransformationMatrix=#Scale#;0;0;#Scale#;((1-#Scale#)*([#CURRENTSECTION#:X]));((1-#Scale#)*([#CURRENTSECTION#:Y]))

[Style3]
FontColor=#DA1#
FontFace=#eft2#
FontSize=#eft3#
FontWeight=#eft1#
StringEffect=#eft#
InlineSetting=#eft4#
InlineSetting2=Case | #eft5#
SolidColor=0,0,0,1
StringAlign=Right
ToolTipType=1
AntiAlias=1
Dynamicvariables=1
UpdateDivider=-1
InlineSetting2=Case | #eft5#
TransformationMatrix=#Scale#;0;0;#Scale#;((1-#Scale#)*([#CURRENTSECTION#:X]+[#CURRENTSECTION#:W]));((1-#Scale#)*([#CURRENTSECTION#:Y]-[#CURRENTSECTION#:H]/32))

[Style4]
FontColor=#FBB#
FontFace=#eft2#
FontSize=#eft3#
FontWeight=#eft1#
StringEffect=#eft#
InlineSetting=#eft4#
InlineSetting2=Case | #eft5#
SolidColor=0,0,0,1
AntiAlias=1
ToolTipType=1
StringAlign=Center
X=(275*#SCALE#)
Dynamicvariables=1
UpdateDivider=-1
TransformationMatrix=#Scale#;0;0;#Scale#;((1-#Scale#)*([#CURRENTSECTION#:X]+[#CURRENTSECTION#:W]/2));((1-#Scale#)*([#CURRENTSECTION#:Y]))

[Style5]
FontColor=#FBB#
FontFace=#eft2#
FontSize=#eft3#
FontWeight=#eft1#
StringEffect=#eft#
InlineSetting=#eft4#
InlineSetting2=Case | #eft5#
SolidColor=0,0,0,1
AntiAlias=1
StringAlign=Right
X=159
Y=r
ToolTipType=1
Dynamicvariables=1
UpdateDivider=-1

[StyleC]
FontColor=#FBB#
FontFace=#eft2#
FontSize=#eft3#
FontWeight=#eft1#
StringEffect=#eft#
InlineSetting=#eft4#
SolidColor=0,0,0,1
AntiAlias=1
StringAlign=Left
ToolTipType=1
UpdateDivider=-1
Dynamicvariables=1
InlineSetting2=Case | #eft5#
TransformationMatrix=#SCALE#;0;0;#SCALE#;0;0

[StyleF]
FontColor=255,255,255
FontFace=Calibri
FontSize=9
StringStyle=Normal
StringEffect=Shadow
SolidColor=0,0,0,1
AntiAlias=1
StringAlign=Left
ToolTipType=1
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor #DA1#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]

[BRG]
Shape=Rectangle 0,0,10,10,20 | StrokeWidth 1 | Stroke Color #DA1# | Fill RadialGradient MyGradient | Extend Scale1
MyGradient=2,2 | #FBB# ; 0.0 | #DA1# ; 1.0
ToolTipType=1
MouseOverAction=[!SetOption #CURRENTSECTION# Scale1 "Scale 1.2,1.2,0,20"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Scale1 ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Scale1=Scale 1,1,0,0
UpdateDivider=-1

[BRG1]
X=20r
Y=6
Shape=Rectangle 0,0,10,10,20 | StrokeWidth 1 | Stroke Color #DA1# | Fill RadialGradient MyGradient | Extend Scale1
MyGradient=2,2 | #FBB# ; 0.0 | #DA1# ; 1.0
ToolTipType=1
MouseOverAction=[!SetOption #CURRENTSECTION# Scale1 "Scale 1.2,1.2,0,20"][!SetOption #CURRENTSECTION# Y "9"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Scale1 ""][!SetOption #CURRENTSECTION# Y ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Scale1=Scale 1,1,0,0
UpdateDivider=-1

[BRG2]
X=(275*#SCALE#)
Y=(280*#SCALE#)
Shape=Rectangle 0,0,(10*#SCALE#),(10*#SCALE#),20 | StrokeWidth 1 | Stroke Color #DA1# | Fill RadialGradient Gradient 
Gradient=2,2 | #FBB# ; 0.0 | #DA1# ; 1.0
ToolTipType=1
UpdateDivider=-1

[Variables]
FPB1=4
MyColor=77,0,233
MyAlpha=255
eft=border
eft1=500
eft2=Clockopia
eft3=11
eft4=None
eft5=Proper
FBB=252,252,252
DA1=0, 171, 255, 255
FBC=134,108,155
FBP=187,187,176,255
FBD=205,211,212
alpha=229
Player=Winamp
SlideshowFolder=#@#Preview
SlideShowUpdate=20
CorT=250
MEMTO=2048
VITM=800
VITCL=800
TForm=%#r
;Weather
WeatherCode=FRXX0289
Unit=M
;Do not change this value
UNV=C
MTAJR1=[!Refreshgroup Sephi]
MTAJR5=[!Refresh "#ROOTCONFIG#\Divers\Slideshow"]
MTAJR7=[!Refresh "#ROOTCONFIG#\System\GPU"]
MTAJR6=[!Refresh "#ROOTCONFIG#\Divers\Weather"]
MTAJR2=[!Refresh "#ROOTCONFIG#\Divers\Dock1"][!Refresh "#ROOTCONFIG#\Divers\Dock1"]
language=English
English=#@#Languages\English.inc
Français=#@#Languages\Français.inc
Spanish=#@#Languages\Spanish.inc
Italian=#@#Languages\Italian.inc
German=#@#Languages\German.inc
Portuguese=#@#Languages\Portuguese.inc
Russian=#@#Languages\Russian.inc
Serbian=#@#Languages\Serbian.inc
Locale=en_US
