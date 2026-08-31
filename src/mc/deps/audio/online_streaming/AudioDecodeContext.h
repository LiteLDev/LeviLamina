#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

class AudioDecodeContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk486802;
    ::ll::UntypedStorage<8, 8>  mUnkbf9721;
    ::ll::UntypedStorage<8, 8>  mUnk103abc;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioDecodeContext& operator=(AudioDecodeContext const&);
    AudioDecodeContext(AudioDecodeContext const&);
    AudioDecodeContext();
};

} // namespace Audio
