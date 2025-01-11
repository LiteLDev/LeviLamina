#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AttributesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnk299f74;
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
