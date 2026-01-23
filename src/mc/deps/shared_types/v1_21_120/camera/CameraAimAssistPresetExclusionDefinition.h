#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
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
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistPresetExclusionDefinition& operator=(CameraAimAssistPresetExclusionDefinition const&);
    CameraAimAssistPresetExclusionDefinition(CameraAimAssistPresetExclusionDefinition const&);
    CameraAimAssistPresetExclusionDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition&
    operator=(::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition&&);

    MCAPI bool operator==(::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition const&) const;

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~CameraAimAssistPresetExclusionDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::Bedrock::Result<::SharedTypes::v1_21_120::CameraAimAssistPresetExclusionDefinition>
    read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_120
