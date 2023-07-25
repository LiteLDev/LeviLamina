#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace JsonUtil {

class JsonSchemaNodeBase {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JSONUTIL_JSONSCHEMANODEBASE
public:
    JsonSchemaNodeBase& operator=(JsonSchemaNodeBase const&) = delete;
    JsonSchemaNodeBase(JsonSchemaNodeBase const&)            = delete;
    JsonSchemaNodeBase()                                     = delete;
#endif

public:
};

}; // namespace JsonUtil
