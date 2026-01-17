#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct CreateDSTextureCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk525612;
    ::ll::UntypedStorage<4, 12> mUnk738d87;
    // NOLINTEND

public:
    // prevent constructor by default
    CreateDSTextureCmd& operator=(CreateDSTextureCmd const&);
    CreateDSTextureCmd(CreateDSTextureCmd const&);
    CreateDSTextureCmd();
};

} // namespace renoir
