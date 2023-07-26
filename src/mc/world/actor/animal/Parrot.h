#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/animal/Animal.h"

class Parrot : public ::Animal {

public:
    // prevent constructor by default
    Parrot& operator=(Parrot const&) = delete;
    Parrot(Parrot const&)            = delete;
    Parrot()                         = delete;

public:
    /**
     * @vftbl 11
     * @symbol ?reloadHardcodedClient\@Parrot\@\@MEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
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
     * @symbol ?getShadowRadius\@Parrot\@\@UEBAMXZ
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
     * @vftbl 107
     * @symbol ?setSitting\@Parrot\@\@UEAAX_N\@Z
     */
    virtual void setSitting(bool); // NOLINT
    /**
     * @vftbl 118
     * @symbol ?playAmbientSound\@Parrot\@\@UEAAXXZ
     */
    virtual void playAmbientSound(); // NOLINT
    /**
     * @vftbl 119
     * @symbol ?getAmbientSound\@Parrot\@\@UEBA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent getAmbientSound() const; // NOLINT
    /**
     * @vftbl 120
     * @symbol ?isInvulnerableTo\@Parrot\@\@UEBA_NAEBVActorDamageSource\@\@\@Z
     */
    virtual bool isInvulnerableTo(class ActorDamageSource const&) const; // NOLINT
    /**
     * @vftbl 164
     * @symbol __unk_vfn_164
     */
    virtual void __unk_vfn_164(); // NOLINT
    /**
     * @vftbl 176
     * @symbol ?canBePulledIntoVehicle\@Parrot\@\@UEBA_NXZ
     */
    virtual bool canBePulledIntoVehicle() const; // NOLINT
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
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239(); // NOLINT
    /**
     * @vftbl 245
     * @symbol ?_playStepSound\@Parrot\@\@MEAAXAEBVBlockPos\@\@AEBVBlock\@\@\@Z
     */
    virtual void _playStepSound(class BlockPos const&, class Block const&); // NOLINT
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
     * @vftbl 276
     * @symbol __unk_vfn_276
     */
    virtual void __unk_vfn_276(); // NOLINT
    /**
     * @vftbl 280
     * @symbol __unk_vfn_280
     */
    virtual void __unk_vfn_280(); // NOLINT
    /**
     * @vftbl 312
     * @symbol ?_getWalkTargetValue\@Parrot\@\@UEAAMAEBVBlockPos\@\@\@Z
     */
    virtual float _getWalkTargetValue(class BlockPos const&); // NOLINT
    /**
     * @vftbl 323
     * @symbol __unk_vfn_323
     */
    virtual void __unk_vfn_323(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PARROT
    /**
     * @symbol ?_makeFlySound\@Parrot\@\@MEBA_NXZ
     */
    MCVAPI bool _makeFlySound() const; // NOLINT
#endif
    /**
     * @symbol ??0Parrot\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI Parrot(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&); // NOLINT
    /**
     * @symbol ?getFlap\@Parrot\@\@QEBAMXZ
     */
    MCAPI float getFlap() const; // NOLINT
    /**
     * @symbol ?getFlapSpeed\@Parrot\@\@QEBAMXZ
     */
    MCAPI float getFlapSpeed() const; // NOLINT
    /**
     * @symbol ?postAiStep\@Parrot\@\@QEAAXXZ
     */
    MCAPI void postAiStep(); // NOLINT
};
