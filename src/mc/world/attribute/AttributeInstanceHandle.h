#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AttributeInstanceHandle {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTEINSTANCEHANDLE
public:
    AttributeInstanceHandle& operator=(AttributeInstanceHandle const&) = delete;
    AttributeInstanceHandle(AttributeInstanceHandle const&)            = delete;
    AttributeInstanceHandle()                                          = delete;
#endif

public:
    /**
     * @symbol ?getInstance\@AttributeInstanceHandle\@\@QEBAAEBVAttributeInstance\@\@XZ
     */
    MCAPI class AttributeInstance const& getInstance() const;
};
