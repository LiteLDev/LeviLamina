// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "PredictableProjectile.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PrimedTnt : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PRIMEDTNT
public:
    class PrimedTnt& operator=(class PrimedTnt const&) = delete;
    PrimedTnt(class PrimedTnt const&) = delete;
    PrimedTnt() = delete;
#endif

public:
    /*0*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const&);
    /*1*/ virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const&);
    /*2*/ virtual ~PrimedTnt();
    /*3*/ virtual enum ActorType getOwnerEntityType();
    /*4*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*5*/ virtual void __unk_vfn_0();
    /*6*/ virtual float getInterpolatedHeadRot(float) const;
    /*7*/ virtual float getInterpolatedBodyYaw(float) const;
    /*8*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*9*/ virtual void __unk_vfn_1();
    /*10*/ virtual void teleportTo(class Vec3 const&, bool, int, int);
    /*11*/ virtual void normalTick();
    /*12*/ virtual float getRidingHeight();
    /*13*/ virtual void __unk_vfn_2();
    /*14*/ virtual void __unk_vfn_3();
    /*15*/ virtual float getCameraOffset() const;
    /*16*/ virtual float getShadowHeightOffs();
    /*17*/ virtual float getShadowRadius() const;
    /*18*/ virtual void __unk_vfn_4();
    /*19*/ virtual void __unk_vfn_5();
    /*20*/ virtual void playerTouch(class Player&);
    /*21*/ virtual bool isPickable();
    /*22*/ virtual void __unk_vfn_6();
    /*23*/ virtual bool isSleeping() const;
    /*24*/ virtual void setSleeping(bool);
    /*25*/ virtual void __unk_vfn_7();
    /*26*/ virtual bool isBlocking() const;
    /*27*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*28*/ virtual void __unk_vfn_8();
    /*29*/ virtual bool isSurfaceMob() const;
    /*30*/ virtual void __unk_vfn_9();
    /*31*/ virtual void __unk_vfn_10();
    /*32*/ virtual void __unk_vfn_11();
    /*33*/ virtual class Actor* findAttackTarget();
    /*34*/ virtual bool isValidTarget(class Actor*) const;
    /*35*/ virtual void adjustDamageAmount(int&) const;
    /*36*/ virtual void onTame();
    /*37*/ virtual void onFailedTame();
    /*38*/ virtual bool isJumping() const;
    /*39*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*40*/ virtual void animateHurt();
    /*41*/ virtual void onBounceStarted(class BlockPos const&, class Block const&);
    /*42*/ virtual float getPickRadius();
    /*43*/ virtual void awardKillScore(class Actor&, int);
    /*44*/ virtual enum ArmorMaterialType getArmorMaterialTypeInSlot(enum ArmorSlot) const;
    /*45*/ virtual enum ArmorTextureType getArmorMaterialTextureTypeInSlot(enum ArmorSlot) const;
    /*46*/ virtual float getArmorColorInSlot(enum ArmorSlot, int) const;
    /*47*/ virtual void setEquippedSlot(enum EquipmentSlot, class ItemStack const&);
    /*48*/ virtual class HashedString const& queryEntityRenderer() const;
    /*49*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*50*/ virtual bool canFreeze() const;
    /*51*/ virtual int getPortalWaitTime() const;
    /*52*/ virtual bool canChangeDimensions() const;
    /*53*/ virtual void __unk_vfn_12();
    /*54*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*55*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*56*/ virtual bool canBePulledIntoVehicle() const;
    /*57*/ virtual bool inCaravan() const;
    /*58*/ virtual void __unk_vfn_13();
    /*59*/ virtual bool canSynchronizeNewEntity() const;
    /*60*/ virtual void buildDebugInfo(std::string&) const;
    /*61*/ virtual int getDeathTime() const;
    /*62*/ virtual void swing();
    /*63*/ virtual void __unk_vfn_14();
    /*64*/ virtual void __unk_vfn_15();
    /*65*/ virtual float getYHeadRot() const;
    /*66*/ virtual bool isWorldBuilder() const;
    /*67*/ virtual void __unk_vfn_16();
    /*68*/ virtual bool isAdventure() const;
    /*69*/ virtual bool canDestroyBlock(class Block const&) const;
    /*70*/ virtual void setAuxValue(int);
    /*71*/ virtual void stopSpinAttack();
    /*72*/ virtual void __unk_vfn_17();
    /*73*/ virtual void __unk_vfn_18();
    /*74*/ virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /*75*/ virtual void __unk_vfn_19();
    /*76*/ virtual bool _hurt(class ActorDamageSource const&, int, bool, bool);
    /*77*/ virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /*78*/ virtual void addAdditionalSaveData(class CompoundTag&);
    /*79*/ virtual void __unk_vfn_20();
    /*80*/ virtual void _onSizeUpdated();
    /*81*/ virtual void __unk_vfn_21();
    MCAPI PrimedTnt(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class OwnerPtrT<struct EntityRefTraits> const&);

protected:

private:

};