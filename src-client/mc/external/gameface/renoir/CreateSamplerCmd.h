#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct CreateSamplerCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk7d3d67;
    ::ll::UntypedStorage<4, 12> mUnk754a4e;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateSamplerCmd& operator=(CreateSamplerCmd const&);
    CreateSamplerCmd(CreateSamplerCmd const&);
    CreateSamplerCmd();
};

} // namespace renoir
