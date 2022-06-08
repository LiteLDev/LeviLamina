// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Wolf : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WOLF
public:
    class Wolf& operator=(class Wolf const &) = delete;
    Wolf(class Wolf const &) = delete;
    Wolf() = delete;
#endif

public:
    /*14*/ virtual ~Wolf();
    /*40*/ virtual void __unk_vfn_40();
    /*48*/ virtual void normalTick();
    /*54*/ virtual void addPassenger(class Actor &);
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*82*/ virtual void __unk_vfn_82();
    /*88*/ virtual void __unk_vfn_88();
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*119*/ virtual void setSitting(bool);
    /*133*/ virtual enum LevelSoundEvent getAmbientSound() const;
    /*141*/ virtual void handleEntityEvent(enum ActorEvent, int);
    /*167*/ virtual bool load(class CompoundTag const &, class DataLoadHelper &);
    /*181*/ virtual void __unk_vfn_181();
    /*190*/ virtual void onSynchedDataUpdate(int);
    /*195*/ virtual void __unk_vfn_195();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*261*/ virtual void __unk_vfn_261();
    /*262*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*269*/ virtual void __unk_vfn_269();
    /*278*/ virtual void __unk_vfn_278();
    /*280*/ virtual void __unk_vfn_280();
    /*303*/ virtual void __unk_vfn_303();
    /*304*/ virtual void __unk_vfn_304();
    /*307*/ virtual void __unk_vfn_307();
    /*309*/ virtual bool isAlliedTo(class Mob *);
    /*311*/ virtual void __unk_vfn_311();
    /*321*/ virtual void __unk_vfn_321();
    /*338*/ virtual void onBorn(class Actor &, class Actor &);
    /*345*/ virtual void __unk_vfn_345();
    /*354*/ virtual void newServerAiStep();
    /*359*/ virtual void __unk_vfn_359();
    MCAPI Wolf(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI float getHeadRollAngle(float);
    MCAPI float getShakeAnim() const;
    MCAPI float getTailAngle();
    MCAPI bool isShaking() const;

protected:

private:
    MCAPI void _avoidSnowBury();

};