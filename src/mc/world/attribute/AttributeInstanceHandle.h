#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AttributeInstanceHandle {

public:
    // prevent constructor by default
    AttributeInstanceHandle& operator=(AttributeInstanceHandle const&) = delete;
    AttributeInstanceHandle(AttributeInstanceHandle const&)            = delete;
    AttributeInstanceHandle()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getInstance\@AttributeInstanceHandle\@\@QEBAAEBVAttributeInstance\@\@XZ
     */
    MCAPI class AttributeInstance const& getInstance() const;
    // NOLINTEND
};
