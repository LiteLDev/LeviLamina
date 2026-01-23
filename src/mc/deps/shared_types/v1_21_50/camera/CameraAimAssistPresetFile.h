#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_50/camera/CameraAimAssistPresetDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_50 {

struct CameraAimAssistPresetFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                             mFormatVersion;
    ::ll::TypedStorage<8, 224, ::SharedTypes::v1_21_50::CameraAimAssistPresetDefinition> mDefinition;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraAimAssistPresetFile& operator=(CameraAimAssistPresetFile const&);
    CameraAimAssistPresetFile(CameraAimAssistPresetFile const&);
    CameraAimAssistPresetFile();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CameraAimAssistPresetFile(::SharedTypes::v1_21_50::CameraAimAssistPresetFile&&);

    MCAPI ~CameraAimAssistPresetFile();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_50::CameraAimAssistPresetFile&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
