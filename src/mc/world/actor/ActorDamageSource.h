#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/types/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct Version; }
// clang-format on

class ActorDamageSource {
public:
    // prevent constructor by default
    ActorDamageSource& operator=(ActorDamageSource const&);
    ActorDamageSource(ActorDamageSource const&);
    ActorDamageSource();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorDamageSource() = default;

    // vIndex: 1
    virtual bool isEntitySource() const;

    // vIndex: 2
    virtual bool isChildEntitySource() const;

    // vIndex: 3
    virtual bool isBlockSource() const;

    // vIndex: 4
    virtual bool isFire() const;

    // vIndex: 5
    virtual bool isReducedByResistanceEffect() const;

    // vIndex: 6
    virtual bool isReducedByEnchantReduction() const;

    // vIndex: 7
    virtual bool isReducedByArmorReduction() const;

    // vIndex: 8
    virtual bool isFallingBlockDamage() const;

    // vIndex: 9
    virtual bool isFallDamage() const;

    // vIndex: 10
    virtual std::pair<std::string, std::vector<std::string>>
    getDeathMessage(std::string deadName, class Actor* dead) const;

    // vIndex: 11
    virtual bool getIsCreative() const;

    // vIndex: 12
    virtual bool getIsWorldBuilder() const;

    // vIndex: 13
    virtual struct ActorUniqueID getEntityUniqueID() const;

    // vIndex: 14
    virtual ::ActorType getEntityType() const;

    // vIndex: 15
    virtual ::ActorCategory getEntityCategories() const;

    // vIndex: 16
    virtual bool getDamagingEntityIsCreative() const;

    // vIndex: 17
    virtual bool getDamagingEntityIsWorldBuilder() const;

    // vIndex: 18
    virtual struct ActorUniqueID getDamagingEntityUniqueID() const;

    // vIndex: 19
    virtual ::ActorType getDamagingEntityType() const;

    // vIndex: 20
    virtual ::ActorCategory getDamagingEntityCategories() const;

    // vIndex: 21
    virtual std::unique_ptr<class ActorDamageSource> clone() const;

    MCAPI explicit ActorDamageSource(::ActorDamageCause cause);

    MCAPI ::ActorDamageCause getCause() const;

    MCAPI void setCause(::ActorDamageCause cause);

    MCAPI static std::vector<std::pair<std::string, ::ActorDamageCause>>
    generateDamageCauseCommandEnum(std::optional<struct Scripting::Version> scriptVersion);

    MCAPI static std::vector<std::pair<std::string, ::ActorDamageCause>>
    generateNewDamageCauseCommandEnum(std::optional<struct Scripting::Version> scriptVersion);

    MCAPI static std::vector<class VersionedActorDamageCause> generateVersionedDamageCauseCommandEnum();

    MCAPI static ::ActorDamageCause getCauseMapVersionCutoffInclusive(struct Scripting::Version scriptingVersion);

    MCAPI static bool isDamageCausedByMob(::ActorDamageCause cause);

    MCAPI static ::ActorDamageCause lookupCause(std::string const& name);

    MCAPI static std::string const& lookupCauseName(::ActorDamageCause cause);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(::ActorDamageCause cause);

    MCAPI std::unique_ptr<class ActorDamageSource> clone$() const;

    MCAPI ::ActorCategory getDamagingEntityCategories$() const;

    MCAPI bool getDamagingEntityIsCreative$() const;

    MCAPI bool getDamagingEntityIsWorldBuilder$() const;

    MCAPI ::ActorType getDamagingEntityType$() const;

    MCAPI struct ActorUniqueID getDamagingEntityUniqueID$() const;

    MCAPI std::pair<std::string, std::vector<std::string>>
          getDeathMessage$(std::string deadName, class Actor* dead) const;

    MCAPI ::ActorCategory getEntityCategories$() const;

    MCAPI ::ActorType getEntityType$() const;

    MCAPI struct ActorUniqueID getEntityUniqueID$() const;

    MCAPI bool getIsCreative$() const;

    MCAPI bool getIsWorldBuilder$() const;

    MCAPI bool isBlockSource$() const;

    MCAPI bool isChildEntitySource$() const;

    MCAPI bool isEntitySource$() const;

    MCAPI bool isFallDamage$() const;

    MCAPI bool isFallingBlockDamage$() const;

    MCAPI bool isFire$() const;

    MCAPI bool isReducedByArmorReduction$() const;

    MCAPI bool isReducedByEnchantReduction$() const;

    MCAPI bool isReducedByResistanceEffect$() const;

    // NOLINTEND
};
