#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class GameplayUserManager;
// clang-format on

class GameplayUserManagerProxy {
public:
    // prevent constructor by default
    GameplayUserManagerProxy& operator=(GameplayUserManagerProxy const&);
    GameplayUserManagerProxy(GameplayUserManagerProxy const&);
    GameplayUserManagerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameplayUserManagerProxy() = default;

    // vIndex: 1
    virtual ::std::optional<::std::string> validatePlayerName(::std::string const&, ::GameplayUserManager const&) const;

    // vIndex: 2
    virtual bool shouldGeneratePlayerIndex() const;

    // vIndex: 3
    virtual void reloadActor(::Actor& actor) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::std::string> $validatePlayerName(::std::string const&, ::GameplayUserManager const&) const;

    MCAPI bool $shouldGeneratePlayerIndex() const;

    MCAPI void $reloadActor(::Actor& actor) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
