// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Minecart.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class MinecartCommandBlock : public Minecart {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECARTCOMMANDBLOCK
public:
    class MinecartCommandBlock& operator=(class MinecartCommandBlock const&) = delete;
    MinecartCommandBlock(class MinecartCommandBlock const&) = delete;
    MinecartCommandBlock() = delete;
#endif

public:
    /*0*/ virtual void initializeComponents(enum Actor::InitializationMethod, class VariantParameterList const&);
    /*1*/ virtual ~MinecartCommandBlock();
    /*2*/ virtual bool isRuntimePredictedMovementEnabled() const;
    /*3*/ virtual void __unk_vfn_0();
    /*4*/ virtual float getInterpolatedHeadRot(float) const;
    /*5*/ virtual class Vec3 getInterpolatedRidingOffset(float) const;
    /*6*/ virtual void __unk_vfn_1();
    /*7*/ virtual float getRidingHeight();
    /*8*/ virtual bool canShowNameTag() const;
    /*9*/ virtual void __unk_vfn_2();
    /*10*/ virtual void __unk_vfn_3();
    /*11*/ virtual float getCameraOffset() const;
    /*12*/ virtual float getShadowHeightOffs();
    /*13*/ virtual float getShadowRadius() const;
    /*14*/ virtual void __unk_vfn_4();
    /*15*/ virtual void __unk_vfn_5();
    /*16*/ virtual void playerTouch(class Player&);
    /*17*/ virtual bool isPickable();
    /*18*/ virtual void __unk_vfn_6();
    /*19*/ virtual bool isSleeping() const;
    /*20*/ virtual void setSleeping(bool);
    /*21*/ virtual void __unk_vfn_7();
    /*22*/ virtual bool isBlocking() const;
    /*23*/ virtual bool isDamageBlocked(class ActorDamageSource const&) const;
    /*24*/ virtual void __unk_vfn_8();
    /*25*/ virtual bool isSurfaceMob() const;
    /*26*/ virtual void __unk_vfn_9();
    /*27*/ virtual void __unk_vfn_10();
    /*28*/ virtual void __unk_vfn_11();
    /*29*/ virtual class Actor* findAttackTarget();
    /*30*/ virtual bool isValidTarget(class Actor*) const;
    /*31*/ virtual void adjustDamageAmount(int&) const;
    /*32*/ virtual void onTame();
    /*33*/ virtual void onFailedTame();
    /*34*/ virtual bool isJumping() const;
    /*35*/ virtual void vehicleLanded(class Vec3 const&, class Vec3 const&);
    /*36*/ virtual bool isInvulnerableTo(class ActorDamageSource const&) const;
    /*37*/ virtual void animateHurt();
    /*38*/ virtual float getPickRadius();
    /*39*/ virtual void awardKillScore(class Actor&, int);
    /*40*/ virtual enum ArmorMaterialType getArmorMaterialTypeInSlot(enum ArmorSlot) const;
    /*41*/ virtual enum ArmorTextureType getArmorMaterialTextureTypeInSlot(enum ArmorSlot) const;
    /*42*/ virtual float getArmorColorInSlot(enum ArmorSlot, int) const;
    /*43*/ virtual void setEquippedSlot(enum EquipmentSlot, class ItemStack const&);
    /*44*/ virtual class HashedString const& queryEntityRenderer() const;
    /*45*/ virtual struct ActorUniqueID getSourceUniqueID() const;
    /*46*/ virtual bool canFreeze() const;
    /*47*/ virtual int getPortalWaitTime() const;
    /*48*/ virtual bool canChangeDimensions() const;
    /*49*/ virtual void __unk_vfn_12();
    /*50*/ virtual struct ActorUniqueID getControllingPlayer() const;
    /*51*/ virtual bool canPickupItem(class ItemStack const&) const;
    /*52*/ virtual bool canBePulledIntoVehicle() const;
    /*53*/ virtual bool inCaravan() const;
    /*54*/ virtual void __unk_vfn_13();
    /*55*/ virtual bool canSynchronizeNewEntity() const;
    /*56*/ virtual void buildDebugInfo(std::string&) const;
    /*57*/ virtual int getDeathTime() const;
    /*58*/ virtual void swing();
    /*59*/ virtual void __unk_vfn_14();
    /*60*/ virtual void __unk_vfn_15();
    /*61*/ virtual float getYHeadRot() const;
    /*62*/ virtual bool isWorldBuilder() const;
    /*63*/ virtual void __unk_vfn_16();
    /*64*/ virtual bool isAdventure() const;
    /*65*/ virtual bool canDestroyBlock(class Block const&) const;
    /*66*/ virtual void setAuxValue(int);
    /*67*/ virtual void stopSpinAttack();
    /*68*/ virtual void __unk_vfn_17();
    /*69*/ virtual void __unk_vfn_18();
    /*70*/ virtual void updateEntitySpecificMolangVariables(class RenderParams&);
    /*71*/ virtual void __unk_vfn_19();
    /*72*/ virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&);
    /*73*/ virtual void addAdditionalSaveData(class CompoundTag&);
    /*74*/ virtual void __unk_vfn_20();
    /*75*/ virtual void __unk_vfn_21();
    /*76*/ virtual void __unk_vfn_22();
    /*77*/ virtual class Block const* getDefaultDisplayBlock() const;
    /*78*/ virtual void __unk_vfn_23();
    /*79*/ virtual int getDefaultDisplayOffset() const;
    /*80*/ virtual void applyNaturalSlowdown(class BlockSource&);
    /*81*/ virtual void _lazyInitDisplayBlock();
    /*
    inline enum MinecartType getType(){
        enum MinecartType (MinecartCommandBlock::*rv)();
        *((void**)&rv) = dlsym("?getType@MinecartCommandBlock@@UEAA?AW4MinecartType@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI MinecartCommandBlock(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class OwnerPtrT<struct EntityRefTraits> const&);

protected:

private:

};