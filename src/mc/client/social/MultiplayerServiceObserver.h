#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social {

class MultiplayerServiceObserver {
public:
    // prevent constructor by default
    MultiplayerServiceObserver& operator=(MultiplayerServiceObserver const&);
    MultiplayerServiceObserver(MultiplayerServiceObserver const&);
    MultiplayerServiceObserver();

public:
    // NOLINTBEGIN
    // symbol:
    // ?onUserDisconnectedBecauseConcurrentLogin@MultiplayerServiceObserver@Social@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void onUserDisconnectedBecauseConcurrentLogin(std::string const& id);

    // symbol: ??1MultiplayerServiceObserver@Social@@UEAA@XZ
    MCVAPI ~MultiplayerServiceObserver();

    // NOLINTEND
};

}; // namespace Social
