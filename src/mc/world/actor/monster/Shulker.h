#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class Shulker : public ::Mob {

public:
    // prevent constructor by default
    Shulker& operator=(Shulker const&) = delete;
    Shulker(Shulker const&)            = delete;
    Shulker()                          = delete;

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@Shulker\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 15
     * @symbol ?_doInitialMove\@Shulker\@\@UEAAXXZ
     */
    virtual void _doInitialMove(); // NOLINT
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 52
     * @symbol ?isInWall\@Shulker\@\@UEBA_NXZ
     */
    virtual bool isInWall() const; // NOLINT
    /**
     * @vftbl 55
     * @symbol __unk_vfn_55
     */
    virtual void __unk_vfn_55(); // NOLINT
    /**
     * @vftbl 62
     * @symbol __unk_vfn_62
     */
    virtual void __unk_vfn_62(); // NOLINT
    /**
     * @vftbl 69
     * @symbol ?getShadowRadius\@Shulker\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const; // NOLINT
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71(); // NOLINT
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77(); // NOLINT
    /**
     * @vftbl 83
     * @symbol __unk_vfn_83
     */
    virtual void __unk_vfn_83(); // NOLINT
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86(); // NOLINT
    /**
     * @vftbl 93
     * @symbol __unk_vfn_93
     */
    virtual void __unk_vfn_93(); // NOLINT
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95(); // NOLINT
    /**
     * @vftbl 96
     * @symbol __unk_vfn_96
     */
    virtual void __unk_vfn_96(); // NOLINT
    /**
     * @vftbl 98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98(); // NOLINT
    /**
     * @vftbl 100
     * @symbol ?canAttack\@Shulker\@\@UEBA_NPEAVActor\@\@_N\@Z
     */
    virtual bool canAttack(class Actor*, bool) const; // NOLINT
    /**
     * @vftbl 117
     * @symbol ?shouldRender\@Shulker\@\@UEBA_NXZ
     */
    virtual bool shouldRender() const; // NOLINT
    /**
     * @vftbl 120
     * @symbol ?isInvulnerableTo\@Shulker\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const; // NOLINT
    /**
     * @vftbl 128
     * @symbol ?getPickRadius\@Shulker\@\@UEAAMXZ
     */
    virtual float getPickRadius(); // NOLINT
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164(); // NOLINT
    /**
     * @vftbl 178
     * @symbol __unk_vfn_178
     */
    virtual void __unk_vfn_178(); // NOLINT
    /**
     * @vftbl 202
     * @symbol __unk_vfn_202
     */
    virtual void __unk_vfn_202(); // NOLINT
    /**
     * @vftbl 203
     * @symbol __unk_vfn_203
     */
    virtual void __unk_vfn_203(); // NOLINT
    /**
     * @vftbl 219
     * @symbol __unk_vfn_219
     */
    virtual void __unk_vfn_219(); // NOLINT
    /**
     * @vftbl 222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222(); // NOLINT
    /**
     * @vftbl 237
     * @symbol ?updateEntitySpecificMolangVariables\@Shulker\@\@MEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams&); // NOLINT
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239(); // NOLINT
    /**
     * @vftbl 240
     * @symbol ?_hurt\@Shulker\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool); // NOLINT
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@Shulker\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@Shulker\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247(); // NOLINT
    /**
     * @vftbl 252
     * @symbol ?_onSizeUpdated\@Shulker\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated(); // NOLINT
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253(); // NOLINT
    /**
     * @vftbl 268
     * @symbol ?checkSpawnRules\@Shulker\@\@UEAA_N_N\@Z
     */
    virtual bool checkSpawnRules(bool); // NOLINT
    /**
     * @vftbl 276
     * @symbol __unk_vfn_276
     */
    virtual void __unk_vfn_276(); // NOLINT
    /**
     * @vftbl 277
     * @symbol ?getMaxHeadXRot\@Shulker\@\@UEAAMXZ
     */
    virtual float getMaxHeadXRot(); // NOLINT
    /**
     * @vftbl 280
     * @symbol __unk_vfn_280
     */
    virtual void __unk_vfn_280(); // NOLINT
    /**
     * @vftbl 285
     * @symbol ?getArmorValue\@Shulker\@\@UEBAHXZ
     */
    virtual int getArmorValue() const; // NOLINT
    /**
     * @vftbl 317
     * @symbol
     * ?initBodyControl\@Shulker\@\@UEAA?AV?$unique_ptr\@VBodyControl\@\@U?$default_delete\@VBodyControl\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class BodyControl> initBodyControl(); // NOLINT
    /**
     * @vftbl 323
     * @symbol __unk_vfn_323
     */
    virtual void __unk_vfn_323(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHULKER
    /**
     * @symbol ?breaksFallingBlocks\@Shulker\@\@UEBA_NXZ
     */
    MCVAPI bool breaksFallingBlocks() const; // NOLINT
    /**
     * @symbol ?isLeashableType\@Shulker\@\@UEAA_NXZ
     */
    MCVAPI bool isLeashableType(); // NOLINT
#endif
    /**
     * @symbol ??0Shulker\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Shulker(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&); // NOLINT
    /**
     * @symbol ?postNormalTick\@Shulker\@\@QEAAXXZ
     */
    MCAPI void postNormalTick(); // NOLINT
    /**
     * @symbol ?postSetPosSetShulkerAttachPosAndPeekAmount\@Shulker\@\@SAXVSynchedActorDataWriter\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void
    postSetPosSetShulkerAttachPosAndPeekAmount(class SynchedActorDataWriter, class BlockPos const&); // NOLINT
    /**
     * @symbol ?setShulkerAttachPos\@Shulker\@\@SAXVSynchedActorDataWriter\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void setShulkerAttachPos(class SynchedActorDataWriter, class BlockPos const&); // NOLINT
    /**
     * @symbol ?COVERED_ARMOR_MODIFIER\@Shulker\@\@2V?$shared_ptr\@VAttributeModifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> COVERED_ARMOR_MODIFIER; // NOLINT
    /**
     * @symbol ?COVERED_ARMOR_MODIFIER_UUID\@Shulker\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const COVERED_ARMOR_MODIFIER_UUID; // NOLINT

    // protected:
    /**
     * @symbol ?_canOpenLidAt\@Shulker\@\@IEBA_NVBlockPos\@\@E\@Z
     */
    MCAPI bool _canOpenLidAt(class BlockPos, unsigned char) const; // NOLINT
    /**
     * @symbol ?_setPeekAmount\@Shulker\@\@KAXVSynchedActorDataWriter\@\@H\@Z
     */
    MCAPI static void _setPeekAmount(class SynchedActorDataWriter, int); // NOLINT

    // private:
    /**
     * @symbol ?_calculateBB\@Shulker\@\@AEAAXXZ
     */
    MCAPI void _calculateBB(); // NOLINT
    /**
     * @symbol ?_isPosOccupiedByOtherShulker\@Shulker\@\@AEBA_NVBlockPos\@\@\@Z
     */
    MCAPI bool _isPosOccupiedByOtherShulker(class BlockPos) const; // NOLINT
    /**
     * @symbol ?_isValidAttach\@Shulker\@\@AEAA_NVBlockPos\@\@E\@Z
     */
    MCAPI bool _isValidAttach(class BlockPos, unsigned char); // NOLINT
    /**
     * @symbol ?_peekAmountTick\@Shulker\@\@AEAAXXZ
     */
    MCAPI void _peekAmountTick(); // NOLINT
    /**
     * @symbol ?_tryAttachingToNeighbouringFaces\@Shulker\@\@AEAA_NVBlockPos\@\@\@Z
     */
    MCAPI bool _tryAttachingToNeighbouringFaces(class BlockPos); // NOLINT
    /**
     * @symbol ?_trySpawnShulker\@Shulker\@\@AEAAXXZ
     */
    MCAPI void _trySpawnShulker(); // NOLINT
    /**
     * @symbol ?_tryTeleportSomewhere\@Shulker\@\@AEAA_NXZ
     */
    MCAPI bool _tryTeleportSomewhere(); // NOLINT

protected:
private:
};
