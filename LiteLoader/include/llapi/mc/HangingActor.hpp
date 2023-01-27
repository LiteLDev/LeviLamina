/**
 * @file  HangingActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Actor.hpp"

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
     * @hash   1287337656
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@HangingActor\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @hash   179647907
     * @vftbl  11
     * @symbol  ?reloadHardcodedClient\@HangingActor\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~HangingActor();
    /**
     * @hash   -1941953969
     * @vftbl  28
     * @symbol  ?move\@HangingActor\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void move(class Vec3 const &);
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @hash   -1268187402
     * @vftbl  49
     * @symbol  ?normalTick\@HangingActor\@\@UEAAXXZ
     */
    virtual void normalTick();
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
     * @vftbl  88
     * @symbol  ?getBrightness\@HangingActor\@\@UEBAMMAEBVIConstBlockSource\@\@\@Z
     */
    virtual float getBrightness(float, class IConstBlockSource const &) const;
    /**
     * @vftbl  89
     * @symbol  __unk_vfn_89
     */
    virtual void __unk_vfn_89();
    /**
     * @hash   1741606921
     * @vftbl  96
     * @symbol  ?isPickable\@HangingActor\@\@UEAA_NXZ
     */
    virtual bool isPickable();
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
     * @hash   171507603
     * @vftbl  135
     * @symbol  ?isInvulnerableTo\@HangingActor\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
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
     * @hash   1298541381
     * @vftbl  234
     * @symbol  ?setSize\@HangingActor\@\@UEAAXMM\@Z
     */
    virtual void setSize(float, float);
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
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @hash   -422590261
     * @vftbl  263
     * @symbol  ?_hurt\@HangingActor\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   1864877499
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@HangingActor\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1516709586
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@HangingActor\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl  277
     * @symbol  __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @hash   -896574670
     * @vftbl  278
     * @symbol  ?setDir\@HangingActor\@\@UEAAXH\@Z
     */
    virtual void setDir(int);
    /**
     * @hash   1171034321
     * @vftbl  279
     * @symbol  ?getWidth\@Painting\@\@UEBAHXZ
     */
    virtual int getWidth() const = 0;
    /**
     * @hash   -1936156610
     * @vftbl  280
     * @symbol  ?getHeight\@Painting\@\@UEBAHXZ
     */
    virtual int getHeight() const = 0;
    /**
     * @hash   1871553759
     * @vftbl  281
     * @symbol  ?dropItem\@Painting\@\@UEAAXXZ
     */
    virtual void dropItem() = 0;
    /**
     * @hash   -714675621
     * @vftbl  282
     * @symbol  ?placeHangingEntity\@HangingActor\@\@UEAA_NAEAVBlockSource\@\@H\@Z
     */
    virtual bool placeHangingEntity(class BlockSource &, int);
    /**
     * @hash   1214005667
     * @vftbl  283
     * @symbol  ?wouldSurvive\@HangingActor\@\@UEAA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool wouldSurvive(class BlockSource &);
    /**
     * @hash   2127167569
     * @symbol  ??0HangingActor\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI HangingActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   1449362488
     * @symbol  ?getDirection\@HangingActor\@\@QEBAHXZ
     */
    MCAPI int getDirection() const;

//protected:
    /**
     * @hash   257254229
     * @symbol  ?_calculateAABB\@HangingActor\@\@IEAAXXZ
     */
    MCAPI void _calculateAABB();
    /**
     * @hash   -429065929
     * @symbol  ?_calculateActorPositionFromPlacementPosition\@HangingActor\@\@IEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void _calculateActorPositionFromPlacementPosition(class BlockPos const &);
    /**
     * @hash   1211552514
     * @symbol  ?_wouldSurvive\@HangingActor\@\@IEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI bool _wouldSurvive(class BlockSource &, class BlockPos const &, bool);

//private:
    /**
     * @hash   -250101852
     * @symbol  ?_blockContainsObstruction\@HangingActor\@\@AEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _blockContainsObstruction(class BlockSource const &, class BlockPos const &) const;
    /**
     * @hash   1626627785
     * @symbol  ?_blockIsObstruction\@HangingActor\@\@AEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _blockIsObstruction(class BlockSource const &, class BlockPos const &) const;
    /**
     * @hash   105244420
     * @symbol  ?_canSurviveOnBlock\@HangingActor\@\@AEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI bool _canSurviveOnBlock(class BlockSource const &, class BlockPos const &, bool) const;

protected:

private:
    /**
     * @hash   959750064
     * @symbol  ?HANGING_OFFSET\@HangingActor\@\@0MB
     */
    MCAPI static float const HANGING_OFFSET;

};