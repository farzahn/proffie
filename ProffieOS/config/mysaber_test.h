// ProffieOS7 Config File
#ifdef CONFIG_TOP
#include "proffieboard_v2_config.h"
#define NUM_BLADES 1
#define NUM_BUTTONS 2
const unsigned int maxLedsPerStrip = 144;
#define EXTRA_COLOR_BUFFER_SPACE 60
#define VOLUME 700
#define CLASH_THRESHOLD_G 3
#define ENABLE_AUDIO
#define ENABLE_MOTION
#define ENABLE_WS2811
#define ENABLE_SD
#define KILL_OLD_PLAYERS
#define MOTION_TIMEOUT 60 * 15 * 1000
#define IDLE_OFF_TIME 60 * 15 * 1000
#define DISABLE_BASIC_PARSER_STYLES
#define DISABLE_DIAGNOSTIC_COMMANDS
#define ENABLE_ALL_EDIT_OPTIONS
#define NO_REPEAT_RANDOM
#define COLOR_CHANGE_DIRECT
#define FETT263_SAY_BATTERY_PERCENT
#define FETT263_LOCKUP_DELAY 200
#define FETT263_BM_CLASH_DETECT 6
#define FETT263_BM_DISABLE_OFF_BUTTON
#endif

#ifdef CONFIG_PROP
#include "../props/saber_fett263_buttons.h"
#endif

#ifdef CONFIG_PRESETS

Preset presets[] = {
    {"LUKE_ESB;common", "font/font.wav",
     /* copyright Fett263 CustomBlade (Primary Blade) OS7 Style
     https://www.fett263.com/fett263-proffieOS7-style-library.html#CustomBlade
     OS7.14 v2.242p
     Single Style
     Dual Phase (Force Bleed / Corrupt)
     Default: Cal Kestis Survivor Blue [BaseColorArg]
     1: Cal Kestis Survivor Green [AltColorArg]

     Dual Phase Control: use Force to Bleed / Corrupt (one-time). Resets when
     preset it changed.

     --Effects Included--
     Ignition Effect: Glitch On [Color: IgnitionColorArg]
     Retraction Effect: Glitch Off [Color: RetractionColorArg]
     PostOff Effect: Emitter Cool Off (Preon Size) [Color: PostOffColorArg]
     Lockup Effect:
     0: mainLockMulti0Shape - Begin: Real Clash - Style: Intensity AudioFlicker
     - End: Full Blade Absorb [Color: LockupColorArg] Lightning Block Effect: 0:
     mainLBMulti0Shape - Begin: Responsive Impact - Style: Strobing AudioFlicker
     - End: Full Blade Absorb [Color: LBColorArg] Drag Effect: 0:
     mainDragMulti0Shape - Begin: Wipe In - Style: Intensity Sparking Drag -
     End: Wipe Out [Color: DragColorArg] Melt Effect: 0: mainMeltMulti0Shape -
     Begin: Wipe In - Style: Intensity Melt - End: Wipe Out [Color:
     StabColorArg] Blast Effect: Blast Wave (Random) [Color: BlastColorArg]
     Clash Effect: Real Clash V3 [Color: ClashColorArg]
     Emitter Effect: Emitter Flare [Color: EmitterColorArg]
     */
     StylePtr<Layers<
         Black,
         ColorSelect<
             IncrementWithReset<EffectPulseF<EFFECT_FORCE>,
                                EffectPulseF<EFFECT_NEWFONT>, Int<1>>,
             TrSelect<Ifon<Int<1>, Int<0>>, TrInstant, TrFadeX<Int<1000>>>,
             StripesX<
                 Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,
                                     EffectPulseF<EFFECT_ALT_SOUND>>,
                                 Int<3000>, Int<3000>>,
                       Int<8000>, Int<3000>>,
                 Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,
                                     EffectPulseF<EFFECT_ALT_SOUND>>,
                                 Int<3000>, Int<3000>>,
                       Int<-2600>, Int<-3600>>,
                 RgbArg<BASE_COLOR_ARG, Rgb<0, 0, 255>>,
                 Mix<Int<12000>, Black, RgbArg<BASE_COLOR_ARG, Rgb<0, 0, 255>>>,
                 Pulsing<RgbArg<BASE_COLOR_ARG, Rgb<0, 0, 255>>,
                         Mix<Int<8000>, Black,
                             RgbArg<BASE_COLOR_ARG, Rgb<0, 0, 255>>>,
                         1400>>,
             StripesX<
                 Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,
                                     EffectPulseF<EFFECT_ALT_SOUND>>,
                                 Int<3000>, Int<3000>>,
                       Int<4000>, Int<1800>>,
                 Scale<HoldPeakF<Sum<EffectPulseF<EFFECT_IGNITION>,
                                     EffectPulseF<EFFECT_ALT_SOUND>>,
                                 Int<2000>, Int<4000>>,
                       Int<-2800>, Int<-4000>>,
                 Mix<Int<16000>, Black, RgbArg<ALT_COLOR_ARG, Rgb<0, 255, 0>>>,
                 Mix<Sin<Int<20>, Int<22000>, Int<32768>>, Black,
                     RgbArg<ALT_COLOR_ARG, Rgb<0, 255, 0>>>,
                 Mix<Int<8000>, Black, RgbArg<ALT_COLOR_ARG, Rgb<0, 255, 0>>>>>,
         AlphaL<RgbArg<EMITTER_COLOR_ARG, Rgb<255, 255, 255>>,
                SmoothStep<IntArg<EMITTER_SIZE_ARG, 2000>, Int<-6000>>>,
         TransitionEffectL<
             TrWaveX<
                 RgbArg<BLAST_COLOR_ARG, Rgb<255, 255, 255>>,
                 Scale<EffectRandomF<EFFECT_BLAST>, Int<100>, Int<400>>,
                 Int<100>,
                 Scale<EffectPosition<EFFECT_BLAST>, Int<100>, Int<400>>,
                 Scale<EffectPosition<EFFECT_BLAST>, Int<28000>, Int<8000>>>,
             EFFECT_BLAST>,
         AlphaL<
             TransitionEffectL<
                 TrSelect<
                     Scale<ClashImpactF<>, Int<0>, Int<4>>,
                     TrConcat<
                         TrInstant,
                         AlphaL<
                             RgbArg<CLASH_COLOR_ARG, Rgb<255, 255, 255>>,
                             Bump<
                                 Scale<
                                     BladeAngle<>,
                                     Scale<
                                         BladeAngle<0, 16000>,
                                         Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                             Int<-12000>>,
                                         Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                             Int<10000>>>,
                                     Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                         Int<-10000>>>,
                                 Scale<ClashImpactF<>, Int<8000>, Int<12000>>>>,
                         TrFadeX<Scale<ClashImpactF<>, Int<200>, Int<600>>>>,
                     TrWaveX<RgbArg<CLASH_COLOR_ARG, Rgb<255, 255, 255>>,
                             Scale<ClashImpactF<>, Int<100>, Int<400>>,
                             Int<100>,
                             Scale<ClashImpactF<>, Int<100>, Int<400>>,
                             Scale<BladeAngle<>,
                                   Scale<BladeAngle<0, 16000>,
                                         Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                             Int<-12000>>,
                                         Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                             Int<10000>>>,
                                   Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                       Int<-10000>>>>,
                     TrSparkX<
                         Remap<CenterDistF<Scale<
                                   BladeAngle<>,
                                   Scale<BladeAngle<0, 16000>,
                                         Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                             Int<-12000>>,
                                         Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                             Int<10000>>>,
                                   Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                       Int<-10000>>>>,
                               Stripes<
                                   1500, -3000,
                                   RgbArg<CLASH_COLOR_ARG, Rgb<255, 255, 255>>,
                                   Mix<Int<16384>, Black,
                                       RgbArg<CLASH_COLOR_ARG,
                                              Rgb<255, 255, 255>>>>>,
                         Int<100>, Scale<ClashImpactF<>, Int<100>, Int<400>>,
                         Scale<BladeAngle<>,
                               Scale<BladeAngle<0, 16000>,
                                     Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                         Int<-12000>>,
                                     Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                         Int<10000>>>,
                               Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                   Int<-10000>>>>,
                     TrConcat<
                         TrInstant, RgbArg<CLASH_COLOR_ARG, Rgb<255, 255, 255>>,
                         TrFadeX<Scale<ClashImpactF<>, Int<200>, Int<400>>>>,
                     TrConcat<
                         TrInstant, RgbArg<CLASH_COLOR_ARG, Rgb<255, 255, 255>>,
                         TrFadeX<Scale<ClashImpactF<>, Int<300>, Int<500>>>>>,
                 EFFECT_CLASH>,
             Scale<ClashImpactF<>, Int<24000>, Int<32768>>>,
         LockupTrL<
             TransitionEffect<
                 AlphaL<
                     AlphaMixL<
                         Bump<
                             Scale<BladeAngle<>,
                                   Scale<BladeAngle<0, 16000>,
                                         Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                             Int<-12000>>,
                                         Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                             Int<10000>>>,
                                   Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                       Int<-10000>>>,
                             Scale<SwingSpeed<100>, Int<14000>, Int<22000>>>,
                         AudioFlicker<
                             RgbArg<LOCKUP_COLOR_ARG, Rgb<255, 255, 255>>,
                             Mix<Int<12000>, Black,
                                 RgbArg<LOCKUP_COLOR_ARG, Rgb<255, 255, 255>>>>,
                         BrownNoiseFlicker<
                             RgbArg<LOCKUP_COLOR_ARG, Rgb<255, 255, 255>>,
                             Mix<Int<12000>, Black,
                                 RgbArg<LOCKUP_COLOR_ARG, Rgb<255, 255, 255>>>,
                             300>>,
                     Bump<Scale<BladeAngle<>,
                                Scale<BladeAngle<0, 16000>,
                                      Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                          Int<-12000>>,
                                      Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                          Int<10000>>>,
                                Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                    Int<-10000>>>,
                          Scale<SwingSpeed<100>, Int<14000>, Int<22000>>>>,
                 AlphaL<AudioFlicker<
                            RgbArg<LOCKUP_COLOR_ARG, Rgb<255, 255, 255>>,
                            Mix<Int<20000>, Black,
                                RgbArg<LOCKUP_COLOR_ARG, Rgb<255, 255, 255>>>>,
                        Bump<Scale<BladeAngle<>,
                                   Scale<BladeAngle<0, 16000>,
                                         Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                             Int<-12000>>,
                                         Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                             Int<10000>>>,
                                   Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                       Int<-10000>>>,
                             Scale<SwingSpeed<100>, Int<14000>, Int<18000>>>>,
                 TrExtend<5000, TrInstant>, TrFade<5000>, EFFECT_LOCKUP_BEGIN>,
             TrConcat<
                 TrJoin<TrDelay<50>, TrInstant>,
                 Mix<IsLessThan<ClashImpactF<>, Int<26000>>,
                     RgbArg<LOCKUP_COLOR_ARG, Rgb<255, 255, 255>>,
                     AlphaL<
                         RgbArg<LOCKUP_COLOR_ARG, Rgb<255, 255, 255>>,
                         Bump<
                             Scale<BladeAngle<>,
                                   Scale<BladeAngle<0, 16000>,
                                         Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                             Int<-12000>>,
                                         Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                             Int<10000>>>,
                                   Sum<IntArg<LOCKUP_POSITION_ARG, 16000>,
                                       Int<-10000>>>,
                             Scale<ClashImpactF<>, Int<20000>, Int<60000>>>>>,
                 TrFade<300>>,
             TrConcat<TrInstant, RgbArg<LOCKUP_COLOR_ARG, Rgb<255, 255, 255>>,
                      TrFade<400>>,
             SaberBase::LOCKUP_NORMAL, Int<1>>,
         ResponsiveLightningBlockL<
             Strobe<
                 RgbArg<LB_COLOR_ARG, Rgb<255, 255, 255>>,
                 AudioFlicker<RgbArg<LB_COLOR_ARG, Rgb<255, 255, 255>>, Blue>,
                 50, 1>,
             TrConcat<TrExtend<200, TrInstant>,
                      AlphaL<RgbArg<LB_COLOR_ARG, Rgb<255, 255, 255>>,
                             Bump<Scale<BladeAngle<>, Int<10000>, Int<21000>>,
                                  Int<10000>>>,
                      TrFade<200>>,
             TrConcat<TrInstant, RgbArg<LB_COLOR_ARG, Rgb<255, 255, 255>>,
                      TrFade<400>>,
             Int<1>>,
         LockupTrL<
             AlphaL<
                 TransitionEffect<
                     RandomPerLEDFlickerL<
                         RgbArg<DRAG_COLOR_ARG, Rgb<255, 255, 255>>>,
                     BrownNoiseFlickerL<
                         RgbArg<DRAG_COLOR_ARG, Rgb<255, 255, 255>>, Int<300>>,
                     TrExtend<4000, TrInstant>, TrFade<4000>,
                     EFFECT_DRAG_BEGIN>,
                 SmoothStep<Scale<TwistAngle<>, IntArg<DRAG_SIZE_ARG, 28000>,
                                  Int<30000>>,
                            Int<3000>>>,
             TrWipeIn<200>, TrWipe<200>, SaberBase::LOCKUP_DRAG, Int<1>>,
         LockupTrL<
             AlphaL<
                 Stripes<
                     2000, 4000,
                     Mix<TwistAngle<>, RgbArg<STAB_COLOR_ARG, Rgb<255, 68, 0>>,
                         RotateColorsX<Int<3000>, RgbArg<STAB_COLOR_ARG,
                                                         Rgb<255, 68, 0>>>>,
                     Mix<Sin<Int<50>>, Black,
                         Mix<TwistAngle<>,
                             RgbArg<STAB_COLOR_ARG, Rgb<255, 68, 0>>,
                             RotateColorsX<
                                 Int<3000>,
                                 RgbArg<STAB_COLOR_ARG, Rgb<255, 68, 0>>>>>,
                     Mix<Int<4096>, Black,
                         Mix<TwistAngle<>,
                             RgbArg<STAB_COLOR_ARG, Rgb<255, 68, 0>>,
                             RotateColorsX<
                                 Int<3000>,
                                 RgbArg<STAB_COLOR_ARG, Rgb<255, 68, 0>>>>>>,
                 SmoothStep<Scale<TwistAngle<>, IntArg<MELT_SIZE_ARG, 28000>,
                                  Int<30000>>,
                            Int<3000>>>,
             TrConcat<
                 TrExtend<4000, TrWipeIn<200>>,
                 AlphaL<
                     HumpFlicker<
                         Mix<TwistAngle<>,
                             RgbArg<STAB_COLOR_ARG, Rgb<255, 68, 0>>,
                             RotateColorsX<
                                 Int<3000>,
                                 RgbArg<STAB_COLOR_ARG, Rgb<255, 68, 0>>>>,
                         RotateColorsX<
                             Int<3000>,
                             Mix<TwistAngle<>,
                                 RgbArg<STAB_COLOR_ARG, Rgb<255, 68, 0>>,
                                 RotateColorsX<
                                     Int<3000>,
                                     RgbArg<STAB_COLOR_ARG, Rgb<255, 68, 0>>>>>,
                         100>,
                     SmoothStep<Scale<TwistAngle<>,
                                      IntArg<MELT_SIZE_ARG, 28000>, Int<30000>>,
                                Int<3000>>>,
                 TrFade<4000>>,
             TrWipe<200>, SaberBase::LOCKUP_MELT, Int<1>>,
         InOutTrL<
             TrConcat<TrJoin<TrDelayX<Mult<IgnitionTime<300>, Int<16384>>>,
                             TrWipeX<Mult<IgnitionTime<300>, Int<16384>>>>,
                      Mix<SmoothStep<NoisySoundLevel, Int<-1>>, Black,
                          RgbArg<IGNITION_COLOR_ARG, Rgb<255, 255, 255>>>,
                      TrWipeX<Mult<IgnitionTime<300>, Int<16384>>>>,
             TrConcat<TrJoin<TrDelayX<Mult<RetractionTime<0>, Int<16384>>>,
                             TrWipeInX<Mult<RetractionTime<0>, Int<16384>>>>,
                      Mix<SmoothStep<NoisySoundLevel, Int<-1>>, Black,
                          RgbArg<RETRACTION_COLOR_ARG, Rgb<255, 255, 255>>>,
                      TrWipeInX<Mult<RetractionTime<0>, Int<16384>>>>,
             Black>,
         TransitionEffectL<
             TrConcat<TrInstant,
                      AlphaL<White, SmoothStep<IntArg<PREON_SIZE_ARG, 2000>,
                                               Int<-4000>>>,
                      TrFadeX<Mult<
                          Scale<IsLessThan<WavLen<EFFECT_POSTOFF>, Int<200>>,
                                WavLen<EFFECT_POSTOFF>, Int<4000>>,
                          Int<10923>>>,
                      AlphaL<Orange, SmoothStep<IntArg<PREON_SIZE_ARG, 2000>,
                                                Int<-4000>>>,
                      TrFadeX<Mult<
                          Scale<IsLessThan<WavLen<EFFECT_POSTOFF>, Int<200>>,
                                WavLen<EFFECT_POSTOFF>, Int<4000>>,
                          Int<10923>>>,
                      AlphaL<Red, SmoothStep<IntArg<PREON_SIZE_ARG, 2000>,
                                             Int<-2000>>>,
                      TrFadeX<Mult<
                          Scale<IsLessThan<WavLen<EFFECT_POSTOFF>, Int<200>>,
                                WavLen<EFFECT_POSTOFF>, Int<4000>>,
                          Int<10923>>>>,
             EFFECT_POSTOFF>>>(),
     StylePtr<HEART>() ""},

};

BladeConfig blades[] = {
    {0,
     WS281XBladePtr<144, bladePin, Color8::GRB,
                    PowerPINS<bladePowerPin2, bladePowerPin3>>(),
     CONFIGARRAY(presets)},
};
#endif

#ifdef CONFIG_BUTTONS
Button PowerButton(BUTTON_POWER, powerButtonPin, "pow");
Button AuxButton(BUTTON_AUX, auxPin, "aux");
#endif
#ifdef CONFIG_STYLES

/*--------------------------------- HEART---------------------------------*/
using HEART =
    /*copyright Fett263 Simple (Accent LED / PCB) OS7 Style
    https://fett263.com/fett263-proffieOS7-style-library.html#Simple
    OS7.12 v1.017-p
    Single Style
    Base Style: Static

    Off Behavior: Off [Color: OffColorArg]


    --Effects Included--
    Ignition Effect: Standard Ignition [Color: IgnitionColorArg]
    Retraction Effect: Standard Retraction [Color: RetractionColorArg]
    */
    Layers<
        RgbArg<BASE_COLOR_ARG, Rgb<255, 255, 255>>,
        InOutTrL<TrWipeX<BendTimePowInvX<
                     IgnitionTime<100>,
                     Mult<IntArg<IGNITION_OPTION2_ARG, 10992>, Int<98304>>>>,
                 TrWipeInX<BendTimePowInvX<
                     RetractionTime<100>,
                     Mult<IntArg<RETRACTION_OPTION2_ARG, 10992>, Int<98304>>>>,
                 Black>>;
/*
 add to preset as StylePtr<HEART>()
*/

#endif

/* Generated with Fett263 Config Helper v3.10 */
