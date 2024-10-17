#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/NavigationDescription.h"

class NavigationFloatDescription : public ::NavigationDescription {
public:
    // prevent constructor by default
    NavigationFloatDescription& operator=(NavigationFloatDescription const&);
    NavigationFloatDescription(NavigationFloatDescription const&);
    NavigationFloatDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~NavigationFloatDescription();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
