#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonUtil {

class JsonSchemaNodeBase {

public:
    // prevent constructor by default
    JsonSchemaNodeBase& operator=(JsonSchemaNodeBase const&) = delete;
    JsonSchemaNodeBase(JsonSchemaNodeBase const&)            = delete;
    JsonSchemaNodeBase()                                     = delete;
};

}; // namespace JsonUtil
