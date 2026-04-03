#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"

namespace SharedTypes::v1_21_120 {

struct CameraAimAssistPresetExclusionDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Reference<0>>> mBlockExclusionList;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Reference<1>>> mActorExclusionList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>               mBlockTagExclusionList;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>               mEntityTypeFamilyExclusionList;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistPresetExclusionDefinition(CameraAimAssistPresetExclusionDefinition const&);
    CameraAimAssistPresetExclusionDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition&
    operator=(::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition&&);

    MCAPI ::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition&
    operator=(::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition const&) const;

    MCAPI ~CameraAimAssistPresetExclusionDefinition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
