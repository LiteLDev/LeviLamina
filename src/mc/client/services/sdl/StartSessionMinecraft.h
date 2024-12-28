#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SDL {

struct StartSessionMinecraft {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk71f3d9;
    ::ll::UntypedStorage<8, 24> mUnk49e2a6;
    // NOLINTEND

public:
    // prevent constructor by default
    StartSessionMinecraft& operator=(StartSessionMinecraft const&);
    StartSessionMinecraft(StartSessionMinecraft const&);
    StartSessionMinecraft();
};

} // namespace SDL
