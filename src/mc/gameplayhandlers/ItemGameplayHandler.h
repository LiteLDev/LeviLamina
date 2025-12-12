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
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemGameplayHandler() /*override*/ = default;

    virtual ::HandlerResult handleEvent(::ItemGameplayEvent<void> const&) = 0;

    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::MutableItemGameplayEvent<::CoordinatorResult>&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
