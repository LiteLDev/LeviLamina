#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WebServices::EduSignin {

struct DemoData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8a79aa;
    // NOLINTEND

public:
    // prevent constructor by default
    DemoData& operator=(DemoData const&);
    DemoData(DemoData const&);
    DemoData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~DemoData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace WebServices::EduSignin
