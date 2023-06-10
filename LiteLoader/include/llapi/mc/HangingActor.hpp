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
     * @vftbl 27
     * @symbol ?move\@HangingActor\@\@UEAAXAEBVVec3\@\@\@Z
     */
    virtual void move(class Vec3 const &);
    /**
     * @vftbl 40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl 48
     * @symbol ?normalTick\@HangingActor\@\@UEAAXXZ
     */
    virtual void normalTick();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 68
     * @symbol __unk_vfn_68
     */
    virtual void __unk_vfn_68();
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl 85
     * @symbol ?getBrightness\@HangingActor\@\@UEBAMMAEBVIConstBlockSource\@\@\@Z
     */
    virtual float getBrightness(float, class IConstBlockSource const &) const;
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 93
     * @symbol ?isPickable\@HangingActor\@\@UEAA_NXZ
     */
    virtual bool isPickable();
    /**
     * @vftbl 94
     * @symbol __unk_vfn_94
     */
    virtual void __unk_vfn_94();
    /**
     * @vftbl 97
     * @symbol __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl 104
     * @symbol __unk_vfn_104
     */
    virtual void __unk_vfn_104();
    /**
     * @vftbl 106
     * @symbol __unk_vfn_106
     */
    virtual void __unk_vfn_106();
    /**
     * @vftbl 107
     * @symbol __unk_vfn_107
     */
    virtual void __unk_vfn_107();
    /**
     * @vftbl 109
     * @symbol __unk_vfn_109
     */
    virtual void __unk_vfn_109();
    /**
     * @vftbl 132
     * @symbol ?isInvulnerableTo\@HangingActor\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl 176
     * @symbol __unk_vfn_176
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl 190
     * @symbol __unk_vfn_190
     */
    virtual void __unk_vfn_190();
    /**
     * @vftbl 215
     * @symbol __unk_vfn_215
     */
    virtual void __unk_vfn_215();
    /**
     * @vftbl 216
     * @symbol __unk_vfn_216
     */
    virtual void __unk_vfn_216();
    /**
     * @vftbl 225
     * @symbol ?setSize\@HangingActor\@\@UEAAXMM\@Z
     */
    virtual void setSize(float, float);
    /**
     * @vftbl 232
     * @symbol __unk_vfn_232
     */
    virtual void __unk_vfn_232();
    /**
     * @vftbl 235
     * @symbol __unk_vfn_235
     */
    virtual void __unk_vfn_235();
    /**
     * @vftbl 252
     * @symbol __unk_vfn_252
     */
    virtual void __unk_vfn_252();
    /**
     * @vftbl 253
     * @symbol ?_hurt\@HangingActor\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 256
     * @symbol ?readAdditionalSaveData\@HangingActor\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 257
     * @symbol ?addAdditionalSaveData\@HangingActor\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 267
     * @symbol __unk_vfn_267
     */
    virtual void __unk_vfn_267();
    /**
     * @vftbl 268
     * @symbol ?setDir\@HangingActor\@\@UEAAXH\@Z
     */
    virtual void setDir(int);
    /**
     * @vftbl 269
     * @symbol ?getWidth\@LeashFenceKnotActor\@\@UEBAHXZ
     */
    virtual int getWidth() const = 0;
    /**
     * @vftbl 270
     * @symbol ?getHeight\@LeashFenceKnotActor\@\@UEBAHXZ
     */
    virtual int getHeight() const = 0;
    /**
     * @vftbl 271
     * @symbol ?dropItem\@LeashFenceKnotActor\@\@UEAAXXZ
     */
    virtual void dropItem() = 0;
    /**
     * @vftbl 272
     * @symbol ?placeHangingEntity\@HangingActor\@\@UEAA_NAEAVBlockSource\@\@H\@Z
     */
    virtual bool placeHangingEntity(class BlockSource &, int);
    /**
     * @vftbl 273
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
