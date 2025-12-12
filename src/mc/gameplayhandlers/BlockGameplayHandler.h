#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/GameplayHandler.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/world/events/BlockGameplayEvent.h"
#include "mc/world/events/MutableBlockGameplayEvent.h"

class BlockGameplayHandler : public ::GameplayHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockGameplayHandler() /*override*/ = default;

    virtual ::HandlerResult handleEvent(::BlockGameplayEvent<void> const&) = 0;

    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::BlockGameplayEvent<::CoordinatorResult> const&) = 0;

    virtual ::GameplayHandlerResult<::std::optional<::std::string>>
    handleEvent(::BlockGameplayEvent<::std::optional<::std::string>> const&) = 0;

    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::MutableBlockGameplayEvent<::CoordinatorResult>&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
