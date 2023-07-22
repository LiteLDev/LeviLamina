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
     * @vftbl  10
     * @symbol  ?reloadHardcoded\@ExperienceOrb\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcoded(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  16
     * @symbol  __unk_destructor_16
     */
    virtual ~ExperienceOrb();
    /**
     * @vftbl  41
     * @symbol  __unk_vfn_41
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  49
     * @symbol  ?normalTick\@ExperienceOrb\@\@UEAAXXZ
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
     * @vftbl  81
     * @symbol  ?getShadowRadius\@ExperienceOrb\@\@UEBAMXZ
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
     * @vftbl  90
     * @symbol  ?playerTouch\@ExperienceOrb\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    virtual void playerTouch(class Player &);
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
     * @vftbl  135
     * @symbol  ?isInvulnerableTo\@ExperienceOrb\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
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
     * @vftbl  257
     * @symbol  ?doWaterSplashEffect\@ExperienceOrb\@\@MEAAXXZ
     */
    virtual void doWaterSplashEffect();
    /**
     * @vftbl  262
     * @symbol  __unk_vfn_262
     */
    virtual void __unk_vfn_262();
    /**
     * @vftbl  263
     * @symbol  ?_hurt\@ExperienceOrb\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @vftbl  266
     * @symbol  ?readAdditionalSaveData\@ExperienceOrb\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  267
     * @symbol  ?addAdditionalSaveData\@ExperienceOrb\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @vftbl  268
     * @symbol  ?_playStepSound\@ExperienceOrb\@\@MEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
    /**
     * @vftbl  270
     * @symbol  __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @symbol  ??0ExperienceOrb\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI ExperienceOrb(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol  ?getIconIndex\@ExperienceOrb\@\@QEBAHXZ
     */
    MCAPI int getIconIndex() const;
    /**
     * @symbol  ?postNormalTick\@ExperienceOrb\@\@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @symbol  ?setValue\@ExperienceOrb\@\@QEAAXH\@Z
     */
    MCAPI void setValue(int);
    /**
     * @symbol  ?spawnOrbs\@ExperienceOrb\@\@SAXAEAVBlockSource\@\@AEBVVec3\@\@HHW4DropType\@1\@PEAVPlayer\@\@\@Z
     */
    MCAPI static void spawnOrbs(class BlockSource &, class Vec3 const &, int, int, enum class ExperienceOrb::DropType, class Player *);
    /**
     * @symbol  ?spawnOrbs\@ExperienceOrb\@\@SAXAEAVBlockSource\@\@AEBVVec3\@\@HW4DropType\@1\@PEAVPlayer\@\@\@Z
     */
    MCAPI static void spawnOrbs(class BlockSource &, class Vec3 const &, int, enum class ExperienceOrb::DropType, class Player *);

//private:
    /**
     * @symbol  ?_handleMending\@ExperienceOrb\@\@AEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void _handleMending(class Player &);
    /**
     * @symbol  ?_spawnOrb\@ExperienceOrb\@\@CAXAEAVBlockSource\@\@AEAVLevel\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI static void _spawnOrb(class BlockSource &, class Level &, class Vec3 const &, int);
    /**
     * @symbol  ?_tryMergeExistingOrbs\@ExperienceOrb\@\@CA_NAEAVBlockSource\@\@AEBVVec3\@\@H\@Z
     */
    MCAPI static bool _tryMergeExistingOrbs(class BlockSource &, class Vec3 const &, int);

private:

};