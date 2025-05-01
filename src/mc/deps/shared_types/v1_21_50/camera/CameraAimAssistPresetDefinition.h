#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

namespace SharedTypes::v1_21_50 {

struct CameraAimAssistPresetDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2a7d65;
    ::ll::UntypedStorage<8, 24> mUnkcae8a2;
    ::ll::UntypedStorage<8, 24> mUnk936550;
    ::ll::UntypedStorage<8, 64> mUnkd9330b;
    ::ll::UntypedStorage<8, 40> mUnk21d286;
    ::ll::UntypedStorage<8, 40> mUnkd282dd;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CameraAimAssistPresetDefinition();

    MCNAPI CameraAimAssistPresetDefinition(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const&);

    MCNAPI CameraAimAssistPresetDefinition(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition&&);

    MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition&
    operator=(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition&&);

    MCNAPI ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition&
    operator=(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const&);

    MCNAPI bool operator==(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const&) const;

    MCNAPI void write(::BinaryStream& stream) const;

    MCNAPI ~CameraAimAssistPresetDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition>
    read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const&);

    MCNAPI void* $ctor(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
