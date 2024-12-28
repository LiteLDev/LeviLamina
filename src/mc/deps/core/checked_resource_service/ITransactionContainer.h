#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class IDeferredDebugUpdate; }
// clang-format on

namespace mce {

struct ITransactionContainer {
public:
    // prevent constructor by default
    ITransactionContainer& operator=(ITransactionContainer const&);
    ITransactionContainer(ITransactionContainer const&);
    ITransactionContainer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ITransactionContainer();

    // vIndex: 1
    virtual ::std::unique_ptr<::mce::IDeferredDebugUpdate> apply() = 0;
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

} // namespace mce
