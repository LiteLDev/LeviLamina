#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class MemoryPage; }
// clang-format on

namespace Bedrock::JSONObject {

class BooleanNode {
public:
    // prevent constructor by default
    BooleanNode& operator=(BooleanNode const&);
    BooleanNode(BooleanNode const&);
    BooleanNode();

    // private:
    // NOLINTBEGIN
    MCAPI BooleanNode(class Bedrock::JSONObject::MemoryPage* owningPage, bool value);

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
