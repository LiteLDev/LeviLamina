#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FieldTrialFlag {
public:
    // prevent constructor by default
    FieldTrialFlag& operator=(FieldTrialFlag const&);
    FieldTrialFlag(FieldTrialFlag const&);
    FieldTrialFlag();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit FieldTrialFlag(::std::string_view);

    MCAPI FieldTrialFlag(::std::string_view, bool);

    MCAPI explicit operator bool() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string_view);

    MCAPI void* $ctor(::std::string_view, bool);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
