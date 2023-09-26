#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

struct CameraPreset {
public:
    // CameraPreset inner types define
    enum class AudioListener {};

public:
    // prevent constructor by default
    CameraPreset();

public:
    // NOLINTBEGIN
    // symbol: ??0CameraPreset@@QEAA@$$QEAU0@@Z
    MCAPI CameraPreset(struct CameraPreset&&);

    // symbol: ??0CameraPreset@@QEAA@AEBU0@@Z
    MCAPI CameraPreset(struct CameraPreset const&);

    // symbol: ??4CameraPreset@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct CameraPreset& operator=(struct CameraPreset const&);

    // symbol: ??4CameraPreset@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct CameraPreset& operator=(struct CameraPreset&&);

    // symbol: ?write@CameraPreset@@QEBAXAEAVBinaryStream@@@Z
    MCAPI void write(class BinaryStream&) const;

    // symbol: ??1CameraPreset@@QEAA@XZ
    MCAPI ~CameraPreset();

    // symbol: ?bindType@CameraPreset@@SAXXZ
    MCAPI static void bindType();

    // symbol: ?read@CameraPreset@@SA?AV?$Result@UCameraPreset@@Verror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI static class Bedrock::Result<struct CameraPreset> read(class ReadOnlyBinaryStream&);

    // NOLINTEND
};
