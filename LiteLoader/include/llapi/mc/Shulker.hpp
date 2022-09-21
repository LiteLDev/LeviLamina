/**
 * @file  MC/Shulker.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @hash   -1204101103
     * @vftbl  8
     * @symbol ?reloadHardcoded@Shulker@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~Shulker();
    /**
     * @hash   -571706395
     * @vftbl  18
     * @symbol ?setPos@Shulker@@UEAAXAEBVVec3@@@Z
     */
    virtual void setPos(class Vec3 const &);
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   141241599
     * @vftbl  48
     * @symbol ?normalTick@Shulker@@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @hash   -307594027
     * @vftbl  57
     * @symbol ?isInWall@Shulker@@UEBA_NXZ
     */
    virtual bool isInWall() const;
    /**
     * @vftbl  60
     * @symbol __unk_vfn_60
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @hash   -1171082358
     * @vftbl  79
     * @symbol ?getShadowRadius@Shulker@@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @vftbl  84
     * @symbol __unk_vfn_84
     */
    virtual void __unk_vfn_84();
    /**
     * @vftbl  87
     * @symbol __unk_vfn_87
     */
    virtual void __unk_vfn_87();
    /**
     * @vftbl  95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl  98
     * @symbol __unk_vfn_98
     */
    virtual void __unk_vfn_98();
    /**
     * @vftbl  105
     * @symbol __unk_vfn_105
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl  108
     * @symbol __unk_vfn_108
     */
    virtual void __unk_vfn_108();
    /**
     * @vftbl  110
     * @symbol __unk_vfn_110
     */
    virtual void __unk_vfn_110();
    /**
     * @hash   1796528717
     * @vftbl  112
     * @symbol ?canAttack@Shulker@@UEBA_NPEAVActor@@_N@Z
     */
    virtual bool canAttack(class Actor *, bool) const;
    /**
     * @hash   2122109589
     * @vftbl  131
     * @symbol ?shouldRender@Shulker@@UEBA_NXZ
     */
    virtual bool shouldRender() const;
    /**
     * @hash   971712970
     * @vftbl  134
     * @symbol ?isInvulnerableTo@Shulker@@UEBA_NAEBVActorDamageSource@@@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @hash   -52382260
     * @vftbl  142
     * @symbol ?getPickRadius@Shulker@@UEAAMXZ
     */
    virtual float getPickRadius();
    /**
     * @vftbl  181
     * @symbol __unk_vfn_181
     */
    virtual void __unk_vfn_181();
    /**
     * @vftbl  195
     * @symbol __unk_vfn_195
     */
    virtual void __unk_vfn_195();
    /**
     * @vftbl  221
     * @symbol __unk_vfn_221
     */
    virtual void __unk_vfn_221();
    /**
     * @vftbl  222
     * @symbol __unk_vfn_222
     */
    virtual void __unk_vfn_222();
    /**
     * @vftbl  248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl  251
     * @symbol __unk_vfn_251
     */
    virtual void __unk_vfn_251();
    /**
     * @hash   -387308805
     * @vftbl  268
     * @symbol ?updateEntitySpecificMolangVariables@Shulker@@MEAAXAEAVRenderParams@@@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   1085677892
     * @vftbl  271
     * @symbol ?_hurt@Shulker@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   -2002014149
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@Shulker@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1459367506
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@Shulker@@UEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @hash   2132560665
     * @vftbl  284
     * @symbol ?_onSizeUpdated@Shulker@@EEAAXXZ
     */
    virtual void _onSizeUpdated();
    /**
     * @vftbl  285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   -1857849811
     * @vftbl  297
     * @symbol ?travel@Shulker@@UEAAXMMM@Z
     */
    virtual void travel(float, float, float);
    /**
     * @hash   -1202388001
     * @vftbl  300
     * @symbol ?aiStep@Shulker@@UEAAXXZ
     */
    virtual void aiStep();
    /**
     * @hash   -1897001829
     * @vftbl  305
     * @symbol ?checkSpawnRules@Shulker@@UEAA_N_N@Z
     */
    virtual bool checkSpawnRules(bool);
    /**
     * @vftbl  313
     * @symbol __unk_vfn_313
     */
    virtual void __unk_vfn_313();
    /**
     * @hash   -1361236368
     * @vftbl  314
     * @symbol ?getMaxHeadXRot@Shulker@@UEAAMXZ
     */
    virtual float getMaxHeadXRot();
    /**
     * @vftbl  317
     * @symbol __unk_vfn_317
     */
    virtual void __unk_vfn_317();
    /**
     * @hash   878896199
     * @vftbl  322
     * @symbol ?getArmorValue@Shulker@@UEBAHXZ
     */
    virtual int getArmorValue() const;
    /**
     * @vftbl  351
     * @symbol __unk_vfn_351
     */
    virtual void __unk_vfn_351();
    /**
     * @hash   -2145577983
     * @vftbl  356
     * @symbol ?initBodyControl@Shulker@@UEAA?AV?$unique_ptr@VBodyControl@@U?$default_delete@VBodyControl@@@std@@@std@@XZ
     */
    virtual std::unique_ptr<class BodyControl> initBodyControl();
    /**
     * @vftbl  365
     * @symbol __unk_vfn_365
     */
    virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHULKER
    /**
     * @hash   1343220645
     * @symbol ?breaksFallingBlocks@Shulker@@UEBA_NXZ
     */
    MCVAPI bool breaksFallingBlocks() const;
    /**
     * @hash   -251186796
     * @symbol ?isLeashableType@Shulker@@UEAA_NXZ
     */
    MCVAPI bool isLeashableType();
    /**
     * @hash   -307956467
     * @symbol ?useNewAi@Shulker@@UEBA_NXZ
     */
    MCVAPI bool useNewAi() const;
#endif
    /**
     * @hash   809666776
     * @symbol ??0Shulker@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI Shulker(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   1380284587
     * @symbol ?postNormalTick@Shulker@@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @hash   410554550
     * @symbol ?COVERED_ARMOR_MODIFIER@Shulker@@2V?$shared_ptr@VAttributeModifier@@@std@@A
     */
    MCAPI static class std::shared_ptr<class AttributeModifier> COVERED_ARMOR_MODIFIER;
    /**
     * @hash   -986460809
     * @symbol ?COVERED_ARMOR_MODIFIER_UUID@Shulker@@2VUUID@mce@@B
     */
    MCAPI static class mce::UUID const COVERED_ARMOR_MODIFIER_UUID;
    /**
     * @symbol ?postSetPosSetShulkerAttachPosAndPeekAmount@Shulker@@SAXVSynchedActorDataWriter@@AEBVBlockPos@@@Z
     */
    MCAPI static void postSetPosSetShulkerAttachPosAndPeekAmount(class SynchedActorDataWriter, class BlockPos const &);
    /**
     * @symbol ?setShulkerAttachPos@Shulker@@SAXVSynchedActorDataWriter@@AEBVBlockPos@@@Z
     */
    MCAPI static void setShulkerAttachPos(class SynchedActorDataWriter, class BlockPos const &);

//protected:
    /**
     * @hash   -833030336
     * @symbol ?_canOpenLidAt@Shulker@@IEBA_NVBlockPos@@E@Z
     */
    MCAPI bool _canOpenLidAt(class BlockPos, unsigned char) const;
    /**
     * @symbol ?_setPeekAmount@Shulker@@KAXVSynchedActorDataWriter@@H@Z
     */
    MCAPI static void _setPeekAmount(class SynchedActorDataWriter, int);

//private:
    /**
     * @hash   839988631
     * @symbol ?_calculateBB@Shulker@@AEAAXXZ
     */
    MCAPI void _calculateBB();
    /**
     * @hash   62775045
     * @symbol ?_isPosOccupiedByOtherShulker@Shulker@@AEBA_NVBlockPos@@@Z
     */
    MCAPI bool _isPosOccupiedByOtherShulker(class BlockPos) const;
    /**
     * @hash   1386863123
     * @symbol ?_isValidAttach@Shulker@@AEAA_NVBlockPos@@E@Z
     */
    MCAPI bool _isValidAttach(class BlockPos, unsigned char);
    /**
     * @hash   -146400929
     * @symbol ?_peekAmountTick@Shulker@@AEAAXXZ
     */
    MCAPI void _peekAmountTick();
    /**
     * @hash   -972702632
     * @symbol ?_setAttachFace@Shulker@@AEAAXE@Z
     */
    MCAPI void _setAttachFace(unsigned char);
    /**
     * @hash   1404748493
     * @symbol ?_tryAttachingToNeighbouringFaces@Shulker@@AEAA_NVBlockPos@@@Z
     */
    MCAPI bool _tryAttachingToNeighbouringFaces(class BlockPos);
    /**
     * @hash   1269753981
     * @symbol ?_trySpawnShulker@Shulker@@AEAAXXZ
     */
    MCAPI void _trySpawnShulker();
    /**
     * @hash   31568646
     * @symbol ?_tryTeleportSomewhere@Shulker@@AEAA_NXZ
     */
    MCAPI bool _tryTeleportSomewhere();

protected:

private:

};