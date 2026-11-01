#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Identifier.h"
#include "mc/deps/shared_types/util/Reference.h"

namespace SharedTypes::v1_21_50 {

struct CameraAimAssistPresetDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Identifier<5>>                mIdentifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Reference<-1>>> mExclusionList;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Reference<10>>> mLiquidTargetingList;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SharedTypes::Reference<10>, ::SharedTypes::Reference<6>>>
                                                                            mItemSettings;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::Reference<6>>> mDefaultItemSettings;
    ::ll::TypedStorage<8, 40, ::std::optional<::SharedTypes::Reference<6>>> mHandSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistPresetDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CameraAimAssistPresetDefinition(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const&);

    MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition&
    operator=(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition&&);

    MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition&
    operator=(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const&);

    MCNAPI ~CameraAimAssistPresetDefinition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
