#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

struct Url : public ::std::string {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~Url();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
