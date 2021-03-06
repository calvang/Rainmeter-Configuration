[Variables]

;Width and height for meters. Defaults: 80, 80.
Width=80
Height=#Width#

;Inner and outer radius of meters. Defaults: 32, 25.
;With default setting the meter is 64x64 and has 8px margins (80px-64px=2*8px).
MeterOuter=32
MeterInner=25

;Font to be used. "Familiar Pro" looks nice, but license doesn't allow me to include it.
;Download Familiar Pro for free: http://www.dafont.com/familiar-pro.font
;Defaults: Arial, 9.
FontFace="Arial"
FontSize=9

;Settings for single meters and quad meters: height of a text label, horizontal position
;(usually half of width) and vertical position of the top label. To move the bottom label
;lower, increase the label height. Defaults: 11, 40, 28. For Familiar Pro use LabelY=27.
LabelHeight=11
LabelX=41
LabelY=28

;Settings for dual meters: font size, label height and vertical position of the top label.
;Defaults: 8, 9, 26. For FamiliarPro use LabelYDual=25
FontSizeDual=8
LabelHeightDual=9
LabelYDual=26

;Settings for the Clock: font size, label height and vertical position of the top label.
;Defaults: 13, 15, 23. For Familiar Pro use LabelYClock=22
FontSizeClock=13
LabelHeightClock=15
LabelYClock=23

;Settings for the Big Clock.
;Defaults: 160, 160, 64, 50, 28, 32, 82, 43.
;For Familiar Pro use BigLabelY=41
BigWidth=160
BigHeight=#BigWidth#
BigMeterInner=64
BigMeterWidth=50
BigFontSize=28
BigLabelHeight=32
BigLabelX=82                                                       
BigLabelY=43

;Settings for Sidebar: color, aero blur (0/1), width, height.
;Defaults: [0, 0, 0], 0, #Width#, #WORKAREAHEIGHT# (your screen's height).
SidebarColor=0, 0, 0
SidebarBlur=0
SidebarWidth=#Width#
SidebarHeight=#WORKAREAHEIGHT#

;Colors for meters: actual meter's color, background color, label color, value text's color.
;Defaults: [255, 255, 255], [255, 255, 255, 64], [255, 255, 255, 192], [255, 255, 255, 192].
ColorMeter=255, 255, 255
ColorBG=255, 255, 255, 64
ColorLabel=255, 255, 255, 192
ColorValue=255, 255, 255, 192

;Your Internet connection's download/upload speed in bits per second.
;Leave zeros for "smart" meters that use the biggest encountered speeds as NetDL/UL.
;Defaults: 0, 0.
NetDL=0
NetUL=0

;Drives to monitor for Drive meters. Defaults: C:, D:
Drive1=C:
Drive2=D: