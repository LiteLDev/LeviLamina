#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IPurchaseEventing;
// clang-format on

class IMinecraftEventingProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMinecraftEventingProvider() = default;

    virtual ::IPurchaseEventing& getPurchaseEventing() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
