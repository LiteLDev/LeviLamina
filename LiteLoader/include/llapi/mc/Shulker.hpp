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
     * @vftbl 15
     * @symbol ?_doInitialMove\@Shulker\@\@UEAAXXZ
     */
    virtual void _doInitialMove();
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 52
     * @symbol ?isInWall\@Shulker\@\@UEBA_NXZ
     */
    virtual bool isInWall() const;
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55();
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl 69
     * @symbol ?getShadowRadius\@Shulker\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77();
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96();
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl 100
     * @symbol ?canAttack\@Shulker\@\@UEBA_NPEAVActor\@\@_N\@Z
     */
    virtual bool canAttack(class Actor *, bool) const;
    /**
     * @vftbl 117
     * @symbol ?shouldRender\@Shulker\@\@UEBA_NXZ
     */
    virtual bool shouldRender() const;
    /**
     * @vftbl 120
     * @symbol ?isInvulnerableTo\@Shulker\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl 128
     * @symbol ?getPickRadius\@Shulker\@\@UEAAMXZ
     */
    virtual float getPickRadius();
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164();
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178();
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202();
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203();
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl 237
     * @symbol ?updateEntitySpecificMolangVariables\@Shulker\@\@MEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239();
    /**
     * @vftbl 240
     * @symbol ?_hurt\@Shulker\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@Shulker\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@Shulker\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247();
    /**
     * @vftbl 252
     * @symbol ?_onSizeUpdated\@Shulker\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253();
    /**
     * @vftbl 268
     * @symbol ?checkSpawnRules\@Shulker\@\@UEAA_N_N\@Z
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @vftbl 276
     * @symbol __unk_vfn_276
     */
    virtual void __unk_vfn_276();
    /**
     * @vftbl 277
     * @symbol ?getMaxHeadXRot\@Shulker\@\@UEAAMXZ
     */
    virtual float getMaxHeadXRot();
    /**
     * @vftbl 280
     * @symbol __unk_vfn_280
     */
    virtual void __unk_vfn_280();
    /**
     * @vftbl 285
     * @symbol ?getArmorValue\@Shulker\@\@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl 317
     * @symbol ?initBodyControl\@Shulker\@\@UEAA?AV?$unique_ptr\@VBodyControl\@\@U?$default_delete\@VBodyControl\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class BodyControl> initBodyControl();
    /**
     * @vftbl 323
     * @symbol __unk_vfn_323
     */
    virtual void __unk_vfn_323();
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
