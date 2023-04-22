/**
 * @file  DragonFireball.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Actor.hpp"
#include "Fireball.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class DragonFireball.
 *
 */
class DragonFireball : public Fireball {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DRAGONFIREBALL
public:
    class DragonFireball& operator=(class DragonFireball const &) = delete;
    DragonFireball(class DragonFireball const &) = delete;
    DragonFireball() = delete;
#endif

public:
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
     * @vftbl 95
     * @symbol ?isPickable\@DragonFireball\@\@UEAA_NXZ
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
     * @vftbl 260
     * @symbol __unk_vfn_260
     */
    virtual void __unk_vfn_260();
    /**
     * @vftbl 261
     * @symbol ?_hurt\@DragonFireball\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
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
     * @vftbl 277
     * @symbol __unk_vfn_277
     */
    virtual void __unk_vfn_277();
    /**
     * @vftbl 278
     * @symbol ?getTrailParticle\@DragonFireball\@\@MEAA?AW4ParticleType\@\@XZ
     */
    virtual enum class ParticleType getTrailParticle();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_DRAGONFIREBALL
    /**
     * @symbol ?shouldBurn\@DragonFireball\@\@MEAA_NXZ
     */
    MCVAPI bool shouldBurn();
#endif
    /**
     * @symbol ??0DragonFireball\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI DragonFireball(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    /**
     * @symbol ?SPLASH_RANGE\@DragonFireball\@\@2MA
     */
    MCAPI static float SPLASH_RANGE;

};
