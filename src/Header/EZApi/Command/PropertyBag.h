#pragma once

#include "../Core/json.h"

class PropertyBag {
public:
    Json::Value value;
    int         changed_version;
};