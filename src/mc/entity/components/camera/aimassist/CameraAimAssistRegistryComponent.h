#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CameraAimAssistPresetsPacket;
class HashedString;
namespace CameraAimAssist { class PriorityCategory; }
namespace CameraAimAssist { class PriorityPreset; }
// clang-format on

class CameraAimAssistRegistryComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::CameraAimAssist::PriorityPreset>> mPriorityPresets;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::CameraAimAssist::PriorityCategory>>
        mPriorityCategoryList;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C bool hasPriorityPreset(::HashedString const& id) const;

    MCNAPI_C void updateRegistryFromPacket(::CameraAimAssistPresetsPacket const& aimAssistPresetsPacket);
    // NOLINTEND
};
