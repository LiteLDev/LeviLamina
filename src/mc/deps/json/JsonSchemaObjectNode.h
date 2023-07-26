#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonUtil {

template <typename T0, typename T1>
class JsonSchemaObjectNode {

public:
    // prevent constructor by default
    JsonSchemaObjectNode& operator=(JsonSchemaObjectNode const&) = delete;
    JsonSchemaObjectNode(JsonSchemaObjectNode const&)            = delete;
    JsonSchemaObjectNode()                                       = delete;
};

}; // namespace JsonUtil
