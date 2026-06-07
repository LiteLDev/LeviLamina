#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GeometryAtlas {

class IItemHandle {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IItemHandle() = default;

    virtual bool isAnimated() const = 0;

    virtual uint64 hash() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace GeometryAtlas
