#pragma once

#include "mce.h"

class ContentIdentity {
public:
    mce::UUID uuid;
    bool      valid{};
};