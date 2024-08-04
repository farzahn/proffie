// ProffieOS7 Config File
#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 3
#define NUM_BUTTONS 2
const unsigned int maxLedsPerStrip = 144;
#define EXTRA_COLOR_BUFFER_SPACE 60
#define VOLUME 1500
#define CLASH_THRESHOLD_G 3.0
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define KILL_OLD_PLAYERS
#define MOTION_TIMEOUT 60 * 5 * 1000
#define IDLE_OFF_TIME 60 * 5 * 1000
#define DISABLE_BASIC_PARSER_STYLES
#define DISABLE_DIAGNOSTIC_COMMANDS
#define ENABLE_ALL_EDIT_OPTIONS
#define NO_REPEAT_RANDOM
#define COLOR_CHANGE_DIRECT
#define FETT263_EDIT_MODE_MENU
#define FETT263_SPECIAL_ABILITIES
#define FETT263_SAY_BATTERY_PERCENT
#define FETT263_LOCKUP_DELAY 200
#define FETT263_BM_CLASH_DETECT 6
#define FETT263_TWIST_ON
#define FETT263_TWIST_ON_NO_BM
#define FETT263_TWIST_OFF
#endif

#ifdef CONFIG_PROP
#include "../props/saber_fett263_buttons.h"
#endif


#ifdef CONFIG_PRESETS

Preset presets[] = {
{ "CAL;common",  "font/font1.wav",
/* copyright Fett263 CustomBlade (Primary Blade) OS7 Style
https://www.fett263.com/fett263-proffieOS7-style-library.html#CustomBlade
OS7.14 v2.242p
Single Style
Multi Phase (Special Abilities*)
Default: Cal Kestis Survivor Blue [Rgb<0,0,255>]
1: Cal Kestis Survivor Cyan [Rgb<0,255,255>]
2: Cal Kestis Survivor Green [Rgb<0,255,0>]
3: Cal Kestis Survivor Indigo [Rgb<80,50,210>]
4: Cal Kestis Survivor Magenta [Rgb<255,0,255>]
5: Cal Kestis Survivor Orange [Rgb<255,97,0>]
6: Cal Kestis Survivor Purple [Rgb<115,15,240>]
7: Cal Kestis Survivor Red [Rgb<255,0,0>]
8: Cal Kestis Survivor Silver [Rgb<100,100,150>]
9: Cal Kestis Survivor Yellow [Rgb<255,255,0>]

Multi Phase Control: use Special Abilities controls to change Phase. Requires Alt Font.

NOTE:This style includes Control Layer. Only one Control Layer should be used per preset.

*This style REQUIRES Alt Fonts alt000/ to alt009/ to be set up. Uses altchng.wav on change.
See https://pod.hubbe.net/sound/alt_sounds.html for more information.
--Effects Included--
Ignition Effect: Standard Ignition [Color: IgnitionColorArg]
Retraction Effect: Standard Retraction [Color: RetractionColorArg]
Lockup Effect:
0: mainLockMulti0Shape - Begin: Real Clash - Style: Intensity AudioFlicker - End: Full Blade Absorb
[Color: LockupColorArg]
Lightning Block Effect:
0: mainLBMulti0Shape - Begin: Responsive Impact - Style: Strobing AudioFlicker - End: Full Blade Absorb
[Color: LBColorArg]
Drag Effect:
0: mainDragMulti0Shape - Begin: Wipe In - Style: Intensity Sparking Drag - End: Wipe Out
[Color: DragColorArg]
Melt Effect:
0: mainMeltMulti0Shape - Begin: Wipe In - Style: Intensity Melt - End: Wipe Out
[Color: StabColorArg]
Blast Effect: Blast Wave (Random) [Color: BlastColorArg]
Clash Effect: Real Clash V1 [Color: ClashColorArg]
Special Ability 1: Next Phase
Special Ability 2: Previous Phase
Special Ability 3: Toggle Rain Mode Uses trloop00.wav or trloop/000/000.wav (rain sounds looped)

*/
StylePtr<Layers<Black,ColorSelect<AltF,TrSelect<Ifon<Int<1>,Int<0>>,TrInstant,TrFadeX<Int<1000>>>,StripesX<Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,EffectPulseF<EFFECT_ALT_SOUND>>,Int<3000>,Int<3000>>,Int<8000>,Int<3000>>,Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,EffectPulseF<EFFECT_ALT_SOUND>>,Int<3000>,Int<3000>>,Int<-2600>,Int<-3600>>,Rgb<0,0,255>,Mix<Int<12000>,Black,Rgb<0,0,255>>,Pulsing<Rgb<0,0,255>,Mix<Int<8000>,Black,Rgb<0,0,255>>,1400>>,StripesX<Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,EffectPulseF<EFFECT_ALT_SOUND>>,Int<3000>,Int<3000>>,Int<10000>,Int<5000>>,Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,EffectPulseF<EFFECT_ALT_SOUND>>,Int<3000>,Int<3000>>,Int<-2000>,Int<-3000>>,Rgb<0,255,255>,Mix<Int<12000>,Black,Rgb<0,255,255>>,Pulsing<Rgb<0,255,255>,Mix<Int<8000>,Black,Rgb<0,255,255>>,1400>>,StripesX<Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,EffectPulseF<EFFECT_ALT_SOUND>>,Int<3000>,Int<3000>>,Int<4000>,Int<1800>>,Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,EffectPulseF<EFFECT_ALT_SOUND>>,Int<2000>,Int<4000>>,Int<-2800>,Int<-4000>>,Mix<Int<16000>,Black,Rgb<0,255,0>>,Mix<Sin<Int<20>,Int<22000>,Int<32768>>,Black,Rgb<0,255,0>>,Mix<Int<8000>,Black,Rgb<0,255,0>>>,StripesX<Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,EffectPulseF<EFFECT_ALT_SOUND>>,Int<3000>,Int<3000>>,Int<9000>,Int<4000>>,Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,EffectPulseF<EFFECT_ALT_SOUND>>,Int<3000>,Int<3000>>,Int<-2400>,Int<-3000>>,Rgb<80,50,210>,Mix<Int<15000>,Black,Rgb<80,50,210>>,Pulsing<Rgb<80,50,210>,Mix<Int<10000>,Black,Rgb<80,50,210>>,600>>,StripesX<Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,EffectPulseF<EFFECT_ALT_SOUND>>,Int<3000>,Int<3000>>,Int<9000>,Int<4000>>,Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,EffectPulseF<EFFECT_ALT_SOUND>>,Int<3000>,Int<3000>>,Int<-2000>,Int<-3000>>,Rgb<255,0,255>,Mix<Int<12000>,Black,Rgb<255,0,255>>,Pulsing<Rgb<255,0,255>,Mix<Int<8000>,Black,Rgb<255,0,255>>,800>>,StripesX<Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,EffectPulseF<EFFECT_ALT_SOUND>>,Int<3000>,Int<3000>>,Int<4000>,Int<1800>>,Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,EffectPulseF<EFFECT_ALT_SOUND>>,Int<2000>,Int<4000>>,Int<-2800>,Int<-4000>>,Mix<Int<16000>,Black,Rgb<255,97,0>>,Mix<Sin<Int<20>,Int<20000>,Int<32768>>,Black,Rgb<255,97,0>>,Mix<Int<10000>,Black,Rgb<255,97,0>>>,StripesX<Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,EffectPulseF<EFFECT_ALT_SOUND>>,Int<3000>,Int<3000>>,Sin<Int<20>,Int<10000>,Int<7000>>,Int<3000>>,Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,EffectPulseF<EFFECT_ALT_SOUND>>,Int<2000>,Int<4000>>,Int<-2300>,Int<-4000>>,Rgb<115,15,240>,Mix<Int<12000>,Black,Rgb<115,15,240>>,Pulsing<Rgb<115,15,240>,Mix<Int<20000>,Black,Rgb<115,15,240>>,2000>>,StripesX<Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,EffectPulseF<EFFECT_ALT_SOUND>>,Int<3000>,Int<2000>>,Int<6000>,Int<2000>>,Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,EffectPulseF<EFFECT_ALT_SOUND>>,Int<3000>,Int<4000>>,Int<-2600>,Int<-3600>>,Rgb<255,0,0>,Mix<Int<12000>,Black,Rgb<255,0,0>>,Pulsing<Rgb<255,0,0>,Mix<Int<8000>,Black,Rgb<255,0,0>>,1000>>,StripesX<Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,EffectPulseF<EFFECT_ALT_SOUND>>,Int<3000>,Int<3000>>,Int<4000>,Int<1800>>,Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,EffectPulseF<EFFECT_ALT_SOUND>>,Int<2000>,Int<4000>>,Int<-3000>,Int<-4500>>,Mix<Int<16000>,Black,Rgb<100,100,150>>,Mix<Sin<Int<20>,Int<22000>,Int<32768>>,Black,Rgb<100,100,150>>,Mix<Int<8000>,Black,Rgb<100,100,150>>>,StripesX<Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,EffectPulseF<EFFECT_ALT_SOUND>>,Int<3000>,Int<3000>>,Int<3600>,Int<1600>>,Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,EffectPulseF<EFFECT_ALT_SOUND>>,Int<2000>,Int<4000>>,Int<-2700>,Int<-4100>>,Mix<Int<16000>,Black,Rgb<255,255,0>>,Mix<Sin<Int<20>,Int<22000>,Int<32768>>,Black,Rgb<255,255,0>>,Mix<Int<8000>,Black,Rgb<255,255,0>>>>,ColorSelect<EffectIncrementF<EFFECT_USER3,Int<2>>,TrFade<100>,AlphaL<White,Int<0>>,AlphaL<RgbArg<RETRACTION_COLOR_ARG,Rgb<255,255,255>>,SparkleF<300,800>>>,TransitionEffectL<TrDoEffectAlwaysX<TrInstant,EFFECT_ALT_SOUND,ModF<Sum<AltF,Int<1>>,Int<10>>,Int<-1>>,EFFECT_USER1>,TransitionEffectL<TrDoEffectAlwaysX<TrInstant,EFFECT_ALT_SOUND,ModF<Sum<AltF,Int<-1>>,Int<10>>,Int<-1>>,EFFECT_USER2>,TransitionEffectL<TrDoEffect<TrInstant,EFFECT_SOUND_LOOP,0>,EFFECT_USER3>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaL<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<22000>>>,AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12000>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,BrownNoiseFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12000>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,300>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<22000>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<20000>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>>,TrExtend<5000,TrInstant>,TrFade<5000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL,Int<1>>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrExtend<200,TrInstant>,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Int<10000>,Int<21000>>,Int<10000>>>,TrFade<200>>,TrConcat<TrInstant,RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,Int<1>>,LockupTrL<AlphaL<TransitionEffect<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,TrExtend<4000,TrInstant>,TrFade<4000>,EFFECT_DRAG_BEGIN>,SmoothStep<Scale<TwistAngle<>,IntArg<DRAG_SIZE_ARG,28000>,Int<30000>>,Int<3000>>>,TrWipeIn<200>,TrWipe<200>,SaberBase::LOCKUP_DRAG,Int<1>>,LockupTrL<AlphaL<Stripes<2000,4000,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,Mix<Sin<Int<50>>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,Mix<Int<4096>,Black,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,28000>,Int<30000>>,Int<3000>>>,TrConcat<TrExtend<4000,TrWipeIn<200>>,AlphaL<HumpFlicker<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>,RotateColorsX<Int<3000>,Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,68,0>>>>>,100>,SmoothStep<Scale<TwistAngle<>,IntArg<MELT_SIZE_ARG,28000>,Int<30000>>,Int<3000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT,Int<1>>,InOutTrL<TrWipeX<BendTimePowInvX<IgnitionTime<300>,Mult<IntArg<IGNITION_OPTION2_ARG,10992>,Int<98304>>>>,TrWipeInX<BendTimePowInvX<RetractionTime<0>,Mult<IntArg<RETRACTION_OPTION2_ARG,10992>,Int<98304>>>>,Black>>>(),

StylePtr<RVS_HEART>(""),

StylePtr<RVS_AUX>(""),

"RVS"
},

};

BladeConfig blades[] = {
 { 0, WS281XBladePtr<130, bladePin, Color8::GRB, PowerPINS<bladePowerPin2, bladePowerPin3> >(),
    WS281XBladePtr<8, blade2Pin, Color8::GRB, PowerPINS<bladePowerPin4> >(),
    SimpleBladePtr<CH1LED, CH2LED, NoLED, NoLED,bladePowerPin5, bladePowerPin6, -1, -1>(), 
CONFIGARRAY(presets) },
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
#ifdef CONFIG_STYLES

/*--------------------------------- RVS_AUX---------------------------------*/
using RVS_AUX = 
/*copyright Fett263 Simple (Primary Blade) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#Simple
OS6.6 v4.016
Single Style
Base Style: Static


--Effects Included--
Ignition Effect: Standard Ignition
Retraction Effect: Standard Retraction
Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
LightningBlock Effect: Responsive Lightning Block
Drag Effect: Intensity Sparking Drag
Melt Effect: Intensity Melt
Blast Effect: Blast Wave (Random)
Clash Effect: Real Clash V1
*/
 Layers<RgbArg<BASE_COLOR_ARG,Rgb<0,255,0>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>;
/*
 add to preset as StylePtr<RVS_AUX>()
*/

/*--------------------------------- RVS_HEART---------------------------------*/
using RVS_HEART = 
/*copyright Fett263 CustomBlade (Primary Blade) OS6 Style
https://fett263.com/fett263-proffieOS6-style-library.html#CustomBlade
OS6.6 v4.016
Single Style
Dual Phase (Oscillate)
Default: Static
1: Static


--Effects Included--
Ignition Effect: Standard Ignition
Retraction Effect: Standard Retraction
Lockup Effect: Intensity Lockup V1, Begin Effect: Real Clash, End Effect: Full Blade Absorb
LightningBlock Effect: Responsive Lightning Block
Drag Effect: Intensity Sparking Drag
Melt Effect: Intensity Melt
Blast Effect: Blast Wave (Random)
Clash Effect: Real Clash V1
*/
 Layers<Mix<Sin<Int<6>>,Gradient<RotateColorsX<Scale<Sin<Int<20>>,Int<0>,Int<4096>>,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>,RotateColorsX<Scale<Sin<Int<20>>,Int<4096>,Int<0>>,RgbArg<BASE_COLOR_ARG,Rgb<0,0,255>>>>,Gradient<RotateColorsX<Scale<Sin<Int<20>>,Int<0>,Int<4096>>,RgbArg<ALT_COLOR_ARG,Rgb<0,255,0>>>,RotateColorsX<Scale<Sin<Int<20>>,Int<4096>,Int<0>>,RgbArg<ALT_COLOR_ARG,Rgb<0,255,0>>>>>,TransitionEffectL<TrWaveX<RgbArg<BLAST_COLOR_ARG,Rgb<255,255,255>>,Scale<EffectRandomF<EFFECT_BLAST>,Int<100>,Int<400>>,Int<100>,Scale<EffectPosition<EFFECT_BLAST>,Int<100>,Int<400>>,Scale<EffectPosition<EFFECT_BLAST>,Int<28000>,Int<8000>>>,EFFECT_BLAST>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,TransitionEffectL<TrConcat<TrInstant,AlphaL<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<12000>,Int<60000>>>>,TrFadeX<Scale<ClashImpactF<>,Int<200>,Int<400>>>>,EFFECT_CLASH>,TransitionEffectL<TrWaveX<RgbArg<CLASH_COLOR_ARG,Rgb<255,255,255>>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Int<100>,Scale<ClashImpactF<>,Int<100>,Int<400>>,Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>>,EFFECT_CLASH>>,LockupTrL<TransitionEffect<AlphaMixL<Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<SwingSpeed<100>,Int<14000>,Int<18000>>>,BrownNoiseFlickerL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Int<200>>,StripesX<Int<1800>,Scale<NoisySoundLevel,Int<-3500>,Int<-5000>>,Mix<Int<6425>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<12850>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>>,AlphaL<AudioFlicker<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Mix<Int<10280>,Black,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Int<13000>>>,TrJoin<TrDelay<8000>,TrInstant>,TrFade<3000>,EFFECT_LOCKUP_BEGIN>,TrConcat<TrJoin<TrDelay<50>,TrInstant>,Mix<IsLessThan<ClashImpactF<>,Int<26000>>,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,AlphaL<RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,Bump<Scale<BladeAngle<>,Scale<BladeAngle<0,16000>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-12000>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<10000>>>,Sum<IntArg<LOCKUP_POSITION_ARG,16000>,Int<-10000>>>,Scale<ClashImpactF<>,Int<20000>,Int<60000>>>>>,TrFade<300>>,TrConcat<TrInstant,RgbArg<LOCKUP_COLOR_ARG,Rgb<255,255,255>>,TrFade<400>>,SaberBase::LOCKUP_NORMAL>,ResponsiveLightningBlockL<Strobe<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,AudioFlicker<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Blue>,50,1>,TrConcat<TrInstant,AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Bump<Int<12000>,Int<18000>>>,TrFade<200>>,TrConcat<TrInstant,HumpFlickerL<AlphaL<RgbArg<LB_COLOR_ARG,Rgb<255,255,255>>,Int<16000>>,30>,TrSmoothFade<600>>>,LockupTrL<AlphaL<RandomPerLEDFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrConcat<TrJoin<TrDelay<4000>,TrWipeIn<200>>,AlphaL<BrownNoiseFlickerL<RgbArg<DRAG_COLOR_ARG,Rgb<255,255,255>>,Int<300>>,SmoothStep<IntArg<DRAG_SIZE_ARG,28000>,Int<3000>>>,TrFade<4000>>,TrFade<300>,SaberBase::LOCKUP_DRAG>,LockupTrL<AlphaL<Remap<Scale<RampF,Int<65536>,Int<0>>,StaticFire<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,Mix<TwistAngle<>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>,RotateColorsX<Int<3000>,Mix<Int<12000>,Black,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>>,0,3,5,3000,10>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrConcat<TrWipeIn<100>,AlphaL<RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrJoin<TrDelay<4000>,TrFade<300>>,AlphaL<Mix<TwistAngle<>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>,RotateColorsX<Int<3000>,RgbArg<STAB_COLOR_ARG,Rgb<255,24,0>>>>,SmoothStep<IntArg<MELT_SIZE_ARG,28000>,Int<4000>>>,TrFade<4000>>,TrWipe<200>,SaberBase::LOCKUP_MELT>,InOutTrL<TrWipeX<IgnitionTime<300>>,TrWipeInX<RetractionTime<0>>,Black>>;
/*
 add to preset as StylePtr<RVS_HEART>()
*/

#endif



 /* Generated with Fett263 Config Helper v3.10 */