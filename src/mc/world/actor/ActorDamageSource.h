#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorCategory.h"
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
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause> mCause;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ActorDamageSource() = default;

    virtual bool isEntitySource() const;

    virtual bool isChildEntitySource() const;

    virtual bool isBlockSource() const;

    virtual bool isFire() const;

    virtual bool isReducedByResistanceEffect() const;

    virtual bool isReducedByEnchantReduction() const;

    virtual bool isReducedByArmorReduction() const;

    virtual bool isFallingBlockDamage() const;

    virtual bool isFallDamage() const;

    virtual ::std::pair<::std::string, ::std::vector<::std::string>>
    getDeathMessage(::std::string deadName, ::Actor* dead) const;

    virtual bool getIsCreative() const;

    virtual bool getIsWorldBuilder() const;

    virtual ::ActorUniqueID getEntityUniqueID() const;

    virtual ::ActorType getEntityType() const;

    virtual ::ActorCategory getEntityCategories() const;

    virtual bool getDamagingEntityIsCreative() const;

    virtual bool getDamagingEntityIsWorldBuilder() const;

    virtual ::ActorUniqueID getDamagingEntityUniqueID() const;

    virtual ::ActorType getDamagingEntityType() const;

    virtual ::ActorCategory getDamagingEntityCategories() const;

    virtual ::std::unique_ptr<::ActorDamageSource> clone() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::std::pair<::std::string, ::SharedTypes::Legacy::ActorDamageCause>>
    generateDamageCauseCommandEnum(::std::optional<::Scripting::Version> scriptVersion);

    MCAPI static ::std::vector<::std::pair<::std::string, ::SharedTypes::Legacy::ActorDamageCause>>
    generateNewDamageCauseCommandEnum(::std::optional<::Scripting::Version> scriptVersion);

    MCAPI static ::std::vector<::VersionedActorDamageCause> generateVersionedDamageCauseCommandEnum();

    MCAPI static ::SharedTypes::Legacy::ActorDamageCause
    getCauseMapVersionCutoffInclusive(::Scripting::Version scriptingVersion);

    MCAPI static ::SharedTypes::Legacy::ActorDamageCause lookupCause(::std::string const& name);

    MCAPI static ::std::string const& lookupCauseName(::SharedTypes::Legacy::ActorDamageCause cause);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isEntitySource() const;

    MCFOLD bool $isChildEntitySource() const;

    MCFOLD bool $isBlockSource() const;

    MCAPI bool $isFire() const;

    MCAPI bool $isReducedByResistanceEffect() const;

    MCAPI bool $isReducedByEnchantReduction() const;

    MCAPI bool $isReducedByArmorReduction() const;

    MCAPI bool $isFallingBlockDamage() const;

    MCAPI bool $isFallDamage() const;

    MCAPI ::std::pair<::std::string, ::std::vector<::std::string>>
    $getDeathMessage(::std::string deadName, ::Actor* dead) const;

    MCFOLD bool $getIsCreative() const;

    MCFOLD bool $getIsWorldBuilder() const;

    MCFOLD ::ActorUniqueID $getEntityUniqueID() const;

    MCFOLD ::ActorType $getEntityType() const;

    MCFOLD ::ActorCategory $getEntityCategories() const;

    MCFOLD bool $getDamagingEntityIsCreative() const;

    MCFOLD bool $getDamagingEntityIsWorldBuilder() const;

    MCFOLD ::ActorUniqueID $getDamagingEntityUniqueID() const;

    MCFOLD ::ActorType $getDamagingEntityType() const;

    MCFOLD ::ActorCategory $getDamagingEntityCategories() const;

    MCAPI ::std::unique_ptr<::ActorDamageSource> $clone() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
