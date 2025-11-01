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
    ::ll::UntypedStorage<8, 32> mUnkd65ae8;
    ::ll::UntypedStorage<8, 144> mUnk779abf;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistCategoryDefinition& operator=(CameraAimAssistCategoryDefinition const&);
    CameraAimAssistCategoryDefinition(CameraAimAssistCategoryDefinition const&);
    CameraAimAssistCategoryDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CameraAimAssistCategoryDefinition(::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition&&);

    MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition& operator=(::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition&&);

    MCNAPI bool operator==(::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition const&) const;

    MCNAPI ~CameraAimAssistCategoryDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::Bedrock::Result<::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_50::CameraAimAssistCategoryDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
