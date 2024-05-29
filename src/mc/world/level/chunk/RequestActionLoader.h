#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/IRequestAction.h"

class RequestActionLoader {
public:
    // prevent constructor by default
    RequestActionLoader& operator=(RequestActionLoader const&);
    RequestActionLoader(RequestActionLoader const&);
    RequestActionLoader();

public:
    // NOLINTBEGIN
    // symbol: ?isValidTag@RequestActionLoader@@SA_NW4RequestActionType@IRequestAction@@AEBVCompoundTag@@@Z
    MCAPI static bool isValidTag(::IRequestAction::RequestActionType actionType, class CompoundTag const& tag);

    // symbol:
    // ?load@RequestActionLoader@@SA?AV?$unique_ptr@VIRequestAction@@U?$default_delete@VIRequestAction@@@std@@@std@@W4RequestActionType@IRequestAction@@AEBVCompoundTag@@AEAVICommandOriginLoader@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
    MCAPI static std::unique_ptr<class IRequestAction> load(
        ::IRequestAction::RequestActionType actionType,
        class CompoundTag const&            tag,
        class ICommandOriginLoader&         loader,
        std::string const&                  dimensionPrefix
    );

    // NOLINTEND
};
