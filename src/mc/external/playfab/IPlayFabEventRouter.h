#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace PlayFab { class IPlayFabEmitEventRequest; }
// clang-format on

namespace PlayFab {

class IPlayFabEventRouter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk1be66e;
    // NOLINTEND

public:
    // prevent constructor by default
    IPlayFabEventRouter& operator=(IPlayFabEventRouter const&);
    IPlayFabEventRouter(IPlayFabEventRouter const&);
    IPlayFabEventRouter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPlayFabEventRouter();

    // vIndex: 1
    virtual void RouteEvent(::std::shared_ptr<::PlayFab::IPlayFabEmitEventRequest const>) const = 0;
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

} // namespace PlayFab
