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
class Player;
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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    DevConsoleCommandOrigin();

#endif
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
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit DevConsoleCommandOrigin(::Player& player);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::Player& player);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI ::std::string const& $getRequestId() const;
#else // LL_PLAT_C
    MCFOLD ::std::string const& $getRequestId() const;
#endif

    MCAPI ::std::string $getName() const;

    MCAPI ::BlockPos $getBlockPosition() const;

    MCAPI ::Vec3 $getWorldPosition() const;

#ifdef LL_PLAT_S
    MCAPI ::std::optional<::Vec2> $getRotation() const;
#else // LL_PLAT_C
    MCFOLD ::std::optional<::Vec2> $getRotation() const;
#endif

#ifdef LL_PLAT_S
    MCAPI ::Level* $getLevel() const;
#else // LL_PLAT_C
    MCFOLD ::Level* $getLevel() const;
#endif

    MCAPI ::Dimension* $getDimension() const;

    MCAPI ::Actor* $getEntity() const;

#ifdef LL_PLAT_S
    MCAPI ::CommandPermissionLevel $getPermissionsLevel() const;
#else // LL_PLAT_C
    MCFOLD ::CommandPermissionLevel $getPermissionsLevel() const;
#endif

    MCAPI ::std::unique_ptr<::CommandOrigin> $clone() const;

#ifdef LL_PLAT_S
    MCAPI bool $canUseCommandsWithoutCheatsEnabled() const;
#else // LL_PLAT_C
    MCFOLD bool $canUseCommandsWithoutCheatsEnabled() const;
#endif

#ifdef LL_PLAT_S
    MCAPI bool $isSelectorExpansionAllowed() const;
#else // LL_PLAT_C
    MCFOLD bool $isSelectorExpansionAllowed() const;
#endif

#ifdef LL_PLAT_S
    MCAPI ::NetworkIdentifier const& $getSourceId() const;
#else // LL_PLAT_C
    MCFOLD ::NetworkIdentifier const& $getSourceId() const;
#endif

    MCAPI ::SubClientId $getSourceSubId() const;

#ifdef LL_PLAT_S
    MCAPI ::CommandOriginType $getOriginType() const;
#else // LL_PLAT_C
    MCFOLD ::CommandOriginType $getOriginType() const;
#endif

    MCAPI ::CommandOriginData $toCommandOriginData() const;

#ifdef LL_PLAT_S
    MCAPI ::CompoundTag $serialize() const;
#else // LL_PLAT_C
    MCFOLD ::CompoundTag $serialize() const;
#endif

    MCAPI bool $isValid() const;

#ifdef LL_PLAT_S
    MCAPI bool $requiresValidLevel() const;
#else // LL_PLAT_C
    MCFOLD bool $requiresValidLevel() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
