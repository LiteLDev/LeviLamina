#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_70 {

struct CameraPreset {
public:
    // CameraPreset inner types define
    enum class AudioListener : uchar {
        Camera = 0,
        Player = 1,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk65857f;
    ::ll::UntypedStorage<8, 32> mUnke128b3;
    ::ll::UntypedStorage<4, 8> mUnka17ee5;
    ::ll::UntypedStorage<4, 8> mUnkb1a7ee;
    ::ll::UntypedStorage<4, 8> mUnkb3f0f5;
    ::ll::UntypedStorage<4, 8> mUnk79e9c4;
    ::ll::UntypedStorage<4, 8> mUnkc731a4;
    ::ll::UntypedStorage<4, 8> mUnk7dfc7d;
    ::ll::UntypedStorage<1, 2> mUnk903cc7;
    ::ll::UntypedStorage<4, 12> mUnkd1cb9a;
    ::ll::UntypedStorage<4, 12> mUnk3f2dd3;
    ::ll::UntypedStorage<1, 2> mUnk903554;
    ::ll::UntypedStorage<4, 8> mUnka709c2;
    ::ll::UntypedStorage<4, 12> mUnk1a1199;
    ::ll::UntypedStorage<4, 16> mUnk8251f5;
    ::ll::UntypedStorage<4, 8> mUnke6af36;
    ::ll::UntypedStorage<4, 8> mUnk5b2b3d;
    ::ll::UntypedStorage<4, 8> mUnk62fc6e;
    ::ll::UntypedStorage<1, 2> mUnk8488dc;
    ::ll::UntypedStorage<1, 2> mUnkeb6766;
    ::ll::UntypedStorage<1, 2> mUnkde641e;
    ::ll::UntypedStorage<8, 72> mUnk2a2d0b;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraPreset();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CameraPreset(::SharedTypes::v1_21_70::CameraPreset const&);

    MCNAPI ::SharedTypes::v1_21_70::CameraPreset& operator=(::SharedTypes::v1_21_70::CameraPreset&&);

    MCNAPI ::SharedTypes::v1_21_70::CameraPreset& operator=(::SharedTypes::v1_21_70::CameraPreset const&);

    MCNAPI void setVerticalRotationLimit(::std::optional<::std::array<float, 2>> opt);

    MCNAPI ~CameraPreset();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_70::CameraPreset const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
