#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Identifier.h"
#include "mc/deps/shared_types/v1_21_50/camera/CameraAimAssistCategoryPriorities.h"
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
    ::ll::TypedStorage<8, 32, ::SharedTypes::Identifier<6>>                                mName;
    ::ll::TypedStorage<8, 208, ::SharedTypes::v1_21_50::CameraAimAssistCategoryPriorities> mPriorities;
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
