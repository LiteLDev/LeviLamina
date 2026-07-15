#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ResultAny {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk92ee80;
    ::ll::UntypedStorage<8, 64> mUnk3edf86;
    // NOLINTEND

public:
    // prevent constructor by default
    ResultAny& operator=(ResultAny const&);
    ResultAny(ResultAny const&);
    ResultAny();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::entt::meta_any toAny();
    // NOLINTEND
};

} // namespace Scripting
