#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class SingleThreadedLock; }
// clang-format on

namespace Automation {

class AutomationObserver : public ::Core::Observer<::Automation::AutomationObserver, ::Core::SingleThreadedLock> {
public:
    // prevent constructor by default
    AutomationObserver& operator=(AutomationObserver const&);
    AutomationObserver(AutomationObserver const&);
    AutomationObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void onConnected(::std::string const&) = 0;

    // vIndex: 3
    virtual void onConnectionFailed(::std::string const&) = 0;

    // vIndex: 4
    virtual void onConnectionClosed() = 0;

    // vIndex: 5
    virtual void onDuplicateRequestCancel() = 0;

    // vIndex: 0
    virtual ~AutomationObserver() /*override*/;
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

} // namespace Automation
