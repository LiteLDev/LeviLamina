#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/ActorServerCommandOrigin.h"
#include "mc/server/commands/CommandOriginType.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CommandOrigin;
// clang-format on

class GameDirectorEntityServerCommandOrigin : public ::ActorServerCommandOrigin {
public:
    // prevent constructor by default
    GameDirectorEntityServerCommandOrigin();

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
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit GameDirectorEntityServerCommandOrigin(::Actor& origin);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Actor& origin);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::CommandPermissionLevel $getPermissionsLevel() const;

    MCNAPI ::std::unique_ptr<::CommandOrigin> $clone() const;

    MCNAPI bool $canUseCommandsWithoutCheatsEnabled() const;

    MCNAPI ::CommandOriginType $getOriginType() const;

    MCNAPI bool $isSelectorExpansionAllowed() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
