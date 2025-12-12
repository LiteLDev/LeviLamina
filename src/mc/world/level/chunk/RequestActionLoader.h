#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/IRequestAction.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class ICommandOriginLoader;
class IRequestAction;
// clang-format on

class RequestActionLoader {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool isValidTag(::IRequestAction::RequestActionType actionType, ::CompoundTag const& tag);

    MCNAPI static ::std::unique_ptr<::IRequestAction> load(
        ::IRequestAction::RequestActionType actionType,
        ::CompoundTag const&                tag,
        ::ICommandOriginLoader&             loader,
        ::std::string const&                dimensionPrefix
    );
    // NOLINTEND
};
