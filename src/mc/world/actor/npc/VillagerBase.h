#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/Mob.h"

class VillagerBase : public ::Mob {
public:
    // VillagerBase inner types declare
    // clang-format off

    // clang-format on

    // VillagerBase inner types define
    enum class BiomeType {};

public:
    // prevent constructor by default
    VillagerBase& operator=(VillagerBase const&) = delete;
    VillagerBase(VillagerBase const&)            = delete;
    VillagerBase()                               = delete;

public:
    /**
     * @vftbl 13
     * @symbol ?reloadComponents\@VillagerBase\@\@UEAAXW4InitializationMethod\@Actor\@\@AEBVVariantParameterList\@\@\@Z
     */
    virtual void reloadComponents(enum class Actor::InitializationMethod, class VariantParameterList const&); // NOLINT
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
     * @vftbl 124
     * @symbol ?onLightningHit\@VillagerBase\@\@UEAAXXZ
     */
    virtual void onLightningHit(); // NOLINT
    /**
     * @vftbl 127
     * @symbol ?handleEntityEvent\@VillagerBase\@\@UEAAXW4ActorEvent\@\@H\@Z
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
     * @vftbl 239
     * @symbol __unk_vfn_239
     */
    virtual void __unk_vfn_239(); // NOLINT
    /**
     * @vftbl 243
     * @symbol ?readAdditionalSaveData\@VillagerBase\@\@UEAAXAEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void readAdditionalSaveData(class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 244
     * @symbol ?addAdditionalSaveData\@VillagerBase\@\@UEBAXAEAVCompoundTag\@\@\@Z
     */
    virtual void addAdditionalSaveData(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 247
     * @symbol __unk_vfn_247
     */
    virtual void __unk_vfn_247(); // NOLINT
    /**
     * @vftbl 252
     * @symbol ?_onSizeUpdated\@VillagerBase\@\@EEAAXXZ
     */
    virtual void _onSizeUpdated(); // NOLINT
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
     * @vftbl 319
     * @symbol ?_serverAiMobStep\@VillagerBase\@\@MEAAXXZ
     */
    virtual void _serverAiMobStep(); // NOLINT
    /**
     * @vftbl 323
     * @symbol __unk_vfn_323
     */
    virtual void __unk_vfn_323(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_VILLAGERBASE
    /**
     * @symbol ?interactPreventDefault\@VillagerBase\@\@UEAA_NXZ
     */
    MCVAPI bool interactPreventDefault(); // NOLINT
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~VillagerBase(); // NOLINT
#endif
    /**
     * @symbol
     * ??0VillagerBase\@\@QEAA\@PEAVActorDefinitionGroup\@\@AEBUActorDefinitionIdentifier\@\@AEAVEntityContext\@\@\@Z
     */
    MCAPI
    VillagerBase(class ActorDefinitionGroup*, struct ActorDefinitionIdentifier const&, class EntityContext&); // NOLINT
    /**
     * @symbol ?consumeLoveFood\@VillagerBase\@\@QEAAXXZ
     */
    MCAPI void consumeLoveFood(); // NOLINT
    /**
     * @symbol ?getBreedingStackIndex\@VillagerBase\@\@QEBAHXZ
     */
    MCAPI int getBreedingStackIndex() const; // NOLINT
    /**
     * @symbol ?isChasing\@VillagerBase\@\@QEBA_NXZ
     */
    MCAPI bool isChasing() const; // NOLINT
    /**
     * @symbol ?isWillingToBreed\@VillagerBase\@\@QEAA_N_N\@Z
     */
    MCAPI bool isWillingToBreed(bool); // NOLINT
    /**
     * @symbol ?setChasing\@VillagerBase\@\@QEAAX_N\@Z
     */
    MCAPI void setChasing(bool); // NOLINT
    /**
     * @symbol ?setWillingToBreed\@VillagerBase\@\@QEAAX_N\@Z
     */
    MCAPI void setWillingToBreed(bool); // NOLINT
    /**
     * @symbol ?stopGoals\@VillagerBase\@\@QEAAXXZ
     */
    MCAPI void stopGoals(); // NOLINT
    /**
     * @symbol
     * ?BiomeStrToEnum\@VillagerBase\@\@SA?AW4BiomeType\@1\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static enum class VillagerBase::BiomeType BiomeStrToEnum(std::string const&); // NOLINT

    // private:
    /**
     * @symbol ?_addParticlesAroundSelf\@VillagerBase\@\@AEAAXW4ParticleType\@\@\@Z
     */
    MCAPI void _addParticlesAroundSelf(enum class ParticleType); // NOLINT

private:
};
