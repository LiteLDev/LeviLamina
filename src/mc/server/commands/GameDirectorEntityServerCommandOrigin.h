#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ActorServerCommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
// clang-format on

class GameDirectorEntityServerCommandOrigin : public ::ActorServerCommandOrigin {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameDirectorEntityServerCommandOrigin() /*override*/ = default;

    virtual ::CommandPermissionLevel getPermissionsLevel() const /*override*/;

    virtual ::std::unique_ptr<::CommandOrigin> clone() const /*override*/;

    virtual bool canUseCommandsWithoutCheatsEnabled() const /*override*/;

    virtual ::CommandOriginType getOriginType() const /*override*/;

    virtual bool isSelectorExpansionAllowed() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::CommandPermissionLevel $getPermissionsLevel() const;

    MCAPI ::std::unique_ptr<::CommandOrigin> $clone() const;

    MCFOLD bool $canUseCommandsWithoutCheatsEnabled() const;

    MCFOLD ::CommandOriginType $getOriginType() const;

    MCFOLD bool $isSelectorExpansionAllowed() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
