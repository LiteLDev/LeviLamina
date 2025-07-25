#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_80 {

struct CameraPresetFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk4e6eb2;
    ::ll::UntypedStorage<8, 288> mUnkf545ff;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraPresetFile& operator=(CameraPresetFile const&);
    CameraPresetFile(CameraPresetFile const&);
    CameraPresetFile();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~CameraPresetFile();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_80
