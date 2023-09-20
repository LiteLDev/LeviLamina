/**
 * @file  Parrot.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "Animal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Parrot.
 *
 */
class Parrot : public Animal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARROT
public:
    class Parrot& operator=(class Parrot const &) = delete;
    Parrot(class Parrot const &) = delete;
    Parrot() = delete;
#endif

public:
    /**
     * @vftbl 11
     * @symbol ?reloadHardcodedClient\@Parrot\@\@MEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadHardcodedClient(enum class Actor::InitializationMethod, class VariantParameterList const &);
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl 61
     * @symbol __unk_vfn_61
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl 68
     * @symbol ?getShadowRadius\@Parrot\@\@UEBAMXZ
     */
    virtual float getShadowRadius() const;
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl 76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
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
     * @vftbl 92
     * @symbol __unk_vfn_92
     */
    virtual void __unk_vfn_92();
    /**
     * @vftbl 94
     * @symbol __unk_vfn_94
     */
    virtual void __unk_vfn_94();
    /**
     * @vftbl 95
     * @symbol __unk_vfn_95
     */
    virtual void __unk_vfn_95();
    /**
     * @vftbl 97
     * @symbol __unk_vfn_97
     */
    virtual void __unk_vfn_97();
    /**
     * @vftbl 106
     * @symbol ?setSitting\@Parrot\@\@UEAAX_N\@Z
     */
    virtual void setSitting(bool);
    /**
     * @vftbl 117
     * @symbol ?playAmbientSound\@Parrot\@\@UEAAXXZ
     */
    virtual void playAmbientSound();
    /**
     * @vftbl 118
     * @symbol ?getAmbientSound\@Parrot\@\@UEBA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getAmbientSound() const;
    /**
     * @vftbl 119
     * @symbol ?isInvulnerableTo\@Parrot\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /**
     * @vftbl 162
     * @symbol __unk_vfn_162
     */
    virtual void __unk_vfn_162();
    /**
     * @vftbl 172
     * @symbol ?canBePulledIntoVehicle\@Parrot\@\@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const;
    /**
     * @vftbl 174
     * @symbol __unk_vfn_174
     */
    virtual void __unk_vfn_174();
    /**
     * @vftbl 198
     * @symbol __unk_vfn_198
     */
    virtual void __unk_vfn_198();
    /**
     * @vftbl 199
     * @symbol __unk_vfn_199
     */
    virtual void __unk_vfn_199();
    /**
     * @vftbl 215
     * @symbol __unk_vfn_215
     */
    virtual void __unk_vfn_215();
    /**
     * @vftbl 218
     * @symbol __unk_vfn_218
     */
    virtual void __unk_vfn_218();
    /**
     * @vftbl 235
     * @symbol __unk_vfn_235
     */
    virtual void __unk_vfn_235();
    /**
     * @vftbl 241
     * @symbol ?_playStepSound\@Parrot\@\@MEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void _playStepSound(class BlockPos const &, class Block const &);
    /**
     * @vftbl 243
     * @symbol __unk_vfn_243
     */
    virtual void __unk_vfn_243();
    /**
     * @vftbl 248
     * @symbol __unk_vfn_248
     */
    virtual void __unk_vfn_248();
    /**
     * @vftbl 270
     * @symbol __unk_vfn_270
     */
    virtual void __unk_vfn_270();
    /**
     * @vftbl 274
     * @symbol __unk_vfn_274
     */
    virtual void __unk_vfn_274();
    /**
     * @vftbl 306
     * @symbol ?_getWalkTargetValue\@Parrot\@\@UEAAMAEBVBlockPos\@\@\@Z
     */
    virtual float _getWalkTargetValue(class BlockPos const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PARROT
    /**
     * @symbol ?_makeFlySound\@Parrot\@\@MEBA_NXZ
     */
    MCVAPI bool _makeFlySound() const;
#endif
    /**
     * @symbol ??0Parrot\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Parrot(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?getFlap\@Parrot\@\@QEBAMXZ
     */
    MCAPI float getFlap() const;
    /**
     * @symbol ?getFlapSpeed\@Parrot\@\@QEBAMXZ
     */
    MCAPI float getFlapSpeed() const;
    /**
     * @symbol ?postAiStep\@Parrot\@\@QEAAXXZ
     */
    MCAPI void postAiStep();

};
