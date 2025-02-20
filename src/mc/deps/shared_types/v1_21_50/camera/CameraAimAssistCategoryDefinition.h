#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct CameraAimAssistCategoryDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk9c5c13;
    ::ll::UntypedStorage<8, 144> mUnk779abf;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistCategoryDefinition(CameraAimAssistCategoryDefinition const&);
    CameraAimAssistCategoryDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CameraAimAssistCategoryDefinition(::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition&&);

    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition&
    operator=(::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition&&);

    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition&
    operator=(::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const&) const;

    MCAPI ~CameraAimAssistCategoryDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::Bedrock::Result<::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition>
    read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
