#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core::JsonUtil::Detail {

class IterativeValidationHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk60189c;
    ::ll::UntypedStorage<8, 8>  mUnkf5f7be;
    ::ll::UntypedStorage<1, 1>  mUnk4d8dd5;
    ::ll::UntypedStorage<8, 24> mUnk38b87a;
    // NOLINTEND

public:
    // prevent constructor by default
    IterativeValidationHandler& operator=(IterativeValidationHandler const&);
    IterativeValidationHandler(IterativeValidationHandler const&);
    IterativeValidationHandler();
};

} // namespace Core::JsonUtil::Detail
