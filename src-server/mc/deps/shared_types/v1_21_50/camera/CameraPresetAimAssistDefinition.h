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
    ::ll::UntypedStorage<8, 40> mUnk3c4e65;
    ::ll::UntypedStorage<1, 2> mUnk60c5a8;
    ::ll::UntypedStorage<4, 12> mUnk89b38a;
    ::ll::UntypedStorage<4, 8> mUnk39024b;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraPresetAimAssistDefinition(CameraPresetAimAssistDefinition const&);
    CameraPresetAimAssistDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CameraPresetAimAssistDefinition(::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition&&);

    MCNAPI ::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition& operator=(::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition&&);

    MCNAPI ::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition& operator=(::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition const&);

    MCNAPI bool operator==(::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition const& rhs) const;

    MCNAPI void write(::BinaryStream& stream) const;

    MCNAPI ~CameraPresetAimAssistDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::Bedrock::Result<::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_50::CameraPresetAimAssistDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
