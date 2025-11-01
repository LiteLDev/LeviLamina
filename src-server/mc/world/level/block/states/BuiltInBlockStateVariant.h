#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/block/states/BlockStateVariant.h"

template<typename T0>
class BuiltInBlockStateVariant : public ::BlockStateVariant<T0> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BuiltInBlockStateVariant() /*override*/ = default;
    // NOLINTEND
};
