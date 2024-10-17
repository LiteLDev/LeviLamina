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
    MCVAPI void onUserDisconnectedBecauseConcurrentLogin(std::string const& id);

    MCVAPI ~MultiplayerServiceObserver();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    MCAPI void onUserDisconnectedBecauseConcurrentLogin$(std::string const& id);

    // NOLINTEND
};

}; // namespace Social
