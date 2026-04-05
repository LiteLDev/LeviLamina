#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

class RendererBackend {
public:
    // RendererBackend inner types declare
    // clang-format off
    struct BackendCommandsBuffer;
    struct BackendResourceCommandsBuffer;
    struct ConstantBufferUpdateData;
    // clang-format on

    // RendererBackend inner types define
    enum class GPUPerfTimingResult : int {};

    struct BackendCommandsBuffer {};

    struct BackendResourceCommandsBuffer {};

    struct ConstantBufferUpdateData {};
};

} // namespace renoir
