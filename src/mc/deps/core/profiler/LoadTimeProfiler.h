#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

namespace Core {

class LoadTimeProfiler : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    LoadTimeProfiler& operator=(LoadTimeProfiler const&);
    LoadTimeProfiler(LoadTimeProfiler const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoadTimeProfiler() = default;

    MCAPI LoadTimeProfiler();

    MCAPI void setEnabled(bool enabled);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace Core
