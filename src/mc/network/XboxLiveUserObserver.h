#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class SingleThreadedLock; }
// clang-format on

namespace Social {

class XboxLiveUserObserver : public ::Core::Observer<::Social::XboxLiveUserObserver, ::Core::SingleThreadedLock> {
public:
    // prevent constructor by default
    XboxLiveUserObserver& operator=(XboxLiveUserObserver const&);
    XboxLiveUserObserver(XboxLiveUserObserver const&);
    XboxLiveUserObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void onXboxUserBlocked(::std::string const&) = 0;

    // vIndex: 3
    virtual void onXboxUserUnblocked(::std::string const&) = 0;

    // vIndex: 0
    virtual ~XboxLiveUserObserver() /*override*/;
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

} // namespace Social
