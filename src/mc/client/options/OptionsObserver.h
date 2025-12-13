#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Observer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class SingleThreadedLock; }
// clang-format on

class OptionsObserver : public ::Core::Observer<::OptionsObserver, ::Core::SingleThreadedLock> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onForceCloudSave() = 0;

    virtual void onOptionsLoadBegin() = 0;

    virtual void onOptionsLoadComplete() = 0;

#ifdef LL_PLAT_S
    virtual ~OptionsObserver() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~OptionsObserver() /*override*/;
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
