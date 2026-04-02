#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/NetworkIdentifier.h"
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
class Vec2;
class Vec3;
struct CommandOriginData;
// clang-format on

class DevConsoleCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>       mPlayerId;
    ::ll::TypedStorage<8, 8, ::Level*>              mLevel;
    ::ll::TypedStorage<8, 176, ::NetworkIdentifier> mSourceId;
    ::ll::TypedStorage<1, 1, ::SubClientId>         mSourceSubId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DevConsoleCommandOrigin() /*override*/ = default;

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

    virtual ::NetworkIdentifier const& getSourceId() const /*override*/;

    virtual ::SubClientId getSourceSubId() const /*override*/;

    virtual ::CommandOriginType getOriginType() const /*override*/;

    virtual ::CommandOriginData toCommandOriginData() const /*override*/;

    virtual ::CompoundTag serialize() const /*override*/;

    virtual bool isValid() const /*override*/;

    virtual bool requiresValidLevel() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD ::std::string const& $getRequestId() const;

    MCAPI ::std::string $getName() const;

    MCAPI ::BlockPos $getBlockPosition() const;

    MCAPI ::Vec3 $getWorldPosition() const;

    MCFOLD ::std::optional<::Vec2> $getRotation() const;

    MCFOLD ::Level* $getLevel() const;

    MCAPI ::Dimension* $getDimension() const;

    MCAPI ::Actor* $getEntity() const;

    MCFOLD ::CommandPermissionLevel $getPermissionsLevel() const;

    MCAPI ::std::unique_ptr<::CommandOrigin> $clone() const;

    MCFOLD bool $canUseCommandsWithoutCheatsEnabled() const;

    MCFOLD bool $isSelectorExpansionAllowed() const;

    MCFOLD ::NetworkIdentifier const& $getSourceId() const;

    MCFOLD ::SubClientId $getSourceSubId() const;

    MCFOLD ::CommandOriginType $getOriginType() const;

    MCAPI ::CommandOriginData $toCommandOriginData() const;

    MCFOLD ::CompoundTag $serialize() const;

    MCAPI bool $isValid() const;

    MCFOLD bool $requiresValidLevel() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
