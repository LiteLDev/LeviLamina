#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/NavigationDescription.h"

class NavigationSwimDescription : public ::NavigationDescription {
public:
    // prevent constructor by default
    NavigationSwimDescription& operator=(NavigationSwimDescription const&);
    NavigationSwimDescription(NavigationSwimDescription const&);
    NavigationSwimDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~NavigationSwimDescription();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
