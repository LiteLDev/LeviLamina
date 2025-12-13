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
    virtual ~ScriptCommandOrigin() /*override*/;

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

    virtual bool canUseCommandsWithoutCheatsEnabled() const /*override*/;

    virtual bool isSelectorExpansionAllowed() const /*override*/;

    virtual ::CommandOriginType getOriginType() const /*override*/;

    virtual void handleCommandOutputCallback(int successCount, ::std::string&& messages) const /*override*/;

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
    MCFOLD ::std::string const& $getRequestId() const;

    MCAPI ::std::string $getName() const;

    MCFOLD ::BlockPos $getBlockPosition() const;

    MCFOLD ::Vec3 $getWorldPosition() const;

    MCFOLD ::std::optional<::Vec2> $getRotation() const;

    MCFOLD ::Level* $getLevel() const;

    MCFOLD ::Dimension* $getDimension() const;

    MCFOLD ::Actor* $getEntity() const;

    MCFOLD ::CommandPermissionLevel $getPermissionsLevel() const;

    MCAPI ::std::unique_ptr<::CommandOrigin> $clone() const;

    MCFOLD bool $canUseCommandsWithoutCheatsEnabled() const;

    MCFOLD bool $isSelectorExpansionAllowed() const;

    MCFOLD ::CommandOriginType $getOriginType() const;

    MCAPI void $handleCommandOutputCallback(int successCount, ::std::string&& messages) const;

    MCFOLD bool $isValid() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
