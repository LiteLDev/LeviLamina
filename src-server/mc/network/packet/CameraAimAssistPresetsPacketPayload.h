#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/CameraAimAssistPresetsPacketOperation.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoryDefinition; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistPresetDefinition; }
// clang-format on

struct CameraAimAssistPresetsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition>> mPresets;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition>> mCategories;
    ::ll::TypedStorage<1, 1, ::CameraAimAssistPresetsPacketOperation> mOperation;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistPresetsPacketPayload& operator=(CameraAimAssistPresetsPacketPayload const&);
    CameraAimAssistPresetsPacketPayload(CameraAimAssistPresetsPacketPayload const&);
    CameraAimAssistPresetsPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CameraAimAssistPresetsPacketPayload& operator=(::CameraAimAssistPresetsPacketPayload&&);

    MCAPI ~CameraAimAssistPresetsPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
