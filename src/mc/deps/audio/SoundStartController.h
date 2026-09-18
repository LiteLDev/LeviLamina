#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

class SoundStartController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk3f07ea;
    ::ll::UntypedStorage<4, 4> mUnkf0bb77;
    ::ll::UntypedStorage<1, 1> mUnkec1e4b;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundStartController& operator=(SoundStartController const&);
    SoundStartController(SoundStartController const&);
    SoundStartController();
};

} // namespace Audio
