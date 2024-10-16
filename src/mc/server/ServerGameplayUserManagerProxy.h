#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/GameplayUserManagerProxy.h"

class ServerGameplayUserManagerProxy : public ::GameplayUserManagerProxy {
public:
    // prevent constructor by default
    ServerGameplayUserManagerProxy& operator=(ServerGameplayUserManagerProxy const&);
    ServerGameplayUserManagerProxy(ServerGameplayUserManagerProxy const&);
    ServerGameplayUserManagerProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerGameplayUserManagerProxy() = default;

    // vIndex: 1
    virtual std::optional<std::string>
    validatePlayerName(std::string const& playerName, class GameplayUserManager const& gameplayUserManager) const;

    // vIndex: 2
    virtual bool shouldGeneratePlayerIndex() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool shouldGeneratePlayerIndex$() const;

    MCAPI std::optional<std::string>
    validatePlayerName$(std::string const& playerName, class GameplayUserManager const& gameplayUserManager) const;

    // NOLINTEND
};
