#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/NavigationDescription.h"

class NavigationGenericDescription : public ::NavigationDescription {
public:
    // prevent constructor by default
    NavigationGenericDescription& operator=(NavigationGenericDescription const&);
    NavigationGenericDescription(NavigationGenericDescription const&);
    NavigationGenericDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~NavigationGenericDescription();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
