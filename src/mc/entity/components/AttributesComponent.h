#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseAttributeMap;
// clang-format on

struct AttributesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::BaseAttributeMap> mAttributes;
    // NOLINTEND

public:
    // prevent constructor by default
    AttributesComponent& operator=(AttributesComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AttributesComponent();

    MCAPI AttributesComponent(::AttributesComponent const& other);

    MCAPI AttributesComponent(::AttributesComponent&&);

    MCAPI ::AttributesComponent& operator=(::AttributesComponent&& other);

    MCAPI ~AttributesComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCFOLD void* $ctor(::AttributesComponent const& other);

    MCAPI void* $ctor(::AttributesComponent&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
