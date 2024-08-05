#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/common/GameplayUserManagerProxy.h"

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
    validatePlayerName(std::string const& playerName, class GameplayUserManager const&) const;

    // vIndex: 2
    virtual bool shouldGeneratePlayerIndex() const;

    // NOLINTEND
};
