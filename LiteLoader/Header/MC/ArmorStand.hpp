// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ArmorStand : public Mob {

#define AFTER_EXTRA
// Add Member There
public:
struct Pose {
    Pose() = delete;
    Pose(Pose const&) = delete;
    Pose(Pose const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORSTAND
public:
    class ArmorStand& operator=(class ArmorStand const &) = delete;
    ArmorStand(class ArmorStand const &) = delete;
    ArmorStand() = delete;
#endif

public:
    /*14*/ virtual ~ArmorStand();
    /*40*/ virtual void __unk_vfn_40();
    /*48*/ virtual void normalTick();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*80*/ virtual float getShadowRadius() const;
    /*82*/ virtual void __unk_vfn_82();
    /*88*/ virtual void __unk_vfn_88();
    /*94*/ virtual bool isPickable();
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*134*/ virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /*181*/ virtual void __unk_vfn_181();
    /*195*/ virtual void __unk_vfn_195();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*236*/ virtual bool getInteraction(class Player &, class ActorInteraction &, class Vec3 const &);
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*251*/ virtual void die(class ActorDamageSource const &);
    /*259*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*261*/ virtual void __unk_vfn_261();
    /*262*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*265*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*266*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*269*/ virtual void __unk_vfn_269();
    /*278*/ virtual void __unk_vfn_278();
    /*296*/ virtual void pushActors();
    /*307*/ virtual void __unk_vfn_307();
    /*311*/ virtual void __unk_vfn_311();
    /*345*/ virtual void __unk_vfn_345();
    /*359*/ virtual void __unk_vfn_359();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARMORSTAND
public:
    MCVAPI bool interactPreventDefault();
#endif
    MCAPI ArmorStand(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI int getNumSlotsFilled() const;
    MCAPI void setPoseIndex(int);


//private:
    MCAPI void _causeDamage(float);
    MCAPI void _destroyWithEffects(class Vec3 const &);
    MCAPI void _dropHeldItems();
    MCAPI void _dropHeldItemsAndResource();
    MCAPI void _dropItem(class ItemStack const &);
    MCAPI bool _trySwapItem(class Player &, enum EquipmentSlot);
    MCAPI static struct ArmorStand::Pose const POSE_ATHENA;
    MCAPI static struct ArmorStand::Pose const POSE_BRANDISH;
    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_A;
    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_B;
    MCAPI static struct ArmorStand::Pose const POSE_DEFAULT;
    MCAPI static struct ArmorStand::Pose const POSE_ENTERTAIN;
    MCAPI static struct ArmorStand::Pose const POSE_HERO;
    MCAPI static struct ArmorStand::Pose const POSE_HONOR;
    MCAPI static struct ArmorStand::Pose const POSE_RIPOSTE;
    MCAPI static struct ArmorStand::Pose const POSE_SALUTE;
    MCAPI static struct ArmorStand::Pose const POSE_SOLEMN;
    MCAPI static struct ArmorStand::Pose const POSE_ZERO_ROTATION;
    MCAPI static struct ArmorStand::Pose const POSE_ZOMBIE;
    MCAPI static struct ArmorStand::Pose const * STAND_POSES[];

};