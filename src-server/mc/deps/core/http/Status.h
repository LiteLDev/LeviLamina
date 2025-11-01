#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class Status {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd7cbd1;
    ::ll::UntypedStorage<8, 16> mUnk6c71ee;
    // NOLINTEND

public:
    // prevent constructor by default
    Status& operator=(Status const&);
    Status(Status const&);
    Status();

};

}
