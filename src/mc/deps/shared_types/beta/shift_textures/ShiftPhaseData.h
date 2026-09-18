#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/shift_textures/ShiftNoiseAlignmentData.h"

namespace SharedTypes::Beta {

struct ShiftPhaseData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                 mTexture;
    ::ll::TypedStorage<4, 4, uint>                                                           mLocalTransitionTicks;
    ::ll::TypedStorage<4, 12, ::std::optional<::SharedTypes::Beta::ShiftNoiseAlignmentData>> mNoiseAlignment;
    // NOLINTEND
};

} // namespace SharedTypes::Beta
