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
    // virtual functions
    // NOLINTBEGIN
    virtual void onConnected(::std::string const&) = 0;

    virtual void onConnectionFailed(::std::string const&) = 0;

    virtual void onConnectionClosed() = 0;

    virtual void onDuplicateRequestCancel() = 0;

#ifdef LL_PLAT_S
    virtual ~AutomationObserver() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~AutomationObserver() /*override*/;
#endif

    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Automation
