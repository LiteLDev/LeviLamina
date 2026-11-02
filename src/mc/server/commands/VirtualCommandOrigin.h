#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/CommandPositionFloat.h"
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
struct CommandOriginIdentity;
// clang-format on

class VirtualCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                            mPos;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandOrigin>> mOrigin;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandOrigin>> mOutputReceiver;
    ::ll::TypedStorage<4, 16, ::CommandPositionFloat>            mCommandPosition;
    ::ll::TypedStorage<4, 4, int>                                mVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    VirtualCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
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

    virtual ::CommandOrigin const& getOutputReceiver() const /*override*/;

    virtual bool hasMessagePerms() const /*override*/;

    virtual bool hasChatPerms() const /*override*/;

    virtual bool hasTellPerms() const /*override*/;

    virtual bool canUseAbility(::AbilitiesIndex abilityIndex) const /*override*/;

    virtual bool canUseCommandsWithoutCheatsEnabled() const /*override*/;

    virtual bool isSelectorExpansionAllowed() const /*override*/;

    virtual ::CommandOriginType getOriginType() const /*override*/;

    virtual ::NetworkIdentifier const& getSourceId() const /*override*/;

    virtual ::CommandOriginIdentity getIdentity() const /*override*/;

    virtual void updateValues() /*override*/;

    virtual ::Vec3 const getExecutePosition(int version, ::CommandPositionFloat const& commandPosition) const
        /*override*/;

    virtual ::CompoundTag serialize() const /*override*/;

    virtual bool isValid() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VirtualCommandOrigin(
        ::CommandOrigin const&        outputReceiver,
        ::Actor&                      entity,
        ::CommandPositionFloat const& commandPosition,
        int                           version
    );

    MCNAPI VirtualCommandOrigin(
        ::CommandOrigin const&        outputReceiver,
        ::CommandOrigin const&        source,
        ::CommandPositionFloat const& commandPosition,
        int                           version
    );

    MCNAPI VirtualCommandOrigin(
        ::std::unique_ptr<::CommandOrigin> outputReceiver,
        ::std::unique_ptr<::CommandOrigin> source,
        ::CommandPositionFloat const&      commandPosition,
        int                                version
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::CommandOrigin const&        outputReceiver,
        ::Actor&                      entity,
        ::CommandPositionFloat const& commandPosition,
        int                           version
    );

    MCNAPI void* $ctor(
        ::CommandOrigin const&        outputReceiver,
        ::CommandOrigin const&        source,
        ::CommandPositionFloat const& commandPosition,
        int                           version
    );

    MCNAPI void* $ctor(
        ::std::unique_ptr<::CommandOrigin> outputReceiver,
        ::std::unique_ptr<::CommandOrigin> source,
        ::CommandPositionFloat const&      commandPosition,
        int                                version
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string const& $getRequestId() const;

    MCNAPI ::std::string $getName() const;

    MCNAPI ::BlockPos $getBlockPosition() const;

    MCNAPI ::Vec3 $getWorldPosition() const;

    MCNAPI ::std::optional<::Vec2> $getRotation() const;

    MCNAPI ::Level* $getLevel() const;

    MCNAPI ::Dimension* $getDimension() const;

    MCNAPI ::Actor* $getEntity() const;

    MCNAPI ::CommandPermissionLevel $getPermissionsLevel() const;

    MCNAPI ::std::unique_ptr<::CommandOrigin> $clone() const;

    MCNAPI ::CommandOrigin const& $getOutputReceiver() const;

    MCNAPI bool $hasMessagePerms() const;

    MCNAPI bool $hasChatPerms() const;

    MCNAPI bool $hasTellPerms() const;

    MCNAPI bool $canUseAbility(::AbilitiesIndex abilityIndex) const;

    MCNAPI bool $canUseCommandsWithoutCheatsEnabled() const;

    MCNAPI bool $isSelectorExpansionAllowed() const;

    MCNAPI ::CommandOriginType $getOriginType() const;

    MCNAPI ::NetworkIdentifier const& $getSourceId() const;

    MCNAPI ::CommandOriginIdentity $getIdentity() const;

    MCNAPI void $updateValues();

    MCNAPI ::Vec3 const $getExecutePosition(int version, ::CommandPositionFloat const& commandPosition) const;

    MCNAPI ::CompoundTag $serialize() const;

    MCNAPI bool $isValid() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
