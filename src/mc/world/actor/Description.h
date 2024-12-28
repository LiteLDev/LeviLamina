#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct DeserializeDataParams;
// clang-format on

struct Description {
public:
    // prevent constructor by default
    Description& operator=(Description const&);
    Description(Description const&);
    Description();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual char const* getJsonName() const = 0;

    // vIndex: 1
    virtual ~Description();

    // vIndex: 2
    virtual void deserializeData(::DeserializeDataParams);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Description* parseDescription(::DeserializeDataParams deserializeDataParams);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $deserializeData(::DeserializeDataParams);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
