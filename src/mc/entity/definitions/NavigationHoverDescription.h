#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/NavigationDescription.h"

class NavigationHoverDescription : public ::NavigationDescription {
public:
    // prevent constructor by default
    NavigationHoverDescription& operator=(NavigationHoverDescription const&);
    NavigationHoverDescription(NavigationHoverDescription const&);
    NavigationHoverDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~NavigationHoverDescription();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
