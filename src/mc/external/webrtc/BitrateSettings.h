#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct BitrateSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnka119d8;
    ::ll::UntypedStorage<4, 8> mUnk47f1d8;
    ::ll::UntypedStorage<4, 8> mUnk63432a;
    // NOLINTEND

public:
    // prevent constructor by default
    BitrateSettings& operator=(BitrateSettings const&);
    BitrateSettings(BitrateSettings const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BitrateSettings();

    MCNAPI ~BitrateSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
