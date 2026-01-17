#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct DestroyDSTextureCmd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkbde0c4;
    // NOLINTEND

public:
    // prevent constructor by default
    DestroyDSTextureCmd& operator=(DestroyDSTextureCmd const&);
    DestroyDSTextureCmd(DestroyDSTextureCmd const&);
    DestroyDSTextureCmd();
};

} // namespace renoir
