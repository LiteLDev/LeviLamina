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
class CompoundTag;
class Dimension;
class Level;
class Vec2;
class Vec3;
// clang-format on

class GameArgumentCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mRequestId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameArgumentCommandOrigin() /*override*/ = default;

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

    virtual ::CompoundTag serialize() const /*override*/;

    virtual bool isValid() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI ::std::string const& $getRequestId() const;
#else // LL_PLAT_C
    MCFOLD ::std::string const& $getRequestId() const;
#endif

#ifdef LL_PLAT_S
    MCAPI ::std::string $getName() const;
#else // LL_PLAT_C
    MCFOLD ::std::string $getName() const;
#endif

#ifdef LL_PLAT_S
    MCAPI ::BlockPos $getBlockPosition() const;
#else // LL_PLAT_C
    MCFOLD ::BlockPos $getBlockPosition() const;
#endif

#ifdef LL_PLAT_S
    MCAPI ::Vec3 $getWorldPosition() const;
#else // LL_PLAT_C
    MCFOLD ::Vec3 $getWorldPosition() const;
#endif

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

#ifdef LL_PLAT_S
    MCAPI ::Dimension* $getDimension() const;
#else // LL_PLAT_C
    MCFOLD ::Dimension* $getDimension() const;
#endif

#ifdef LL_PLAT_S
    MCAPI ::Actor* $getEntity() const;
#else // LL_PLAT_C
    MCFOLD ::Actor* $getEntity() const;
#endif

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
    MCAPI ::CommandOriginType $getOriginType() const;
#else // LL_PLAT_C
    MCFOLD ::CommandOriginType $getOriginType() const;
#endif

#ifdef LL_PLAT_S
    MCAPI ::CompoundTag $serialize() const;
#else // LL_PLAT_C
    MCFOLD ::CompoundTag $serialize() const;
#endif

#ifdef LL_PLAT_S
    MCAPI bool $isValid() const;
#else // LL_PLAT_C
    MCFOLD bool $isValid() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
