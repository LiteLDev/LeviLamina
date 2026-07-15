#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/player/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CompoundTag;
class Dimension;
class Level;
class Vec2;
class Vec3;
// clang-format on

class PrecompiledCommandOrigin : public ::CommandOrigin {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrecompiledCommandOrigin() /*override*/ = default;

    virtual ::std::string const& getRequestId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ::BlockPos getBlockPosition() const /*override*/;

    virtual ::Vec3 getWorldPosition() const /*override*/;

    virtual ::std::optional<::Vec2> getRotation() const /*override*/;

    virtual ::Level* getLevel() const /*override*/;

    virtual ::Dimension* getDimension() const /*override*/;

    virtual ::Actor* getEntity() const /*override*/;

    virtual ::CommandPermissionLevel getPermissionsLevel() const /*override*/;

    virtual ::std::unique_ptr<::CommandOrigin> clone() const /*override*/;

    virtual ::CommandOriginType getOriginType() const /*override*/;

    virtual bool canUseCommandsWithoutCheatsEnabled() const /*override*/;

    virtual bool isSelectorExpansionAllowed() const /*override*/;

    virtual bool hasChatPerms() const /*override*/;

    virtual bool hasTellPerms() const /*override*/;

    virtual bool canUseAbility(::AbilitiesIndex abilityIndex) const /*override*/;

    virtual bool isWorldBuilder() const /*override*/;

    virtual ::CompoundTag serialize() const /*override*/;

    virtual bool isValid() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::string const& $getRequestId() const;

    MCFOLD ::std::string $getName() const;

    MCFOLD ::BlockPos $getBlockPosition() const;

    MCFOLD ::Vec3 $getWorldPosition() const;

    MCFOLD ::std::optional<::Vec2> $getRotation() const;

    MCFOLD ::Level* $getLevel() const;

    MCFOLD ::Dimension* $getDimension() const;

    MCFOLD ::Actor* $getEntity() const;

    MCFOLD ::CommandPermissionLevel $getPermissionsLevel() const;

    MCAPI ::std::unique_ptr<::CommandOrigin> $clone() const;

    MCFOLD ::CommandOriginType $getOriginType() const;

    MCFOLD bool $canUseCommandsWithoutCheatsEnabled() const;

    MCFOLD bool $isSelectorExpansionAllowed() const;

    MCFOLD bool $hasChatPerms() const;

    MCFOLD bool $hasTellPerms() const;

    MCFOLD bool $canUseAbility(::AbilitiesIndex abilityIndex) const;

    MCFOLD bool $isWorldBuilder() const;

    MCFOLD ::CompoundTag $serialize() const;

    MCFOLD bool $isValid() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
