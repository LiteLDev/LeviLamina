#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct AudioContentRegistrationEntry;
// clang-format on

struct ServerboundRegisterAudioContentPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::AudioContentRegistrationEntry>> mRegistrations;
    // NOLINTEND
};
