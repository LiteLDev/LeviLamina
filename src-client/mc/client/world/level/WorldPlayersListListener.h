#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/LevelListener.h"

namespace World {

class WorldPlayersListListener : public ::LevelListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mCallback;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void playerListChanged() /*override*/;

    virtual ~WorldPlayersListListener() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $playerListChanged();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
