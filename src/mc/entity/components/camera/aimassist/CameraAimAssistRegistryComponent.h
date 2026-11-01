#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
class CameraAimAssistPresetsPacket;
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
#ifdef LL_PLAT_C
    MCNAPI ::CameraAimAssist::PriorityCategory const& getPriorityCategory(::HashedString const& id) const;
#endif

    MCNAPI ::CameraAimAssist::PriorityPreset const& getPriorityPreset(::HashedString const& id) const;

#ifdef LL_PLAT_C
    MCNAPI bool hasPriorityPreset(::HashedString const& id) const;

    MCNAPI void loadRegistryFromPacket(::CameraAimAssistPresetsPacket const& aimAssistPresetsPacket);
#endif

    MCNAPI void updateRegistryFromPacket(::CameraAimAssistPresetsPacket const& aimAssistPresetsPacket);

    MCNAPI ~CameraAimAssistRegistryComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
