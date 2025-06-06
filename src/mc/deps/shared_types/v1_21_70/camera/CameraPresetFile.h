#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_70 {

struct CameraPresetFile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkad3aa4;
    ::ll::UntypedStorage<8, 288> mUnk2d31e8;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraPresetFile& operator=(CameraPresetFile const&);
    CameraPresetFile(CameraPresetFile const&);
    CameraPresetFile();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_70
