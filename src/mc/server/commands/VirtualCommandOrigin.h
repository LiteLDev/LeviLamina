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
    MCAPI VirtualCommandOrigin(
        ::CommandOrigin const&        outputReceiver,
        ::Actor&                      entity,
        ::CommandPositionFloat const& commandPosition,
        int                           version
    );

    MCAPI VirtualCommandOrigin(
        ::std::unique_ptr<::CommandOrigin> outputReceiver,
        ::std::unique_ptr<::CommandOrigin> source,
        ::CommandPositionFloat const&      commandPosition,
        int                                version
    );

    MCAPI VirtualCommandOrigin(
        ::CommandOrigin const&        outputReceiver,
        ::CommandOrigin const&        source,
        ::CommandPositionFloat const& commandPosition,
        int                           version
    );

    MCFOLD ::CommandOrigin* getOrigin() const;
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
        ::std::unique_ptr<::CommandOrigin> outputReceiver,
        ::std::unique_ptr<::CommandOrigin> source,
        ::CommandPositionFloat const&      commandPosition,
        int                                version
    );

    MCAPI void* $ctor(
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
    MCAPI ::std::string const& $getRequestId() const;

    MCAPI ::std::string $getName() const;

    MCAPI ::BlockPos $getBlockPosition() const;

    MCAPI ::Vec3 $getWorldPosition() const;

    MCAPI ::std::optional<::Vec2> $getRotation() const;

    MCAPI ::Level* $getLevel() const;

    MCAPI ::Dimension* $getDimension() const;

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
