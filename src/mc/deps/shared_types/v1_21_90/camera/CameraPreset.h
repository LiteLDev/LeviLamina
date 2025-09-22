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

namespace SharedTypes::v1_21_90 {

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
    ::ll::UntypedStorage<8, 32> mUnk81476d;
    ::ll::UntypedStorage<8, 32> mUnk6f93be;
    ::ll::UntypedStorage<4, 8>  mUnk4a3fd1;
    ::ll::UntypedStorage<4, 8>  mUnkc7ba64;
    ::ll::UntypedStorage<4, 8>  mUnk69a72b;
    ::ll::UntypedStorage<4, 8>  mUnk5239e1;
    ::ll::UntypedStorage<4, 8>  mUnk5d0d9d;
    ::ll::UntypedStorage<4, 8>  mUnke8c704;
    ::ll::UntypedStorage<1, 2>  mUnkee0b06;
    ::ll::UntypedStorage<4, 12> mUnkf0ddde;
    ::ll::UntypedStorage<4, 12> mUnk49f7ba;
    ::ll::UntypedStorage<1, 2>  mUnk66070d;
    ::ll::UntypedStorage<4, 8>  mUnk79ff9e;
    ::ll::UntypedStorage<4, 12> mUnkdbcc63;
    ::ll::UntypedStorage<4, 16> mUnk30034f;
    ::ll::UntypedStorage<4, 8>  mUnk9feef4;
    ::ll::UntypedStorage<4, 8>  mUnked89cf;
    ::ll::UntypedStorage<4, 8>  mUnkf26793;
    ::ll::UntypedStorage<1, 2>  mUnk2267ee;
    ::ll::UntypedStorage<1, 2>  mUnkf42f54;
    ::ll::UntypedStorage<8, 72> mUnk1f91fd;
    ::ll::UntypedStorage<1, 2>  mUnkcc557d;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraPreset();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CameraPreset(::SharedTypes::v1_21_90::CameraPreset const&);

    MCNAPI CameraPreset(::SharedTypes::v1_21_90::CameraPreset&&);

    MCNAPI ::SharedTypes::v1_21_90::CameraPreset& operator=(::SharedTypes::v1_21_90::CameraPreset&&);

    MCNAPI ::SharedTypes::v1_21_90::CameraPreset& operator=(::SharedTypes::v1_21_90::CameraPreset const&);

    MCNAPI void write(::BinaryStream& stream) const;

    MCNAPI ~CameraPreset();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::Bedrock::Result<::SharedTypes::v1_21_90::CameraPreset> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_90::CameraPreset const&);

    MCNAPI void* $ctor(::SharedTypes::v1_21_90::CameraPreset&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_90
