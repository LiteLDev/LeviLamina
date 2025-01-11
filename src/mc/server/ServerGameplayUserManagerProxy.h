#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GameplayUserManagerProxy.h"

// auto generated forward declare list
// clang-format off
class GameplayUserManager;
// clang-format on

class ServerGameplayUserManagerProxy : public ::GameplayUserManagerProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::optional<::std::string>
    validatePlayerName(::std::string const& playerName, ::GameplayUserManager const& gameplayUserManager) const
        /*override*/;

    // vIndex: 2
    virtual bool shouldGeneratePlayerIndex() const /*override*/;

    // vIndex: 0
    virtual ~ServerGameplayUserManagerProxy() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::std::string>
    $validatePlayerName(::std::string const& playerName, ::GameplayUserManager const& gameplayUserManager) const;

    MCFOLD bool $shouldGeneratePlayerIndex() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
