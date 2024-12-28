#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class CompoundTag;
class Dimension;
class Level;
class ServerLevel;
class Vec2;
class Vec3;
// clang-format on

class ServerCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ServerLevel&>           mServerLevel;
    ::ll::TypedStorage<8, 32, ::std::string>           mRequestId;
    ::ll::TypedStorage<1, 1, ::CommandPermissionLevel> mCommandPermissionLevel;
    ::ll::TypedStorage<4, 4, ::DimensionType>          mDimensionType;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerCommandOrigin& operator=(ServerCommandOrigin const&);
    ServerCommandOrigin(ServerCommandOrigin const&);
    ServerCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerCommandOrigin() /*override*/;

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

    // vIndex: 17
    virtual bool canUseCommandsWithoutCheatsEnabled() const /*override*/;

    // vIndex: 18
    virtual bool isSelectorExpansionAllowed() const /*override*/;

    // vIndex: 23
    virtual ::CommandOriginType getOriginType() const /*override*/;

    // vIndex: 29
    virtual ::CompoundTag serialize() const /*override*/;

    // vIndex: 30
    virtual bool isValid() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerCommandOrigin(
        ::std::string const&     requestId,
        ::ServerLevel&           level,
        ::CommandPermissionLevel permission,
        ::DimensionType          dimensionType
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&     requestId,
        ::ServerLevel&           level,
        ::CommandPermissionLevel permission,
        ::DimensionType          dimensionType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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

    MCAPI bool $canUseCommandsWithoutCheatsEnabled() const;

    MCAPI bool $isSelectorExpansionAllowed() const;

    MCAPI ::CommandOriginType $getOriginType() const;

    MCAPI ::CompoundTag $serialize() const;

    MCAPI bool $isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
