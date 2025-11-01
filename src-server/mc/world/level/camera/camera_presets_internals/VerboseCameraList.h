#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace CameraPresetsInternals {

struct VerboseCameraList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc6a2a8;
    ::ll::UntypedStorage<8, 24> mUnk254565;
    // NOLINTEND

public:
    // prevent constructor by default
    VerboseCameraList& operator=(VerboseCameraList const&);
    VerboseCameraList(VerboseCameraList const&);
    VerboseCameraList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CameraPresetsInternals::VerboseCameraList& operator=(::CameraPresetsInternals::VerboseCameraList&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

};

}
