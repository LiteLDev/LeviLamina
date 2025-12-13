#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class IDeferredDebugUpdate; }
// clang-format on

namespace mce {

struct ITransactionContainer {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ITransactionContainer() = default;
#else // LL_PLAT_C
    virtual ~ITransactionContainer();
#endif

    virtual ::std::unique_ptr<::mce::IDeferredDebugUpdate> apply() = 0;
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

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
