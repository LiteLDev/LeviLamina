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
    // prevent constructor by default
    CameraAimAssistRegistryComponent& operator=(CameraAimAssistRegistryComponent const&);
    CameraAimAssistRegistryComponent(CameraAimAssistRegistryComponent const&);
    CameraAimAssistRegistryComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CameraAimAssistRegistryComponent(::CameraAimAssistRegistryComponent&&);

    MCAPI_C bool hasPriorityPreset(::HashedString const& id) const;

    MCAPI ::CameraAimAssistRegistryComponent& operator=(::CameraAimAssistRegistryComponent&&);

    MCAPI void updateRegistryFromPacket(::CameraAimAssistPresetsPacket const& aimAssistPresetsPacket);

    MCAPI ~CameraAimAssistRegistryComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor();

    MCAPI void* $ctor(::CameraAimAssistRegistryComponent&&);

    MCAPI_C void* $ctor(::CameraAimAssistRegistryComponent const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
