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
    MCAPI void* ctor$(class Bedrock::JSONObject::MemoryPage* owningPage);

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject
