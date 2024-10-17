#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameplayUserManagerProxy {
public:
    // prevent constructor by default
    GameplayUserManagerProxy& operator=(GameplayUserManagerProxy const&);
    GameplayUserManagerProxy(GameplayUserManagerProxy const&);
    GameplayUserManagerProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameplayUserManagerProxy();

    // vIndex: 1
    virtual std::optional<std::string> validatePlayerName(std::string const&, class GameplayUserManager const&) const;

    // vIndex: 2
    virtual bool shouldGeneratePlayerIndex() const;

    // vIndex: 3
    virtual void reloadActor(class Actor& actor) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI void reloadActor$(class Actor& actor) const;

    MCAPI bool shouldGeneratePlayerIndex$() const;

    MCAPI std::optional<std::string> validatePlayerName$(std::string const&, class GameplayUserManager const&) const;

    // NOLINTEND
};
