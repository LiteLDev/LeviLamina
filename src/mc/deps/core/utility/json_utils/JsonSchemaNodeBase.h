#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonUtil {

class JsonSchemaNodeBase {
public:
    // prevent constructor by default
    JsonSchemaNodeBase& operator=(JsonSchemaNodeBase const&);
    JsonSchemaNodeBase(JsonSchemaNodeBase const&);
    JsonSchemaNodeBase();
};

}; // namespace JsonUtil
