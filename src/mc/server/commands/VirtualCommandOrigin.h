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
class CommandPositionFloat;
class CompoundTag;
class Dimension;
class Level;
class NetworkIdentifier;
class ServerLevel;
class Vec2;
class Vec3;
struct CommandOriginIdentity;
// clang-format on

class VirtualCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk9ecdf8;
    ::ll::UntypedStorage<8, 8>  mUnk66bd43;
    ::ll::UntypedStorage<8, 8>  mUnkab4e18;
    ::ll::UntypedStorage<4, 16> mUnk442c5d;
    ::ll::UntypedStorage<4, 4>  mUnk40df6d;
    // NOLINTEND

public:
    // prevent constructor by default
    VirtualCommandOrigin& operator=(VirtualCommandOrigin const&);
    VirtualCommandOrigin(VirtualCommandOrigin const&);
    VirtualCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
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

    // vIndex: 21
    virtual ::CommandOrigin const& getOutputReceiver() const /*override*/;

    // vIndex: 13
    virtual bool hasChatPerms() const /*override*/;

    // vIndex: 14
    virtual bool hasTellPerms() const /*override*/;

    // vIndex: 15
    virtual bool canUseAbility(::AbilitiesIndex abilityIndex) const /*override*/;

    // vIndex: 17
    virtual bool canUseCommandsWithoutCheatsEnabled() const /*override*/;

    // vIndex: 18
    virtual bool isSelectorExpansionAllowed() const /*override*/;

    // vIndex: 23
    virtual ::CommandOriginType getOriginType() const /*override*/;

    // vIndex: 19
    virtual ::NetworkIdentifier const& getSourceId() const /*override*/;

    // vIndex: 22
    virtual ::CommandOriginIdentity getIdentity() const /*override*/;

    // vIndex: 27
    virtual void updateValues() /*override*/;

    // vIndex: 28
    virtual ::Vec3 const getExecutePosition(int version, ::CommandPositionFloat const& commandPosition) const
        /*override*/;

    // vIndex: 29
    virtual ::CompoundTag serialize() const /*override*/;

    // vIndex: 30
    virtual bool isValid() const /*override*/;

    // vIndex: 0
    virtual ~VirtualCommandOrigin() /*override*/ = default;
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
        ::std::unique_ptr<::CommandOrigin> outputReceiver,
        ::std::unique_ptr<::CommandOrigin> source,
        ::CommandPositionFloat const&      commandPosition,
        int                                version
    );

    MCNAPI VirtualCommandOrigin(
        ::CommandOrigin const&        outputReceiver,
        ::CommandOrigin const&        source,
        ::CommandPositionFloat const& commandPosition,
        int                           version
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::VirtualCommandOrigin> load(::CompoundTag const& tag, ::ServerLevel& level);
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
        ::std::unique_ptr<::CommandOrigin> outputReceiver,
        ::std::unique_ptr<::CommandOrigin> source,
        ::CommandPositionFloat const&      commandPosition,
        int                                version
    );

    MCNAPI void* $ctor(
        ::CommandOrigin const&        outputReceiver,
        ::CommandOrigin const&        source,
        ::CommandPositionFloat const& commandPosition,
        int                           version
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
