/**
 * @file  ExperienceOrb.hpp
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
     * @hash   2029947608
     * @vftbl  8
     * @symbol ?reloadHardcoded@ExperienceOrb@@UEAAXW4InitializationMethod@Actor@@AEBVVariantParameterList@@@Z
     */
    virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl  14
     * @symbol __unk_destructor_14
     */
    virtual ~ExperienceOrb();
    /**
     * @vftbl  40
     * @symbol __unk_vfn_40
     */
    virtual void __unk_vfn_40();
    /**
     * @hash   -1665657114
     * @vftbl  48
     * @symbol ?normalTick@ExperienceOrb@@UEAAXXZ
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
     * @hash   -1181569599
     * @vftbl  79
     * @symbol ?getShadowRadius@ExperienceOrb@@UEBAMXZ
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
     * @hash   1370525203
     * @vftbl  88
     * @symbol ?playerTouch@ExperienceOrb@@UEAAXAEAVPlayer@@@Z
     */
    virtual void playerTouch(class Player &);
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
     * @hash   1246659395
     * @vftbl  134
     * @symbol ?isInvulnerableTo@ExperienceOrb@@UEBA_NAEBVActorDamageSource@@@Z
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
     * @hash   870893503
     * @vftbl  265
     * @symbol ?doWaterSplashEffect@ExperienceOrb@@MEAAXXZ
     */
    virtual void doWaterSplashEffect();
    /**
     * @vftbl  270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @hash   1394980523
     * @vftbl  271
     * @symbol ?_hurt@ExperienceOrb@@MEAA_NAEBVActorDamageSource@@M_N1@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /**
     * @hash   -949430478
     * @vftbl  274
     * @symbol ?readAdditionalSaveData@ExperienceOrb@@UEAAXAEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1059870507
     * @vftbl  275
     * @symbol ?addAdditionalSaveData@ExperienceOrb@@UEBAXAEAVCompoundTag@@@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   1395156237
     * @vftbl  276
     * @symbol ?_playStepSound@ExperienceOrb@@MEAAXAEBVBlockPos@@AEBVBlock@@@Z
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
    /**
     * @vftbl  278
     * @symbol __unk_vfn_278
     */
    virtual void __unk_vfn_278();
    /**
     * @hash   -181197151
     * @symbol ??0ExperienceOrb@@QEAA@PEAVActorDefinitionGroup@@AEBUActorDefinitionIdentifier@@AEAVEntityContext@@@Z
     */
    MCAPI ExperienceOrb(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @hash   1665010924
     * @symbol ?getIconIndex@ExperienceOrb@@QEBAHXZ
     */
    MCAPI int getIconIndex() const;
    /**
     * @hash   -704966933
     * @symbol ?postNormalTick@ExperienceOrb@@QEAAXXZ
     */
    MCAPI void postNormalTick();
    /**
     * @hash   -1608402214
     * @symbol ?setValue@ExperienceOrb@@QEAAXH@Z
     */
    MCAPI void setValue(int);
    /**
     * @hash   -409836436
     * @symbol ?spawnOrbs@ExperienceOrb@@SAXAEAVBlockSource@@AEBVVec3@@HHW4DropType@1@PEAVPlayer@@@Z
     */
    MCAPI static void spawnOrbs(class BlockSource &, class Vec3 const &, int, int, enum ExperienceOrb::DropType, class Player *);
    /**
     * @hash   -1980091095
     * @symbol ?spawnOrbs@ExperienceOrb@@SAXAEAVBlockSource@@AEBVVec3@@HW4DropType@1@PEAVPlayer@@@Z
     */
    MCAPI static void spawnOrbs(class BlockSource &, class Vec3 const &, int, enum ExperienceOrb::DropType, class Player *);

//private:
    /**
     * @hash   531938663
     * @symbol ?_handleMending@ExperienceOrb@@AEAAXAEAVPlayer@@@Z
     */
    MCAPI void _handleMending(class Player &);

private:
    /**
     * @hash   -12624908
     * @symbol ?LIFETIME@ExperienceOrb@@0HB
     */
    MCAPI static int const LIFETIME;

};