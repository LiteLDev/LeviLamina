/**
 * @file  HangingActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class HangingActor.
 *
 */
class HangingActor : public Actor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HANGINGACTOR
public:
    class HangingActor& operator=(class HangingActor const &) = delete;
    HangingActor(class HangingActor const &) = delete;
    HangingActor() = delete;
#endif

public:
    /**
     * @hash   -1823400872
     * @vftbl  8
     * @symbol ?reloadHardcoded@HangingActor@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   1363861299
     * @vftbl  9
     * @symbol ?reloadHardcodedClient@HangingActor@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcodedClient(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~HangingActor();
    /**
     * @hash   -757586817
     * @vftbl  27
     * @symbol ?move@HangingActor@@UEAAXAEBVVec3@@@Z
     */
    virtual void move(class Vec3 const &);
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   -83851002
     * @vftbl  48
     * @symbol ?normalTick@HangingActor@@UEAAXXZ
     */
    virtual void normalTick();
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
     * @hash   -101691696
     * @vftbl  86
     * @symbol ?getBrightness@HangingActor@@UEBAMM@Z
     */
    virtual float getBrightness(float) const;
    /**
     * @vftbl  87
     * @symbol __unk_vfn_87
     */
    virtual void __unk_vfn_87();
    /**
     * @hash   1641709049
     * @vftbl  94
     * @symbol ?isPickable@HangingActor@@UEAA_NXZ
     */
    virtual bool isPickable();
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
     * @hash   825833283
     * @vftbl  134
     * @symbol ?isInvulnerableTo@HangingActor@@UEBA_NAEBVActorDamageSource@@@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
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
     * @hash   1206654405
     * @vftbl  241
     * @symbol ?setSize@HangingActor@@UEAAXMM@Z
     */
    virtual void setSize(float, float);
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
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   761884523
     * @vftbl  271
     * @symbol ?_hurt@HangingActor@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   -1245830277
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@HangingActor@@MEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1593921310
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@HangingActor@@MEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @vftbl  285
     * @symbol __unk_vfn_285
     */
    virtual void __unk_vfn_285();
    /**
     * @hash   287638722
     * @vftbl  286
     * @symbol ?setDir@HangingActor@@UEAAXH@Z
     */
    virtual void setDir(int);
    /**
     * @hash   1171034321
     * @vftbl  287
     * @symbol ?getWidth@Painting@@UEBAHXZ
     */
    virtual int getWidth() const = 0;
    /**
     * @hash   -1936156610
     * @vftbl  288
     * @symbol ?getHeight@Painting@@UEBAHXZ
     */
    virtual int getHeight() const = 0;
    /**
     * @hash   1871553759
     * @vftbl  289
     * @symbol ?dropItem@Painting@@UEAAXXZ
     */
    virtual void dropItem() = 0;
    /**
     * @hash   -814573493
     * @vftbl  290
     * @symbol ?placeHangingEntity@HangingActor@@UEAA_NAEAVBlockSource@@H@Z
     */
    virtual bool placeHangingEntity(class BlockSource &, int);
    /**
     * @hash   -1896748237
     * @vftbl  291
     * @symbol ?wouldSurvive@HangingActor@@UEAA_NAEAVBlockSource@@@Z
     */
    virtual bool wouldSurvive(class BlockSource &);
    /**
     * @hash   -982863663
     * @symbol ??0HangingActor@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI HangingActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   -1661237656
     * @symbol ?getDirection@HangingActor@@QEBAHXZ
     */
    MCAPI int getDirection() const;

//protected:
    /**
     * @hash   1441498373
     * @symbol ?_calculateAABB@HangingActor@@IEAAXXZ
     */
    MCAPI void _calculateAABB();
    /**
     * @hash   755147463
     * @symbol ?_calculateActorPositionFromPlacementPosition@HangingActor@@IEAAXAEBVBlockPos@@@Z
     */
    MCAPI void _calculateActorPositionFromPlacementPosition(class BlockPos const &);
    /**
     * @hash   -1898986126
     * @symbol ?_wouldSurvive@HangingActor@@IEAA_NAEAVBlockSource@@AEBVBlockPos@@_N@Z
     */
    MCAPI bool _wouldSurvive(class BlockSource &, class BlockPos const &, bool);

//private:
    /**
     * @hash   934603572
     * @symbol ?_blockContainsObstruction@HangingActor@@AEBA_NAEBVBlockSource@@AEBVBlockPos@@@Z
     */
    MCAPI bool _blockContainsObstruction(class BlockSource const &, class BlockPos const &) const;
    /**
     * @hash   1289411684
     * @symbol ?_canSurviveOnBlock@HangingActor@@AEBA_NAEBVBlockSource@@AEBVBlockPos@@_N@Z
     */
    MCAPI bool _canSurviveOnBlock(class BlockSource const &, class BlockPos const &, bool) const;

protected:

private:
    /**
     * @hash   20645488
     * @symbol ?HANGING_OFFSET@HangingActor@@0MB
     */
    MCAPI static float const HANGING_OFFSET;

};