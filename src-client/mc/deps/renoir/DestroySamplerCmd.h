#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct DestroySamplerCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk988bbd;
    // NOLINTEND

public:
    // prevent constructor by default
    DestroySamplerCmd& operator=(DestroySamplerCmd const&);
    DestroySamplerCmd(DestroySamplerCmd const&);
    DestroySamplerCmd();
};

} // namespace renoir
