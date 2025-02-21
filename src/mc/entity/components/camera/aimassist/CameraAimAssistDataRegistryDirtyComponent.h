#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

struct CameraAimAssistDataRegistryDirtyComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::HashedString>> mDirtyPresets;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::HashedString>> mDirtyCategories;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistDataRegistryDirtyComponent& operator=(CameraAimAssistDataRegistryDirtyComponent const&);
    CameraAimAssistDataRegistryDirtyComponent(CameraAimAssistDataRegistryDirtyComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CameraAimAssistDataRegistryDirtyComponent& operator=(::CameraAimAssistDataRegistryDirtyComponent&&);
    // NOLINTEND
};
