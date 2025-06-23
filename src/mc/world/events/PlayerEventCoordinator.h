#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/PlayerGameplayEvent.h"

// auto generated forward declare list
// clang-format off
class ItemEnchants;
class ItemStack;
class Player;
class PlayerEventListener;
class PlayerGameplayHandler;
// clang-format on

class PlayerEventCoordinator : public ::EventCoordinator<::PlayerEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerGameplayHandler>> mPlayerGameplayHandler;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerEventCoordinator() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD void registerPlayerGameplayHandler(::std::unique_ptr<::PlayerGameplayHandler>&& handler);

    MCAPI ::CoordinatorResult sendEvent(::EventRef<::PlayerGameplayEvent<::CoordinatorResult>> const& event);

    MCAPI void sendEvent(::EventRef<::PlayerGameplayEvent<void>> const& event);

    MCAPI void sendPlayerEnchantedItem(::Player& player, ::ItemStack const& item, ::ItemEnchants const& enchants);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
