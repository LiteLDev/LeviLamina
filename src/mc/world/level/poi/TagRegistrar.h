#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Poi {

struct TagRegistrar {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2a4bb8;
    ::ll::UntypedStorage<8, 8>  mUnk64e834;
    ::ll::UntypedStorage<8, 24> mUnk9bb496;
    // NOLINTEND

public:
    // prevent constructor by default
    TagRegistrar& operator=(TagRegistrar const&);
    TagRegistrar(TagRegistrar const&);
    TagRegistrar();
};

} // namespace Poi
