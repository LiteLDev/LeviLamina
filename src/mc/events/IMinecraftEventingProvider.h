#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IPurchaseEventing;
class IResourceLoadEventing;
// clang-format on

class IMinecraftEventingProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IMinecraftEventingProvider() = default;

    virtual ::IPurchaseEventing& getPurchaseEventing() = 0;

    virtual ::IResourceLoadEventing& getResourceLoadEventing() = 0;
    // NOLINTEND
};
