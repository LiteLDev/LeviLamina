#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"

class HangingActor : public ::Actor {

public:
    // prevent constructor by default
    HangingActor& operator=(HangingActor const&) = delete;
    HangingActor(HangingActor const&)            = delete;
    HangingActor()                               = delete;

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@HangingActor\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
    /**
     * @vftbl 11
     * @symbol
     * ?reloadHardcodedClient\@HangingActor\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void
    reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
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
     * @vftbl 43
     * @symbol ?normalTick\@HangingActor\@\@UEAAXXZ
     */
    virtual void normalTick(); // NOLINT
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
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71(); // NOLINT
    /**
     * @vftbl 76
     * @symbol ?getBrightness\@HangingActor\@\@UEBAMMAEBVIConstBlockSource\@\@\@Z
     */
    virtual float getBrightness(float, class IConstBlockSource const&) const; // NOLINT
    /**
     * @vftbl 77
     * @symbol __unk_vfn_77
     */
    virtual void __unk_vfn_77(); // NOLINT
    /**
     * @vftbl 82
     * @symbol ?isPickable\@HangingActor\@\@UEAA_NXZ
     */
    virtual bool isPickable(); // NOLINT
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
     * @vftbl 120
     * @symbol ?isInvulnerableTo\@HangingActor\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const; // NOLINT
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
     * @vftbl 212
     * @symbol ?setSize\@HangingActor\@\@UEAAXMM\@Z
     */
    virtual void setSize(float, float); // NOLINT
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
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239(); // NOLINT
    /**
     * @vftbl 240
     * @symbol ?_hurt\@HangingActor\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool); // NOLINT
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@HangingActor\@\@MEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@HangingActor\@\@MEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247(); // NOLINT
    /**
     * @vftbl 253
     * @symbol __unk_vfn_253
     */
    virtual void __unk_vfn_253(); // NOLINT
    /**
     * @vftbl 254
     * @symbol ?setDir\@HangingActor\@\@UEAAXH\@Z
     */
    virtual void setDir(int); // NOLINT
    /**
     * @vftbl 255
     * @symbol ?getWidth\@LeashFenceKnotActor\@\@UEBAHXZ
     */
    virtual int getWidth() const = 0; // NOLINT
    /**
     * @vftbl 256
     * @symbol ?getHeight\@LeashFenceKnotActor\@\@UEBAHXZ
     */
    virtual int getHeight() const = 0; // NOLINT
    /**
     * @vftbl 257
     * @symbol ?dropItem\@LeashFenceKnotActor\@\@UEAAXXZ
     */
    virtual void dropItem() = 0; // NOLINT
    /**
     * @vftbl 258
     * @symbol ?placeHangingEntity\@HangingActor\@\@UEAA_NAEAVBlockSource\@\@H\@Z
     */
    virtual bool placeHangingEntity(class BlockSource&, int); // NOLINT
    /**
     * @vftbl 259
     * @symbol ?wouldSurvive\@HangingActor\@\@UEAA_NAEAVBlockSource\@\@\@Z
     */
    virtual bool wouldSurvive(class BlockSource&); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HANGINGACTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~HangingActor(); // NOLINT
#endif
    /**
     * @symbol
     * ??0HangingActor\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI
    HangingActor(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&); // NOLINT
    /**
     * @symbol ?getDirection\@HangingActor\@\@QEBAHXZ
     */
    MCAPI int getDirection() const; // NOLINT

    // protected:
    /**
     * @symbol ?_calculateAABB\@HangingActor\@\@IEAAXXZ
     */
    MCAPI void _calculateAABB(); // NOLINT
    /**
     * @symbol ?_calculateActorPositionFromPlacementPosition\@HangingActor\@\@IEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void _calculateActorPositionFromPlacementPosition(class BlockPos const&); // NOLINT
    /**
     * @symbol ?_wouldSurvive\@HangingActor\@\@IEAA_NAEAVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI bool _wouldSurvive(class BlockSource&, class BlockPos const&, bool); // NOLINT

    // private:
    /**
     * @symbol ?_blockContainsObstruction\@HangingActor\@\@AEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _blockContainsObstruction(class BlockSource const&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?_blockIsObstruction\@HangingActor\@\@AEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _blockIsObstruction(class BlockSource const&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?_canSurviveOnBlock\@HangingActor\@\@AEBA_NAEBVBlockSource\@\@AEBVBlockPos\@\@_N\@Z
     */
    MCAPI bool _canSurviveOnBlock(class BlockSource const&, class BlockPos const&, bool) const; // NOLINT

protected:
private:
    /**
     * @symbol ?HANGING_OFFSET\@HangingActor\@\@0MB
     */
    MCAPI static float const HANGING_OFFSET; // NOLINT
};
