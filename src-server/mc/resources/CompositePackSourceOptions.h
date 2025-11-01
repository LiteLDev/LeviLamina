#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CompositePackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk224253;
    ::ll::UntypedStorage<8, 24> mUnkc4bb12;
    // NOLINTEND

public:
    // prevent constructor by default
    CompositePackSourceOptions& operator=(CompositePackSourceOptions const&);
    CompositePackSourceOptions(CompositePackSourceOptions const&);
    CompositePackSourceOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CompositePackSourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
