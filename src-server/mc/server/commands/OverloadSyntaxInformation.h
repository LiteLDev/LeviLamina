#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OverloadSyntaxInformation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk328dfd;
    ::ll::UntypedStorage<4, 4>  mUnk8b9765;
    ::ll::UntypedStorage<4, 4>  mUnk137e0e;
    // NOLINTEND

public:
    // prevent constructor by default
    OverloadSyntaxInformation& operator=(OverloadSyntaxInformation const&);
    OverloadSyntaxInformation(OverloadSyntaxInformation const&);
    OverloadSyntaxInformation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::OverloadSyntaxInformation& operator=(::OverloadSyntaxInformation&&);
    // NOLINTEND
};
