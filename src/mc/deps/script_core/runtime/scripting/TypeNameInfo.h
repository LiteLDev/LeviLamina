#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct TypeNameInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk76b434;
    ::ll::UntypedStorage<8, 32> mUnkfb71c2;
    ::ll::UntypedStorage<1, 1>  mUnk8b3241;
    // NOLINTEND

public:
    // prevent constructor by default
    TypeNameInfo& operator=(TypeNameInfo const&);
    TypeNameInfo(TypeNameInfo const&);
    TypeNameInfo();
};

} // namespace Scripting
