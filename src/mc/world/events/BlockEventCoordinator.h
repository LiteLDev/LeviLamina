#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/BlockGameplayEvent.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutableBlockGameplayEvent.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockEventListener;
class BlockGameplayHandler;
class BlockPos;
class Player;
// clang-format on

class BlockEventCoordinator : public ::EventCoordinator<::BlockEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockGameplayHandler>> mBlockGameplayHandler;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockEventCoordinator() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void registerBlockGameplayHandler(::std::unique_ptr<::BlockGameplayHandler>&& handler);

    MCAPI void
    sendBlockDestructionStarted(::Player& player, ::BlockPos const& blockPos, ::Block const& hitBlock, uchar face);

    MCAPI void
    sendBlockPlacedByPlayer(::Player& player, ::Block const& placedBlock, ::BlockPos const& pos, bool isUnderwater);

    MCAPI ::CoordinatorResult sendEvent(::EventRef<::MutableBlockGameplayEvent<::CoordinatorResult>> event);

    MCAPI ::CoordinatorResult sendEvent(::EventRef<::BlockGameplayEvent<::CoordinatorResult>> const& event);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
