#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class Dimension;
class Level;
class ServerLevel;
class Vec2;
class Vec3;
// clang-format on

class ScriptCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkdeb5b0;
    ::ll::UntypedStorage<1, 1>  mUnk2fa62e;
    ::ll::UntypedStorage<8, 8>  mUnk22118d;
    ::ll::UntypedStorage<8, 8>  mUnkff69b3;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCommandOrigin& operator=(ScriptCommandOrigin const&);
    ScriptCommandOrigin(ScriptCommandOrigin const&);
    ScriptCommandOrigin();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptCommandOrigin() /*override*/;

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

    // vIndex: 26
    virtual void handleCommandOutputCallback(int successCount, ::std::string&& messages) const /*override*/;

    // vIndex: 30
    virtual bool isValid() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptCommandOrigin(
        ::ServerLevel&                              origin,
        ::Dimension*                                dimension,
        ::std::function<void(int, ::std::string&&)> outputCallback,
        ::std::optional<::CommandPermissionLevel>   permissionLevel
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ServerLevel&                              origin,
        ::Dimension*                                dimension,
        ::std::function<void(int, ::std::string&&)> outputCallback,
        ::std::optional<::CommandPermissionLevel>   permissionLevel
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

    MCAPI void $handleCommandOutputCallback(int successCount, ::std::string&& messages) const;

    MCAPI bool $isValid() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
