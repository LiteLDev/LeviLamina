#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MinecraftglTFExporter {
public:
    // MinecraftglTFExporter inner types declare
    // clang-format off
    struct AsyncModelContent;
    struct AsyncModelMaterial;
    struct BakeData;
    struct ImageBakeData;
    struct glTFExportProgress;
    // clang-format on

    // MinecraftglTFExporter inner types define
    struct AsyncModelContent {};

    struct AsyncModelMaterial {
    public:
        // AsyncModelMaterial inner types define
        enum class ShaderType : uchar {};
    };

    struct BakeData {};

    struct ImageBakeData {};

    struct glTFExportProgress {};
};
