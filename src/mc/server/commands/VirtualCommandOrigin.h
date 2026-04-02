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
class ServerLevel;
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

    virtual ~VirtualCommandOrigin() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VirtualCommandOrigin(
        ::CommandOrigin const&        outputReceiver,
        ::Actor&                      entity,
        ::CommandPositionFloat const& commandPosition,
        int                           version
    );

    MCAPI VirtualCommandOrigin(
        ::CommandOrigin const&        outputReceiver,
        ::CommandOrigin const&        source,
        ::CommandPositionFloat const& commandPosition,
        int                           version
    );

    MCAPI VirtualCommandOrigin(
        ::std::unique_ptr<::CommandOrigin> outputReceiver,
        ::std::unique_ptr<::CommandOrigin> source,
        ::CommandPositionFloat const&      commandPosition,
        int                                version
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::VirtualCommandOrigin> load(::CompoundTag const& tag, ::ServerLevel& level);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::CommandOrigin const&        outputReceiver,
        ::Actor&                      entity,
        ::CommandPositionFloat const& commandPosition,
        int                           version
    );

    MCAPI void* $ctor(
        ::CommandOrigin const&        outputReceiver,
        ::CommandOrigin const&        source,
        ::CommandPositionFloat const& commandPosition,
        int                           version
    );

    MCAPI void* $ctor(
        ::std::unique_ptr<::CommandOrigin> outputReceiver,
        ::std::unique_ptr<::CommandOrigin> source,
        ::CommandPositionFloat const&      commandPosition,
        int                                version
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string const& $getRequestId() const;

    MCAPI ::std::string $getName() const;

    MCAPI ::BlockPos $getBlockPosition() const;

    MCAPI ::Vec3 $getWorldPosition() const;

    MCAPI ::std::optional<::Vec2> $getRotation() const;

    MCFOLD ::Level* $getLevel() const;

    MCFOLD ::Dimension* $getDimension() const;

    MCAPI ::Actor* $getEntity() const;

    MCAPI ::CommandPermissionLevel $getPermissionsLevel() const;

    MCAPI ::std::unique_ptr<::CommandOrigin> $clone() const;

    MCFOLD ::CommandOrigin const& $getOutputReceiver() const;

    MCAPI bool $hasChatPerms() const;

    MCAPI bool $hasTellPerms() const;

    MCAPI bool $canUseAbility(::AbilitiesIndex abilityIndex) const;

    MCAPI bool $canUseCommandsWithoutCheatsEnabled() const;

    MCAPI bool $isSelectorExpansionAllowed() const;

    MCFOLD ::CommandOriginType $getOriginType() const;

    MCAPI ::NetworkIdentifier const& $getSourceId() const;

    MCAPI ::CommandOriginIdentity $getIdentity() const;

    MCAPI void $updateValues();

    MCAPI ::Vec3 const $getExecutePosition(int version, ::CommandPositionFloat const& commandPosition) const;

    MCAPI ::CompoundTag $serialize() const;

    MCAPI bool $isValid() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
