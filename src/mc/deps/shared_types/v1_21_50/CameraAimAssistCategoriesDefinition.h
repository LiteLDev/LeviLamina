#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct CameraAimAssistCategoriesDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke3adf4;
    ::ll::UntypedStorage<8, 24> mUnk71df58;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistCategoriesDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CameraAimAssistCategoriesDefinition(::SharedTypes::v1_21_50::CameraAimAssistCategoriesDefinition const&);

    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoriesDefinition&
    operator=(::SharedTypes::v1_21_50::CameraAimAssistCategoriesDefinition const&);

    MCAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoriesDefinition&
    operator=(::SharedTypes::v1_21_50::CameraAimAssistCategoriesDefinition&&);

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~CameraAimAssistCategoriesDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::Bedrock::Result<::SharedTypes::v1_21_50::CameraAimAssistCategoriesDefinition>
    read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_50::CameraAimAssistCategoriesDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
