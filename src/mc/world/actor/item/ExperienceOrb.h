#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"

class ExperienceOrb : public ::Actor {
public:
    // ExperienceOrb inner types declare
    // clang-format off

    // clang-format on

    // ExperienceOrb inner types define
    enum class DropType {};

public:
    // prevent constructor by default
    ExperienceOrb& operator=(ExperienceOrb const&) = delete;
    ExperienceOrb(ExperienceOrb const&)            = delete;
    ExperienceOrb()                                = delete;

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@ExperienceOrb\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
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
     * @symbol ?getShadowRadius\@ExperienceOrb\@\@UEBAMXZ
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
     * @vftbl 78
     * @symbol ?playerTouch\@ExperienceOrb\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void playerTouch(class Player&); // NOLINT
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
     * @symbol ?isInvulnerableTo\@ExperienceOrb\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
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
     * @vftbl 234
     * @symbol ?doWaterSplashEffect\@ExperienceOrb\@\@MEAAXXZ
     */
    virtual void doWaterSplashEffect(); // NOLINT
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239(); // NOLINT
    /**
     * @vftbl 240
     * @symbol ?_hurt\@ExperienceOrb\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool); // NOLINT
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@ExperienceOrb\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@ExperienceOrb\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 245
     * @symbol ?_playStepSound\@ExperienceOrb\@\@MEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void _playStepSound(class BlockPos const&, class Block const&); // NOLINT
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247(); // NOLINT
    /**
     * @symbol
     * ??0ExperienceOrb\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI
    ExperienceOrb(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&); // NOLINT
    /**
     * @symbol ?getIconIndex\@ExperienceOrb\@\@QEBAHXZ
     */
    MCAPI int getIconIndex() const; // NOLINT
    /**
     * @symbol ?postNormalTick\@ExperienceOrb\@\@QEAAXXZ
     */
    MCAPI void postNormalTick(); // NOLINT
    /**
     * @symbol ?spawnOrbs\@ExperienceOrb\@\@SAXAEAVBlockSource\@\@AEBVVec3\@\@HHW4DropType\@1\@PEAVPlayer\@\@\@Z
     */
    MCAPI static void
    spawnOrbs(class BlockSource&, class Vec3 const&, int, int, enum class ExperienceOrb::DropType, class Player*); // NOLINT
    /**
     * @symbol ?spawnOrbs\@ExperienceOrb\@\@SAXAEAVBlockSource\@\@AEBVVec3\@\@HW4DropType\@1\@PEAVPlayer\@\@\@Z
     */
    MCAPI static void
    spawnOrbs(class BlockSource&, class Vec3 const&, int, enum class ExperienceOrb::DropType, class Player*); // NOLINT

    // private:
    /**
     * @symbol ?_handleMending\@ExperienceOrb\@\@AEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void _handleMending(class Player&); // NOLINT
    /**
     * @symbol ?_spawnOrb\@ExperienceOrb\@\@CAXAEAVBlockSource\@\@AEAVLevel\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI static void _spawnOrb(class BlockSource&, class Level&, class Vec3 const&, int); // NOLINT
    /**
     * @symbol ?_tryMergeIntoExistingOrbs\@ExperienceOrb\@\@CA_NAEAVBlockSource\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI static bool _tryMergeIntoExistingOrbs(class BlockSource&, class Vec3 const&, int); // NOLINT

private:
};
