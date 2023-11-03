#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct CameraPreset {
public:
    // CameraPreset inner types define
    enum class AudioListener : uchar {
        CAMERA = 0x0,
        PLAYER = 0x1,
    };

public:
    std::string                  mIdentifier;
    std::string                  mParentPreset;
    std::optional<Vec3>          mPos;
    std::optional<float>         mYaw;
    std::optional<float>         mPitch;
    std::optional<AudioListener> mListener;
    std::optional<bool>          playEffect;

    // prevent constructor by default
    CameraPreset();

public:
    // NOLINTBEGIN
    // symbol: ??0CameraPreset@@QEAA@$$QEAU0@@Z
    MCAPI CameraPreset(struct CameraPreset&&);

    // symbol: ??0CameraPreset@@QEAA@AEBU0@@Z
    MCAPI CameraPreset(struct CameraPreset const&);

    // symbol: ??4CameraPreset@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct CameraPreset& operator=(struct CameraPreset&&);

    // symbol: ??4CameraPreset@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct CameraPreset& operator=(struct CameraPreset const&);

    // symbol: ?write@CameraPreset@@QEBAXAEAVBinaryStream@@@Z
    MCAPI void write(class BinaryStream&) const;

    // symbol: ??1CameraPreset@@QEAA@XZ
    MCAPI ~CameraPreset();

    // symbol: ?bindType@CameraPreset@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?read@CameraPreset@@SA?AV?$Result@UCameraPreset@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI static class Bedrock::Result<struct CameraPreset> read(class ReadOnlyBinaryStream&);

    // NOLINTEND
};
