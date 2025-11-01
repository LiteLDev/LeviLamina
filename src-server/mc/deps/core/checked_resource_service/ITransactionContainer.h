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
    // vIndex: 0
    virtual ~ITransactionContainer() = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::mce::IDeferredDebugUpdate> apply() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
