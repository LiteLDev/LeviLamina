#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::JSONObject { class MemoryPage; }
namespace Bedrock::JSONObject { class ValueWrapper; }
// clang-format on

namespace Bedrock::JSONObject {

class ArrayNode {
public:
    // prevent constructor by default
    ArrayNode& operator=(ArrayNode const&);
    ArrayNode(ArrayNode const&);
    ArrayNode();

public:
    // NOLINTBEGIN
    MCAPI void clear();

    MCAPI bool setContents(class Bedrock::JSONObject::ValueWrapper const& contents);

    MCAPI ~ArrayNode();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI explicit ArrayNode(class Bedrock::JSONObject::MemoryPage*);

    // NOLINTEND
};

}; // namespace Bedrock::JSONObject
