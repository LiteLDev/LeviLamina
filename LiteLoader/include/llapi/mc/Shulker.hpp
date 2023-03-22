/**
 * @file  Shulker.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Shulker.
 *
 */
class Shulker : public Mob {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKER
public:
    class Shulker& operator=(class Shulker const &) = delete;
    Shulker(class Shulker const &) = delete;
    Shulker() = delete;
#endif

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@Shulker\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 20
     * @symbol ?setPos\@Shulker\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void setPos(class Vec3 const &);
    /**
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl 59
     * @symbol ?isInWall\@Shulker\@\@UEBA_NXZ
     */
    virtual bool isInWall() const;
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 69
     * @symbol __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @vftbl 80
     * @symbol ?getShadowRadius\@Shulker\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 82
     * @symbol __unk_vfn_82
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl 85
     * @symbol __unk_vfn_85
     */
    virtual void __unk_vfn_85();
    /**
     * @vftbl 88
     * @symbol __unk_vfn_88
     */
    virtual void __unk_vfn_88();
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl 99
     * @symbol __unk_vfn_99
     */
    virtual void __unk_vfn_99();
    /**
     * @vftbl 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl 108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl 109
     * @symbol __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl 111
     * @symbol __unk_vfn_111
     */
    virtual void __unk_vfn_111();
    /**
     * @vftbl 113
     * @symbol ?canAttack\@Shulker\@\@UEBA_NPEAVActor\@\@_N\@Z
     */
    virtual bool canAttack(class Actor *, bool) const;
    /**
     * @vftbl 131
     * @symbol ?shouldRender\@Shulker\@\@UEBA_NXZ
     */
    virtual bool shouldRender() const;
    /**
     * @vftbl 134
     * @symbol ?isInvulnerableTo\@Shulker\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl 142
     * @symbol ?getPickRadius\@Shulker\@\@UEAAMXZ
     */
    virtual float getPickRadius();
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 192
     * @symbol __unk_vfn_192
     */
    virtual void __unk_vfn_192();
    /**
     * @vftbl 217
     * @symbol __unk_vfn_217
     */
    virtual void __unk_vfn_217();
    /**
     * @vftbl 218
     * @symbol __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl 240
     * @symbol __unk_vfn_240
     */
    virtual void __unk_vfn_240();
    /**
     * @vftbl 243
     * @symbol __unk_vfn_243
     */
    virtual void __unk_vfn_243();
    /**
     * @vftbl 258
     * @symbol ?updateEntitySpecificMolangVariables\@Shulker\@\@MEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 261
     * @symbol ?_hurt\@Shulker\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 264
     * @symbol ?readAdditionalSaveData\@Shulker\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 265
     * @symbol ?addAdditionalSaveData\@Shulker\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 268
     * @symbol __unk_vfn_268
     */
    virtual void __unk_vfn_268();
    /**
     * @vftbl 274
     * @symbol ?_onSizeUpdated\@Shulker\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl 275
     * @symbol __unk_vfn_275
     */
    virtual void __unk_vfn_275();
    /**
     * @vftbl 286
     * @symbol ?travel\@Shulker\@\@UEAAXMMM_N\@Z
     */
    virtual void travel(float, float, float, bool);
    /**
     * @vftbl 288
     * @symbol ?aiStep\@Shulker\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl 293
     * @symbol ?checkSpawnRules\@Shulker\@\@UEAA_N_N\@Z
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @vftbl 301
     * @symbol __unk_vfn_301
     */
    virtual void __unk_vfn_301();
    /**
     * @vftbl 302
     * @symbol ?getMaxHeadXRot\@Shulker\@\@UEAAMXZ
     */
    virtual float getMaxHeadXRot();
    /**
     * @vftbl 305
     * @symbol __unk_vfn_305
     */
    virtual void __unk_vfn_305();
    /**
     * @vftbl 310
     * @symbol ?getArmorValue\@Shulker\@\@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl 343
     * @symbol ?initBodyControl\@Shulker\@\@UEAA?AV?$unique_ptr\@VBodyControl\@\@U?$default_delete\@VBodyControl\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class BodyControl> initBodyControl();
    /**
     * @vftbl 351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHULKER
    /**
     * @symbol ?breaksFallingBlocks\@Shulker\@\@UEBA_NXZ
     */
    MCVAPI bool breaksFallingBlocks() const;
    /**
     * @symbol ?isLeashableType\@Shulker\@\@UEAA_NXZ
     */
    MCVAPI bool isLeashableType();
#endif
    /**
     * @symbol ??0Shulker\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Shulker(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?postNormalTick\@Shulker\@\@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @symbol ?COVERED_ARMOR_MODIFIER\@Shulker\@\@2V?$shared_ptr\@VAttributeModifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> COVERED_ARMOR_MODIFIER;
    /**
     * @symbol ?COVERED_ARMOR_MODIFIER_UUID\@Shulker\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const COVERED_ARMOR_MODIFIER_UUID;
    /**
     * @symbol ?postSetPosSetShulkerAttachPosAndPeekAmount\@Shulker\@\@SAXVSynchedActorDataWriter\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void postSetPosSetShulkerAttachPosAndPeekAmount(class SynchedActorDataWriter, class BlockPos const &);
    /**
     * @symbol ?setShulkerAttachPos\@Shulker\@\@SAXVSynchedActorDataWriter\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void setShulkerAttachPos(class SynchedActorDataWriter, class BlockPos const &);

//protected:
    /**
     * @symbol ?_canOpenLidAt\@Shulker\@\@IEBA_NVBlockPos\@\@E\@Z
     */
    MCAPI bool _canOpenLidAt(class BlockPos, unsigned char) const;
    /**
     * @symbol ?_setPeekAmount\@Shulker\@\@KAXVSynchedActorDataWriter\@\@H\@Z
     */
    MCAPI static void _setPeekAmount(class SynchedActorDataWriter, int);

//private:
    /**
     * @symbol ?_calculateBB\@Shulker\@\@AEAAXXZ
     */
    MCAPI void _calculateBB();
    /**
     * @symbol ?_isPosOccupiedByOtherShulker\@Shulker\@\@AEBA_NVBlockPos\@\@\@Z
     */
    MCAPI bool _isPosOccupiedByOtherShulker(class BlockPos) const;
    /**
     * @symbol ?_isValidAttach\@Shulker\@\@AEAA_NVBlockPos\@\@E\@Z
     */
    MCAPI bool _isValidAttach(class BlockPos, unsigned char);
    /**
     * @symbol ?_peekAmountTick\@Shulker\@\@AEAAXXZ
     */
    MCAPI void _peekAmountTick();
    /**
     * @symbol ?_setAttachFace\@Shulker\@\@AEAAXE\@Z
     */
    MCAPI void _setAttachFace(unsigned char);
    /**
     * @symbol ?_tryAttachingToNeighbouringFaces\@Shulker\@\@AEAA_NVBlockPos\@\@\@Z
     */
    MCAPI bool _tryAttachingToNeighbouringFaces(class BlockPos);
    /**
     * @symbol ?_trySpawnShulker\@Shulker\@\@AEAAXXZ
     */
    MCAPI void _trySpawnShulker();
    /**
     * @symbol ?_tryTeleportSomewhere\@Shulker\@\@AEAA_NXZ
     */
    MCAPI bool _tryTeleportSomewhere();

protected:

private:

};
