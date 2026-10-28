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
    virtual ~ITransactionContainer() = default;

    virtual ::std::unique_ptr<::mce::IDeferredDebugUpdate> apply() = 0;
    // NOLINTEND
};

} // namespace mce
