#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct InPackagePackSourceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke14392;
    ::ll::UntypedStorage<8, 16> mUnk935766;
    ::ll::UntypedStorage<1, 1>  mUnka65f17;
    // NOLINTEND

public:
    // prevent constructor by default
    InPackagePackSourceOptions& operator=(InPackagePackSourceOptions const&);
    InPackagePackSourceOptions(InPackagePackSourceOptions const&);
    InPackagePackSourceOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~InPackagePackSourceOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
