#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class Squid : public ::Mob {

public:
    // prevent constructor by default
    Squid& operator=(Squid const&) = delete;
    Squid(Squid const&)            = delete;
    Squid()                        = delete;

public:
    /**
     * @vftbl 10
     * @symbol ?reloadHardcoded\@Squid\@\@MEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
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
     * @vftbl 127
     * @symbol ?handleEntityEvent\@Squid\@\@UEAAXW4ActorEvent\@\@H\@Z
     */
    virtual void handleEntityEvent(enum class ActorEvent, int); // NOLINT
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
     * @vftbl 237
     * @symbol ?updateEntitySpecificMolangVariables\@Squid\@\@UEAAXAEAVRenderParams\@\@\@Z
     */
    virtual void updateEntitySpecificMolangVariables(class RenderParams&); // NOLINT
    /**
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239(); // NOLINT
    /**
     * @vftbl 240
     * @symbol ?_hurt\@Squid\@\@MEAA_NAEBVActorDamageSource\@\@M_N1\@Z
     */
    virtual bool _hurt(class ActorDamageSource const&, float, bool, bool); // NOLINT
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
     * @vftbl 264
     * @symbol ?aiStep\@Squid\@\@UEAAXXZ
     */
    virtual void aiStep(); // NOLINT
    /**
     * @vftbl 268
     * @symbol ?checkSpawnRules\@Squid\@\@UEAA_N_N\@Z
     */
    virtual bool checkSpawnRules(bool); // NOLINT
    /**
     * @vftbl 269
     * @symbol ?checkSpawnObstruction\@Squid\@\@UEBA_NXZ
     */
    virtual bool checkSpawnObstruction() const; // NOLINT
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
     * @vftbl 323
     * @symbol __unk_vfn_323
     */
    virtual void __unk_vfn_323(); // NOLINT
    /**
     * @vftbl 325
     * @symbol ?_getInkSquirtSoundEvent\@Squid\@\@MEBA?AW4LevelSoundEvent\@\@XZ
     */
    virtual enum class LevelSoundEvent _getInkSquirtSoundEvent() const; // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SQUID
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Squid(); // NOLINT
#endif
    /**
     * @symbol
     * ??0Squid\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI
    Squid(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&, class mce::Color const&); // NOLINT
    /**
     * @symbol ?postAiStep\@Squid\@\@QEAAXXZ
     */
    MCAPI void postAiStep(); // NOLINT
    /**
     * @symbol ?spawnInkParticles\@Squid\@\@QEAAXXZ
     */
    MCAPI void spawnInkParticles(); // NOLINT

    // private:
    /**
     * @symbol ?_randomInkDir\@Squid\@\@AEAA?AVVec3\@\@XZ
     */
    MCAPI class Vec3 _randomInkDir(); // NOLINT

private:
};
