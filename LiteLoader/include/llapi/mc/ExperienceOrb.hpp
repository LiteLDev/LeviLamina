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
     * @vftbl 41
     * @symbol __unk_vfn_41
     */
    virtual void __unk_vfn_41();
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
     * @vftbl 80
     * @symbol ?getShadowRadius\@ExperienceOrb\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
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
     * @vftbl 88
     * @symbol __unk_vfn_88
     */
    virtual void __unk_vfn_88();
    /**
     * @vftbl 89
     * @symbol ?playerTouch\@ExperienceOrb\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void playerTouch(class Player &);
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
     * @symbol ?isInvulnerableTo\@ExperienceOrb\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
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
     * @vftbl 255
     * @symbol ?doWaterSplashEffect\@ExperienceOrb\@\@MEAAXXZ
     */
    virtual void doWaterSplashEffect();
    /**
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 261
     * @symbol ?_hurt\@ExperienceOrb\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl 264
     * @symbol ?readAdditionalSaveData\@ExperienceOrb\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 265
     * @symbol ?addAdditionalSaveData\@ExperienceOrb\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl 266
     * @symbol ?_playStepSound\@ExperienceOrb\@\@MEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
    /**
     * @vftbl 268
     * @symbol __unk_vfn_268
     */
    virtual void __unk_vfn_268();
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
     * @symbol ?_tryMergeExistingOrbs\@ExperienceOrb\@\@CA_NAEAVBlockSource\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI static bool _tryMergeExistingOrbs(class BlockSource &, class Vec3 const &, int);

private:

};
