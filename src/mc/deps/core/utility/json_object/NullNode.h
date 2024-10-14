#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class MemoryPage; }
// clang-format on

namespace Bedrock::JSONObject {

class NullNode {
public:
    // prevent constructor by default
    NullNode& operator=(NullNode const&);
    NullNode(NullNode const&);
    NullNode();

    // private:
    // NOLINTBEGIN
    MCAPI explicit NullNode(class Bedrock::JSONObject::MemoryPage* owningPage);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject
