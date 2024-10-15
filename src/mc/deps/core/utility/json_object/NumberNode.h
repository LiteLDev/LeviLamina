#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class MemoryPage; }
// clang-format on

namespace Bedrock::JSONObject {

class NumberNode {
public:
    // prevent constructor by default
    NumberNode& operator=(NumberNode const&);
    NumberNode(NumberNode const&);
    NumberNode();

    // private:
    // NOLINTBEGIN
    MCAPI NumberNode(class Bedrock::JSONObject::MemoryPage* owningPage, int64 value);

    MCAPI NumberNode(class Bedrock::JSONObject::MemoryPage* owningPage, double value);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class Bedrock::JSONObject::MemoryPage* owningPage, double value);

    MCAPI void* ctor$(class Bedrock::JSONObject::MemoryPage* owningPage, int64 value);

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject
