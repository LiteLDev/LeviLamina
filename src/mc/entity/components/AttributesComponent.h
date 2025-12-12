#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/BaseAttributeMap.h"

struct AttributesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 96, ::BaseAttributeMap> mAttributes;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributesComponent& operator=(AttributesComponent const&);
    AttributesComponent(AttributesComponent const&);
    AttributesComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AttributesComponent(::AttributesComponent&&);

    MCNAPI_C ~AttributesComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::AttributesComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
