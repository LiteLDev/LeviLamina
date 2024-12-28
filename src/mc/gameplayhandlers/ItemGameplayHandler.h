#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/GameplayHandler.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/world/events/ItemGameplayEvent.h"
#include "mc/world/events/MutableItemGameplayEvent.h"

class ItemGameplayHandler : public ::GameplayHandler {
public:
    // prevent constructor by default
    ItemGameplayHandler& operator=(ItemGameplayHandler const&);
    ItemGameplayHandler(ItemGameplayHandler const&);
    ItemGameplayHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemGameplayHandler() /*override*/;

    // vIndex: 2
    virtual ::HandlerResult handleEvent(::ItemGameplayEvent<void> const&) = 0;

    // vIndex: 1
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::MutableItemGameplayEvent<::CoordinatorResult>&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
