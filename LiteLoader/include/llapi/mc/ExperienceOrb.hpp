/**
 * @file  ExperienceOrb.hpp
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
 * @brief MC class ExperienceOrb.
 *
 */
class ExperienceOrb : public Actor {

#define AFTER_EXTRA
// Add Member There
public:
enum class DropType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIENCEORB
public:
    class ExperienceOrb& operator=(class ExperienceOrb const &) = delete;
    ExperienceOrb(class ExperienceOrb const &) = delete;
    ExperienceOrb() = delete;
#endif

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@ExperienceOrb\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
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
     * @vftbl 78
     * @symbol ?getShadowRadius\@ExperienceOrb\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl 86
     * @symbol __unk_vfn_86
     */
    virtual void __unk_vfn_86();
    /**
     * @vftbl 87
     * @symbol ?playerTouch\@ExperienceOrb\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void playerTouch(class Player &);
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
     * @symbol ?isInvulnerableTo\@ExperienceOrb\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
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
     * @vftbl 247
     * @symbol ?doWaterSplashEffect\@ExperienceOrb\@\@MEAAXXZ
     */
    virtual void doWaterSplashEffect();
    /**
     * @vftbl 252
     * @symbol __unk_vfn_252
     */
    virtual void __unk_vfn_252();
    /**
     * @vftbl 253
     * @symbol ?_hurt\@ExperienceOrb\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 256
     * @symbol ?readAdditionalSaveData\@ExperienceOrb\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 257
     * @symbol ?addAdditionalSaveData\@ExperienceOrb\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 258
     * @symbol ?_playStepSound\@ExperienceOrb\@\@MEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @symbol ??0ExperienceOrb\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI ExperienceOrb(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getIconIndex\@ExperienceOrb\@\@QEBAHXZ
     */
    MCAPI int getIconIndex() const;
    /**
     * @symbol ?postNormalTick\@ExperienceOrb\@\@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @symbol ?spawnOrbs\@ExperienceOrb\@\@SAXAEAVBlockSource\@\@AEBVVec3\@\@HHW4DropType\@1\@PEAVPlayer\@\@\@Z
     */
    MCAPI static void spawnOrbs(class BlockSource &, class Vec3 const &, int, int, enum class ExperienceOrb::DropType, class Player *);
    /**
     * @symbol ?spawnOrbs\@ExperienceOrb\@\@SAXAEAVBlockSource\@\@AEBVVec3\@\@HW4DropType\@1\@PEAVPlayer\@\@\@Z
     */
    MCAPI static void spawnOrbs(class BlockSource &, class Vec3 const &, int, enum class ExperienceOrb::DropType, class Player *);

//private:
    /**
     * @symbol ?_handleMending\@ExperienceOrb\@\@AEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void _handleMending(class Player &);
    /**
     * @symbol ?_spawnOrb\@ExperienceOrb\@\@CAXAEAVBlockSource\@\@AEAVLevel\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI static void _spawnOrb(class BlockSource &, class Level &, class Vec3 const &, int);
    /**
     * @symbol ?_tryMergeIntoExistingOrbs\@ExperienceOrb\@\@CA_NAEAVBlockSource\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI static bool _tryMergeIntoExistingOrbs(class BlockSource &, class Vec3 const &, int);

private:

};
