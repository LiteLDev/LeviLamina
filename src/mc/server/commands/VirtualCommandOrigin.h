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

    MCNAPI bool $hasChatPerms() const;

    MCNAPI bool $hasTellPerms() const;

    MCNAPI bool $canUseCommandsWithoutCheatsEnabled() const;

    MCNAPI bool $isSelectorExpansionAllowed() const;

    MCNAPI ::CommandOriginType $getOriginType() const;

    MCNAPI ::NetworkIdentifier const& $getSourceId() const;

    MCNAPI ::CommandOriginIdentity $getIdentity() const;

    MCNAPI void $updateValues();

    MCNAPI ::Vec3 const $getExecutePosition(int version, ::CommandPositionFloat const& commandPosition) const;

    MCNAPI ::CompoundTag $serialize() const;

    MCNAPI bool $isValid() const;

#ifdef LL_PLAT_C
    MCNAPI bool $canUseAbility(::AbilitiesIndex abilityIndex) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
