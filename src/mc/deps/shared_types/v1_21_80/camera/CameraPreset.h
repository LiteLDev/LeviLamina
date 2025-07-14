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

namespace SharedTypes::v1_21_80 {

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
    ::ll::UntypedStorage<8, 32> mUnkc4217c;
    ::ll::UntypedStorage<8, 32> mUnk31d324;
    ::ll::UntypedStorage<4, 8>  mUnkbdce60;
    ::ll::UntypedStorage<4, 8>  mUnk83c745;
    ::ll::UntypedStorage<4, 8>  mUnkfae930;
    ::ll::UntypedStorage<4, 8>  mUnkb99ceb;
    ::ll::UntypedStorage<4, 8>  mUnk5a4d05;
    ::ll::UntypedStorage<4, 8>  mUnk70cd04;
    ::ll::UntypedStorage<1, 2>  mUnkad2325;
    ::ll::UntypedStorage<4, 12> mUnk60dd0c;
    ::ll::UntypedStorage<4, 12> mUnk539f1e;
    ::ll::UntypedStorage<1, 2>  mUnke4d040;
    ::ll::UntypedStorage<4, 8>  mUnk8e1882;
    ::ll::UntypedStorage<4, 12> mUnk2a1ffe;
    ::ll::UntypedStorage<4, 16> mUnkb3b727;
    ::ll::UntypedStorage<4, 8>  mUnk295fe9;
    ::ll::UntypedStorage<4, 8>  mUnka1291a;
    ::ll::UntypedStorage<4, 8>  mUnkac01c4;
    ::ll::UntypedStorage<1, 2>  mUnk230970;
    ::ll::UntypedStorage<1, 2>  mUnkc68cb8;
    ::ll::UntypedStorage<8, 72> mUnk28a0cd;
    ::ll::UntypedStorage<1, 2>  mUnk1c232f;
    // NOLINTEND

public:
    // prevent constructor by default
    CameraPreset();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CameraPreset(::SharedTypes::v1_21_80::CameraPreset const&);

    MCNAPI CameraPreset(::SharedTypes::v1_21_80::CameraPreset&&);

    MCNAPI ::SharedTypes::v1_21_80::CameraPreset& operator=(::SharedTypes::v1_21_80::CameraPreset&&);

    MCNAPI ::SharedTypes::v1_21_80::CameraPreset& operator=(::SharedTypes::v1_21_80::CameraPreset const&);

    MCNAPI void write(::BinaryStream& stream) const;

    MCNAPI ~CameraPreset();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static ::Bedrock::Result<::SharedTypes::v1_21_80::CameraPreset> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_80::CameraPreset const&);

    MCNAPI void* $ctor(::SharedTypes::v1_21_80::CameraPreset&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_80
