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
    // vIndex: 0, symbol: ??1GameplayUserManagerProxy@@UEAA@XZ
    virtual ~GameplayUserManagerProxy();

    // vIndex: 1, symbol:
    // ?validatePlayerName@GameplayUserManagerProxy@@UEBA?AV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVGameplayUserManager@@@Z
    virtual std::optional<std::string> validatePlayerName(std::string const&, class GameplayUserManager const&) const;

    // vIndex: 2, symbol: ?shouldGeneratePlayerIndex@GameplayUserManagerProxy@@UEBA_NXZ
    virtual bool shouldGeneratePlayerIndex() const;

    // vIndex: 3, symbol: ?reloadActor@GameplayUserManagerProxy@@UEBAXAEAVActor@@@Z
    virtual void reloadActor(class Actor& actor) const;

    // NOLINTEND
};
