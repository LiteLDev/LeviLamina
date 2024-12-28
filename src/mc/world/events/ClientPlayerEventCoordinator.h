#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/PlayerEventCoordinator.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class Player;
// clang-format on

class ClientPlayerEventCoordinator : public ::PlayerEventCoordinator {
public:
    // prevent constructor by default
    ClientPlayerEventCoordinator& operator=(ClientPlayerEventCoordinator const&);
    ClientPlayerEventCoordinator(ClientPlayerEventCoordinator const&);
    ClientPlayerEventCoordinator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientPlayerEventCoordinator() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void sendPlayerDestroyedBlock(::Player& player, ::Block const& block);

    MCAPI void sendStartDestroyBlock(::Player& player, ::BlockPos const& pos, uchar& face);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
