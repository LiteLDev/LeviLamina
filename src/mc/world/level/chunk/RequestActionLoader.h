#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/IRequestAction.h"

class RequestActionLoader {

public:
    // prevent constructor by default
    RequestActionLoader& operator=(RequestActionLoader const&) = delete;
    RequestActionLoader(RequestActionLoader const&)            = delete;
    RequestActionLoader()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?isValidTag\@RequestActionLoader\@\@SA_NW4RequestActionType\@IRequestAction\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static bool isValidTag(enum class IRequestAction::RequestActionType, class CompoundTag const&);
    /**
     * @symbol
     * ?load\@RequestActionLoader\@\@SA?AV?$unique_ptr\@VIRequestAction\@\@U?$default_delete\@VIRequestAction\@\@\@std\@\@\@std\@\@W4RequestActionType\@IRequestAction\@\@AEBVCompoundTag\@\@AEAVICommandOriginLoader\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI static std::unique_ptr<class IRequestAction>
    load(enum class IRequestAction::RequestActionType, class CompoundTag const&, class ICommandOriginLoader&, std::string const&);
    // NOLINTEND
};
