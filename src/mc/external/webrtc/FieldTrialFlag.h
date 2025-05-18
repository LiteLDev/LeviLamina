#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FieldTrialFlag {
public:
    // prevent constructor by default
    FieldTrialFlag();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FieldTrialFlag(::std::string_view);

    MCNAPI FieldTrialFlag(::std::string_view, bool);

    MCNAPI explicit operator bool() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view);

    MCNAPI void* $ctor(::std::string_view, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
