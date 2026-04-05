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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    CameraAimAssistRegistryComponent& operator=(CameraAimAssistRegistryComponent const&);
    CameraAimAssistRegistryComponent(CameraAimAssistRegistryComponent const&);
    CameraAimAssistRegistryComponent();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    CameraAimAssistRegistryComponent& operator=(CameraAimAssistRegistryComponent const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI CameraAimAssistRegistryComponent();
#endif

    MCAPI CameraAimAssistRegistryComponent(::CameraAimAssistRegistryComponent&&);

#ifdef LL_PLAT_C
    MCAPI CameraAimAssistRegistryComponent(::CameraAimAssistRegistryComponent const&);

    MCAPI bool hasPriorityPreset(::HashedString const& id) const;
#endif

    MCAPI ::CameraAimAssistRegistryComponent& operator=(::CameraAimAssistRegistryComponent&&);

    MCAPI void updateRegistryFromPacket(::CameraAimAssistPresetsPacket const& aimAssistPresetsPacket);

    MCAPI ~CameraAimAssistRegistryComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor();
#endif

    MCAPI void* $ctor(::CameraAimAssistRegistryComponent&&);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(::CameraAimAssistRegistryComponent const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
