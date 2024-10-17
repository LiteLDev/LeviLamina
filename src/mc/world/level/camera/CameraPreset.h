#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

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
    MCAPI CameraPreset(struct CameraPreset&&);

    MCAPI CameraPreset(struct CameraPreset const&);

    MCAPI struct CameraPreset& operator=(struct CameraPreset&&);

    MCAPI struct CameraPreset& operator=(struct CameraPreset const&);

    MCAPI void write(class BinaryStream& stream) const;

    MCAPI ~CameraPreset();

    MCAPI static void bindType(struct cereal::ReflectionCtx& ctx);

    MCAPI static class Bedrock::Result<struct CameraPreset> read(class ReadOnlyBinaryStream& stream);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct CameraPreset const&);

    MCAPI void* ctor$(struct CameraPreset&&);

    MCAPI void dtor$();

    // NOLINTEND
};
