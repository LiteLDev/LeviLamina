// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class DebugInfoComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DEBUGINFOCOMPONENT
public:
    class DebugInfoComponent& operator=(class DebugInfoComponent const&) = delete;
    DebugInfoComponent(class DebugInfoComponent const&) = delete;
    DebugInfoComponent() = delete;
#endif

public:
    /*0*/ virtual ~DebugInfoComponent();
    /*1*/ virtual void __unk_vfn_0();
    /*2*/ virtual void __unk_vfn_1();
    /*3*/ virtual void __unk_vfn_2();
    /*4*/ virtual void __unk_vfn_3();
    /*5*/ virtual void __unk_vfn_4();
    /*6*/ virtual void __unk_vfn_5();
    /*7*/ virtual void __unk_vfn_6();
    /*8*/ virtual void __unk_vfn_7();
    /*9*/ virtual void __unk_vfn_8();
    /*10*/ virtual enum EventResult onActorDefinitionEventTriggered(struct ActorDefinitionEvent const&);
    /*11*/ virtual void __unk_vfn_9();
    /*12*/ virtual void __unk_vfn_10();
    /*13*/ virtual void __unk_vfn_11();
    /*14*/ virtual void __unk_vfn_12();
    /*15*/ virtual void __unk_vfn_13();
    /*16*/ virtual void __unk_vfn_14();
    /*17*/ virtual void __unk_vfn_15();
    /*18*/ virtual void __unk_vfn_16();
    /*19*/ virtual void __unk_vfn_17();
    /*20*/ virtual void __unk_vfn_18();
    /*21*/ virtual void __unk_vfn_19();
    /*22*/ virtual void __unk_vfn_20();
    /*23*/ virtual void __unk_vfn_21();
    /*24*/ virtual void __unk_vfn_22();
    /*25*/ virtual void __unk_vfn_23();
    /*26*/ virtual void __unk_vfn_24();
    /*27*/ virtual void __unk_vfn_25();
    /*28*/ virtual void __unk_vfn_26();
    /*29*/ virtual void __unk_vfn_27();
    /*30*/ virtual void __unk_vfn_28();
    /*31*/ virtual void __unk_vfn_29();
    MCAPI DebugInfoComponent(class DebugInfoComponent&&);
    MCAPI void addListener(class HashedString const&, class NetworkIdentifier, unsigned char);
    MCAPI bool listenersEmpty() const;
    MCAPI class DebugInfoComponent& operator=(class DebugInfoComponent&&);
    MCAPI void removeListener(class HashedString const&, class NetworkIdentifier, unsigned char);

protected:

private:

};