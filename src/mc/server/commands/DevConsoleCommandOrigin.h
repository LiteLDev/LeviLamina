#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
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
class NetworkIdentifier;
class Vec2;
class Vec3;
struct CommandOriginData;
// clang-format on

class DevConsoleCommandOrigin : public ::CommandOrigin {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk2a2676;
    ::ll::UntypedStorage<8, 8>   mUnk81054d;
    ::ll::UntypedStorage<8, 176> mUnk7078f0;
    ::ll::UntypedStorage<1, 1>   mUnk485c66;
    // NOLINTEND

public:
    // prevent constructor by default
    DevConsoleCommandOrigin& operator=(DevConsoleCommandOrigin const&);
    DevConsoleCommandOrigin(DevConsoleCommandOrigin const&);
    DevConsoleCommandOrigin();

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

    MCNAPI bool $canUseCommandsWithoutCheatsEnabled() const;

    MCNAPI bool $isSelectorExpansionAllowed() const;

    MCNAPI ::NetworkIdentifier const& $getSourceId() const;

    MCNAPI ::SubClientId $getSourceSubId() const;

    MCNAPI ::CommandOriginType $getOriginType() const;

    MCNAPI ::CommandOriginData $toCommandOriginData() const;

    MCNAPI ::CompoundTag $serialize() const;

    MCNAPI bool $isValid() const;

    MCNAPI bool $requiresValidLevel() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
