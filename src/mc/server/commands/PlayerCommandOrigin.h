#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/legacy/ActorUniqueID.h"
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
class NetworkIdentifier;
class Vec2;
class Vec3;
struct CommandOriginIdentity;
// clang-format on

class PlayerCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mPlayerId;
    ::ll::TypedStorage<8, 8, ::Level&>        mLevel;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerCommandOrigin& operator=(PlayerCommandOrigin const&);
    PlayerCommandOrigin(PlayerCommandOrigin const&);
    PlayerCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerCommandOrigin() /*override*/ = default;

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

    virtual ::std::optional<::BlockPos> getCursorHitBlockPos() const /*override*/;

    virtual ::std::optional<::Vec3> getCursorHitPos() const /*override*/;

    virtual bool canUseAbility(::AbilitiesIndex ability) const /*override*/;

    virtual bool isSelectorExpansionAllowed() const /*override*/;

    virtual ::NetworkIdentifier const& getSourceId() const /*override*/;

    virtual ::SubClientId getSourceSubId() const /*override*/;

    virtual ::CommandOriginIdentity getIdentity() const /*override*/;

    virtual ::CommandOriginType getOriginType() const /*override*/;

    virtual ::CompoundTag serialize() const /*override*/;

    virtual bool isValid() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::string const& $getRequestId() const;

    MCAPI ::std::string $getName() const;

    MCAPI ::BlockPos $getBlockPosition() const;

    MCAPI ::Vec3 $getWorldPosition() const;

    MCAPI ::std::optional<::Vec2> $getRotation() const;

    MCFOLD ::Level* $getLevel() const;

    MCAPI ::Dimension* $getDimension() const;

    MCAPI ::Actor* $getEntity() const;

    MCAPI ::CommandPermissionLevel $getPermissionsLevel() const;

    MCAPI ::std::unique_ptr<::CommandOrigin> $clone() const;

    MCAPI ::std::optional<::BlockPos> $getCursorHitBlockPos() const;

    MCAPI ::std::optional<::Vec3> $getCursorHitPos() const;

#ifdef LL_PLAT_S
    MCAPI bool $canUseAbility(::AbilitiesIndex ability) const;
#endif

    MCFOLD bool $isSelectorExpansionAllowed() const;

    MCAPI ::NetworkIdentifier const& $getSourceId() const;

    MCAPI ::SubClientId $getSourceSubId() const;

    MCAPI ::CommandOriginIdentity $getIdentity() const;

    MCFOLD ::CommandOriginType $getOriginType() const;

    MCAPI ::CompoundTag $serialize() const;

    MCFOLD bool $isValid() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
