#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class VersionedActorDamageCause;
struct ActorUniqueID;
namespace Scripting { struct Version; }
// clang-format on

class ActorDamageSource {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ActorDamageCause> mCause;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDamageSource& operator=(ActorDamageSource const&);
    ActorDamageSource(ActorDamageSource const&);
    ActorDamageSource();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorDamageSource();

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
    virtual ::std::pair<::std::string, ::std::vector<::std::string>>
    getDeathMessage(::std::string deadName, ::Actor* dead) const;

    // vIndex: 11
    virtual bool getIsCreative() const;

    // vIndex: 12
    virtual bool getIsWorldBuilder() const;

    // vIndex: 13
    virtual ::ActorUniqueID getEntityUniqueID() const;

    // vIndex: 14
    virtual ::ActorType getEntityType() const;

    // vIndex: 15
    virtual ::ActorCategory getEntityCategories() const;

    // vIndex: 16
    virtual bool getDamagingEntityIsCreative() const;

    // vIndex: 17
    virtual bool getDamagingEntityIsWorldBuilder() const;

    // vIndex: 18
    virtual ::ActorUniqueID getDamagingEntityUniqueID() const;

    // vIndex: 19
    virtual ::ActorType getDamagingEntityType() const;

    // vIndex: 20
    virtual ::ActorCategory getDamagingEntityCategories() const;

    // vIndex: 21
    virtual ::std::unique_ptr<::ActorDamageSource> clone() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActorDamageSource(::ActorDamageCause cause);

    MCAPI ::ActorDamageCause getCause() const;

    MCAPI void setCause(::ActorDamageCause cause);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::std::pair<::std::string, ::ActorDamageCause>>
    generateDamageCauseCommandEnum(::std::optional<::Scripting::Version> scriptVersion);

    MCAPI static ::std::vector<::std::pair<::std::string, ::ActorDamageCause>>
    generateNewDamageCauseCommandEnum(::std::optional<::Scripting::Version> scriptVersion);

    MCAPI static ::std::vector<::VersionedActorDamageCause> generateVersionedDamageCauseCommandEnum();

    MCAPI static ::ActorDamageCause getCauseMapVersionCutoffInclusive(::Scripting::Version scriptingVersion);

    MCAPI static bool isDamageCausedByMob(::ActorDamageCause cause);

    MCAPI static ::ActorDamageCause lookupCause(::std::string const& name);

    MCAPI static ::std::string const& lookupCauseName(::ActorDamageCause cause);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorDamageCause cause);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isEntitySource() const;

    MCAPI bool $isChildEntitySource() const;

    MCAPI bool $isBlockSource() const;

    MCAPI bool $isFire() const;

    MCAPI bool $isReducedByResistanceEffect() const;

    MCAPI bool $isReducedByEnchantReduction() const;

    MCAPI bool $isReducedByArmorReduction() const;

    MCAPI bool $isFallingBlockDamage() const;

    MCAPI bool $isFallDamage() const;

    MCAPI ::std::pair<::std::string, ::std::vector<::std::string>>
    $getDeathMessage(::std::string deadName, ::Actor* dead) const;

    MCAPI bool $getIsCreative() const;

    MCAPI bool $getIsWorldBuilder() const;

    MCAPI ::ActorUniqueID $getEntityUniqueID() const;

    MCAPI ::ActorType $getEntityType() const;

    MCAPI ::ActorCategory $getEntityCategories() const;

    MCAPI bool $getDamagingEntityIsCreative() const;

    MCAPI bool $getDamagingEntityIsWorldBuilder() const;

    MCAPI ::ActorUniqueID $getDamagingEntityUniqueID() const;

    MCAPI ::ActorType $getDamagingEntityType() const;

    MCAPI ::ActorCategory $getDamagingEntityCategories() const;

    MCAPI ::std::unique_ptr<::ActorDamageSource> $clone() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
