#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorUniqueID.h"
#include "mc/world/actor/player/Player.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
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
struct ActorUniqueID;
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
    PlayerCommandOrigin(::Level& level, ::ActorUniqueID playerId) : mPlayerId(playerId), mLevel(level) {}
    PlayerCommandOrigin(::Player& player) : mPlayerId(player.getOrCreateUniqueID()), mLevel(player.getLevel()) {}

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerCommandOrigin() /*override*/ = default;

    // vIndex: 1
    virtual ::std::string const& getRequestId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 3
    virtual ::BlockPos getBlockPosition() const /*override*/;

    // vIndex: 4
    virtual ::Vec3 getWorldPosition() const /*override*/;

    // vIndex: 5
    virtual ::std::optional<::Vec2> getRotation() const /*override*/;

    // vIndex: 6
    virtual ::Level* getLevel() const /*override*/;

    // vIndex: 7
    virtual ::Dimension* getDimension() const /*override*/;

    // vIndex: 8
    virtual ::Actor* getEntity() const /*override*/;

    // vIndex: 9
    virtual ::CommandPermissionLevel getPermissionsLevel() const /*override*/;

    // vIndex: 10
    virtual ::std::unique_ptr<::CommandOrigin> clone() const /*override*/;

    // vIndex: 11
    virtual ::std::optional<::BlockPos> getCursorHitBlockPos() const /*override*/;

    // vIndex: 12
    virtual ::std::optional<::Vec3> getCursorHitPos() const /*override*/;

    // vIndex: 15
    virtual bool canUseAbility(::AbilitiesIndex ability) const /*override*/;

    // vIndex: 18
    virtual bool isSelectorExpansionAllowed() const /*override*/;

    // vIndex: 19
    virtual ::NetworkIdentifier const& getSourceId() const /*override*/;

    // vIndex: 20
    virtual ::SubClientId getSourceSubId() const /*override*/;

    // vIndex: 22
    virtual ::CommandOriginIdentity getIdentity() const /*override*/;

    // vIndex: 23
    virtual ::CommandOriginType getOriginType() const /*override*/;

    // vIndex: 29
    virtual ::CompoundTag serialize() const /*override*/;

    // vIndex: 30
    virtual bool isValid() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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

    MCAPI bool $canUseAbility(::AbilitiesIndex ability) const;

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
