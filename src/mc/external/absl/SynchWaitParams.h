#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

struct SynchWaitParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk55e3d7;
    ::ll::UntypedStorage<8, 8> mUnkad487e;
    ::ll::UntypedStorage<8, 8> mUnk62853d;
    ::ll::UntypedStorage<8, 8> mUnk7b9b8d;
    ::ll::UntypedStorage<8, 8> mUnk9dcd1d;
    ::ll::UntypedStorage<8, 8> mUnke35cbb;
    ::ll::UntypedStorage<8, 8> mUnk122fe4;
    ::ll::UntypedStorage<1, 1> mUnkf3dae9;
    // NOLINTEND

public:
    // prevent constructor by default
    SynchWaitParams& operator=(SynchWaitParams const&);
    SynchWaitParams(SynchWaitParams const&);
    SynchWaitParams();
};

} // namespace absl
