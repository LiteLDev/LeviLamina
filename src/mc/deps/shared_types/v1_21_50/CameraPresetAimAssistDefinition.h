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

struct CameraPresetAimAssistDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnke459e8;
    ::ll::UntypedStorage<1, 2>  mUnk60c5a8;
    ::ll::UntypedStorage<4, 12> mUnk89b38a;
    ::ll::UntypedStorage<4, 8>  mUnk39024b;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraPresetAimAssistDefinition(CameraPresetAimAssistDefinition const&);
    CameraPresetAimAssistDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CameraPresetAimAssistDefinition(::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition&&);

    MCAPI ::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition&
    operator=(::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition&&);

    MCAPI ::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition&
    operator=(::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition const& rhs) const;

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~CameraPresetAimAssistDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static ::Bedrock::Result<::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition>
    read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
