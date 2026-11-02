#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

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
    CameraAimAssistPresetExclusionDefinition& operator=(CameraAimAssistPresetExclusionDefinition const&);
    CameraAimAssistPresetExclusionDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    CameraAimAssistPresetExclusionDefinition(::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition const&);

    MCNAPI bool operator==(::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition const& rhs) const;

    MCNAPI ~CameraAimAssistPresetExclusionDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
