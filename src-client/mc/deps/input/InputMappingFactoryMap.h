#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class InputMappingFactory;
// clang-format on

class InputMappingFactoryMap {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InputMappingFactoryMap();

    virtual ::InputMappingFactory& getInputMappingFactory(int) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
