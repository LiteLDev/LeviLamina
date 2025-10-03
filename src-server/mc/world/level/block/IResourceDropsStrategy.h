#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class Randomize;
struct ResourceDrops;
struct ResourceDropsContext;
// clang-format on

class IResourceDropsStrategy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IResourceDropsStrategy() = default;

    // vIndex: 1
    virtual ::ResourceDrops getResourceDrops(::Block const&, ::Randomize&, ::ResourceDropsContext const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
