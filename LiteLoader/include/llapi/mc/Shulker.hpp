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
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@Shulker\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~Shulker();
    /**
     * @vftbl  20
     * @symbol  ?setPos\@Shulker\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void setPos(class Vec3 const &);
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  49
     * @symbol  ?normalTick\@Shulker\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl  59
     * @symbol  ?isInWall\@Shulker\@\@UEBA_NXZ
     */
    virtual bool isInWall() const;
    /**
     * @vftbl  62
     * @symbol  __unk_vfn_62
     */
    virtual void __unk_vfn_62();
    /**
     * @vftbl  69
     * @symbol  __unk_vfn_69
     */
    virtual void __unk_vfn_69();
    /**
     * @vftbl  81
     * @symbol  ?getShadowRadius\@Shulker\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  83
     * @symbol  __unk_vfn_83
     */
    virtual void __unk_vfn_83();
    /**
     * @vftbl  86
     * @symbol  __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl  89
     * @symbol  __unk_vfn_89
     */
    virtual void __unk_vfn_89();
    /**
     * @vftbl  97
     * @symbol  __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl  100
     * @symbol  __unk_vfn_100
     */
    virtual void __unk_vfn_100();
    /**
     * @vftbl  107
     * @symbol  __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  109
     * @symbol  __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl  110
     * @symbol  __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @vftbl  112
     * @symbol  __unk_vfn_112
     */
    virtual void __unk_vfn_112();
    /**
     * @vftbl  114
     * @symbol  ?canAttack\@Shulker\@\@UEBA_NPEAVActor\@\@_N\@Z
     */
    virtual bool canAttack(class Actor *, bool) const;
    /**
     * @vftbl  132
     * @symbol  ?shouldRender\@Shulker\@\@UEBA_NXZ
     */
    virtual bool shouldRender() const;
    /**
     * @vftbl  135
     * @symbol  ?isInvulnerableTo\@Shulker\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl  143
     * @symbol  ?getPickRadius\@Shulker\@\@UEAAMXZ
     */
    virtual float getPickRadius();
    /**
     * @vftbl  179
     * @symbol  __unk_vfn_179
     */
    virtual void __unk_vfn_179();
    /**
     * @vftbl  193
     * @symbol  __unk_vfn_193
     */
    virtual void __unk_vfn_193();
    /**
     * @vftbl  218
     * @symbol  __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl  219
     * @symbol  __unk_vfn_219
     */
    virtual void __unk_vfn_219();
    /**
     * @vftbl  241
     * @symbol  __unk_vfn_241
     */
    virtual void __unk_vfn_241();
    /**
     * @vftbl  244
     * @symbol  __unk_vfn_244
     */
    virtual void __unk_vfn_244();
    /**
     * @vftbl  260
     * @symbol  ?updateEntitySpecificMolangVariables\@Shulker\@\@MEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @vftbl  263
     * @symbol  ?_hurt\@Shulker\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@Shulker\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@Shulker\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl  276
     * @symbol  ?_onSizeUpdated\@Shulker\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl  277
     * @symbol  __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @vftbl  285
     * @symbol  __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @vftbl  289
     * @symbol  ?travel\@Shulker\@\@UEAAXMMM\@Z
     */
    virtual void travel(float, float, float);
    /**
     * @vftbl  291
     * @symbol  ?aiStep\@Shulker\@\@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @vftbl  296
     * @symbol  ?checkSpawnRules\@Shulker\@\@UEAA_N_N\@Z
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @vftbl  304
     * @symbol  __unk_vfn_304
     */
    virtual void __unk_vfn_304();
    /**
     * @vftbl  305
     * @symbol  ?getMaxHeadXRot\@Shulker\@\@UEAAMXZ
     */
    virtual float getMaxHeadXRot();
    /**
     * @vftbl  308
     * @symbol  __unk_vfn_308
     */
    virtual void __unk_vfn_308();
    /**
     * @vftbl  313
     * @symbol  ?getArmorValue\@Shulker\@\@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl  346
     * @symbol  ?initBodyControl\@Shulker\@\@UEAA?AV?$unique_ptr\@VBodyControl\@\@U?$default_delete\@VBodyControl\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class BodyControl> initBodyControl();
    /**
     * @vftbl  354
     * @symbol  __unk_vfn_354
     */
    virtual void __unk_vfn_354();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHULKER
    /**
     * @symbol  ?breaksFallingBlocks\@Shulker\@\@UEBA_NXZ
     */
    MCVAPI bool breaksFallingBlocks() const;
    /**
     * @symbol  ?isLeashableType\@Shulker\@\@UEAA_NXZ
     */
    MCVAPI bool isLeashableType();
#endif
    /**
     * @symbol  ??0Shulker\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Shulker(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol  ?postNormalTick\@Shulker\@\@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @symbol  ?COVERED_ARMOR_MODIFIER\@Shulker\@\@2V?$shared_ptr\@VAttributeModifier\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> COVERED_ARMOR_MODIFIER;
    /**
     * @symbol  ?COVERED_ARMOR_MODIFIER_UUID\@Shulker\@\@2VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const COVERED_ARMOR_MODIFIER_UUID;
    /**
     * @symbol  ?postSetPosSetShulkerAttachPosAndPeekAmount\@Shulker\@\@SAXVSynchedActorDataWriter\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void postSetPosSetShulkerAttachPosAndPeekAmount(class SynchedActorDataWriter, class BlockPos const &);
    /**
     * @symbol  ?setShulkerAttachPos\@Shulker\@\@SAXVSynchedActorDataWriter\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static void setShulkerAttachPos(class SynchedActorDataWriter, class BlockPos const &);

//protected:
    /**
     * @symbol  ?_canOpenLidAt\@Shulker\@\@IEBA_NVBlockPos\@\@E\@Z
     */
    MCAPI bool _canOpenLidAt(class BlockPos, unsigned char) const;
    /**
     * @symbol  ?_setPeekAmount\@Shulker\@\@KAXVSynchedActorDataWriter\@\@H\@Z
     */
    MCAPI static void _setPeekAmount(class SynchedActorDataWriter, int);

//private:
    /**
     * @symbol  ?_calculateBB\@Shulker\@\@AEAAXXZ
     */
    MCAPI void _calculateBB();
    /**
     * @symbol  ?_isPosOccupiedByOtherShulker\@Shulker\@\@AEBA_NVBlockPos\@\@\@Z
     */
    MCAPI bool _isPosOccupiedByOtherShulker(class BlockPos) const;
    /**
     * @symbol  ?_isValidAttach\@Shulker\@\@AEAA_NVBlockPos\@\@E\@Z
     */
    MCAPI bool _isValidAttach(class BlockPos, unsigned char);
    /**
     * @symbol  ?_peekAmountTick\@Shulker\@\@AEAAXXZ
     */
    MCAPI void _peekAmountTick();
    /**
     * @symbol  ?_setAttachFace\@Shulker\@\@AEAAXE\@Z
     */
    MCAPI void _setAttachFace(unsigned char);
    /**
     * @symbol  ?_tryAttachingToNeighbouringFaces\@Shulker\@\@AEAA_NVBlockPos\@\@\@Z
     */
    MCAPI bool _tryAttachingToNeighbouringFaces(class BlockPos);
    /**
     * @symbol  ?_trySpawnShulker\@Shulker\@\@AEAAXXZ
     */
    MCAPI void _trySpawnShulker();
    /**
     * @symbol  ?_tryTeleportSomewhere\@Shulker\@\@AEAA_NXZ
     */
    MCAPI bool _tryTeleportSomewhere();

protected:

private:

};