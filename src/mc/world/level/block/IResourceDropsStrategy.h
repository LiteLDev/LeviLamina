#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class IRandom;
struct ResourceDrops;
struct ResourceDropsContext;
// clang-format on

class IResourceDropsStrategy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IResourceDropsStrategy() = default;

    virtual ::ResourceDrops getResourceDrops(::Block const&, ::IRandom&, ::ResourceDropsContext const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
