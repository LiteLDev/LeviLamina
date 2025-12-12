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

struct CameraAimAssistPresetDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk88f949;
    ::ll::UntypedStorage<8, 24> mUnk39a475;
    ::ll::UntypedStorage<8, 24> mUnk1499e8;
    ::ll::UntypedStorage<8, 64> mUnk11a2d8;
    ::ll::UntypedStorage<8, 40> mUnka8111e;
    ::ll::UntypedStorage<8, 40> mUnk7970c5;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CameraAimAssistPresetDefinition();

    MCNAPI CameraAimAssistPresetDefinition(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition&&);

    MCNAPI CameraAimAssistPresetDefinition(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const&);

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
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::Bedrock::Result<::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition>
    read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition&&);

    MCNAPI void* $ctor(::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
