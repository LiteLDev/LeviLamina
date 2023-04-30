/**
 * @file  HangingActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @vftbl 10
     * @symbol ?reloadHardcoded\@HangingActor\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 11
     * @symbol ?reloadHardcodedClient\@HangingActor\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 28
     * @symbol ?move\@HangingActor\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void move(class Vec3 const &);
    /**
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl 49
     * @symbol ?normalTick\@HangingActor\@\@UEAAXXZ
     */
    virtual void normalTick();
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
     * @vftbl 87
     * @symbol ?getBrightness\@HangingActor\@\@UEBAMMAEBVIConstBlockSource\@\@\@Z
     */
    virtual float getBrightness(float, class IConstBlockSource const &) const;
    /**
     * @vftbl 88
     * @symbol __unk_vfn_88
     */
    virtual void __unk_vfn_88();
    /**
     * @vftbl 95
     * @symbol ?isPickable\@HangingActor\@\@UEAA_NXZ
     */
    virtual bool isPickable();
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
     * @vftbl 134
     * @symbol ?isInvulnerableTo\@HangingActor\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
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
     * @vftbl 233
     * @symbol ?setSize\@HangingActor\@\@UEAAXMM\@Z
     */
    virtual void setSize(float, float);
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
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 261
     * @symbol ?_hurt\@HangingActor\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 264
     * @symbol ?readAdditionalSaveData\@HangingActor\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 265
     * @symbol ?addAdditionalSaveData\@HangingActor\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 268
     * @symbol __unk_vfn_268
     */
    virtual void __unk_vfn_268();
    /**
     * @vftbl 275
     * @symbol __unk_vfn_275
     */
    virtual void __unk_vfn_275();
    /**
     * @vftbl 276
     * @symbol ?setDir\@HangingActor\@\@UEAAXH\@Z
     */
    virtual void setDir(int);
    /**
     * @vftbl 277
     * @symbol ?getWidth\@Painting\@\@UEBAHXZ
     */
    virtual int getWidth() const = 0;
    /**
     * @vftbl 278
     * @symbol ?getHeight\@Painting\@\@UEBAHXZ
     */
    virtual int getHeight() const = 0;
    /**
     * @vftbl 279
     * @symbol ?dropItem\@Painting\@\@UEAAXXZ
     */
    virtual void dropItem() = 0;
    /**
     * @vftbl 280
     * @symbol ?placeHangingEntity\@HangingActor\@\@UEAA_NAEAVBlockSource\@\@H\@Z
     */
    virtual bool placeHangingEntity(class BlockSource &, int);
    /**
     * @vftbl 281
     * @symbol ?wouldSurvive\@HangingActor\@\@UEAA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool wouldSurvive(class BlockSource &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HANGINGACTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~HangingActor();
#endif
    /**
     * @symbol ??0HangingActor\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI HangingActor(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getDirection\@HangingActor\@\@QEBAHXZ
     */
    MCAPI int getDirection() const;

//protected:
    /**
     * @symbol ?_calculateAABB\@HangingActor\@\@IEAAXXZ
     */
    MCAPI void _calculateAABB();
    /**
     * @symbol ?_calculateActorPositionFromPlacementPosition\@HangingActor\@\@IEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void _calculateActorPositionFromPlacementPosition(class BlockPos const &);
    /**
     * @symbol ?_wouldSurvive\@HangingActor\@\@IEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI bool _wouldSurvive(class BlockSource &, class BlockPos const &, bool);

//private:
    /**
     * @symbol ?_blockContainsObstruction\@HangingActor\@\@AEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _blockContainsObstruction(class BlockSource const &, class BlockPos const &) const;
    /**
     * @symbol ?_blockIsObstruction\@HangingActor\@\@AEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _blockIsObstruction(class BlockSource const &, class BlockPos const &) const;
    /**
     * @symbol ?_canSurviveOnBlock\@HangingActor\@\@AEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI bool _canSurviveOnBlock(class BlockSource const &, class BlockPos const &, bool) const;

protected:

private:
    /**
     * @symbol ?HANGING_OFFSET\@HangingActor\@\@0MB
     */
    MCAPI static float const HANGING_OFFSET;

};
