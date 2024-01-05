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
    // vIndex: 0, symbol: __gen_??1ServerGameplayUserManagerProxy@@UEAA@XZ
    virtual ~ServerGameplayUserManagerProxy() = default;

    // vIndex: 1, symbol:
    // ?validatePlayerName@ServerGameplayUserManagerProxy@@UEBA?AV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVGameplayUserManager@@@Z
    virtual std::optional<std::string>
    validatePlayerName(std::string const& playerName, class GameplayUserManager const&) const;

    // vIndex: 2, symbol: ?shouldGeneratePlayerIndex@ServerGameplayUserManagerProxy@@UEBA_NXZ
    virtual bool shouldGeneratePlayerIndex() const;

    // NOLINTEND
};
