#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraAimAssistErrorType {

struct UnknownPresetId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk6e5efb;
    // NOLINTEND

public:
    // prevent constructor by default
    UnknownPresetId& operator=(UnknownPresetId const&);
    UnknownPresetId(UnknownPresetId const&);
    UnknownPresetId();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~UnknownPresetId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace CameraAimAssistErrorType
