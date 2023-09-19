#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AttributeInstanceHandle {
public:
    // prevent constructor by default
    AttributeInstanceHandle& operator=(AttributeInstanceHandle const&);
    AttributeInstanceHandle(AttributeInstanceHandle const&);
    AttributeInstanceHandle();

public:
    // NOLINTBEGIN
    // symbol: ?getInstance@AttributeInstanceHandle@@QEBAAEBVAttributeInstance@@XZ
    MCAPI class AttributeInstance const& getInstance() const;

    // NOLINTEND
};
