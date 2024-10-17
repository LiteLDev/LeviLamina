#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/definitions/NavigationDescription.h"

class NavigationFlyDescription : public ::NavigationDescription {
public:
    // prevent constructor by default
    NavigationFlyDescription& operator=(NavigationFlyDescription const&);
    NavigationFlyDescription(NavigationFlyDescription const&);
    NavigationFlyDescription();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const;

    // vIndex: 1
    virtual ~NavigationFlyDescription();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI char const* getJsonName$() const;

    // NOLINTEND
};
