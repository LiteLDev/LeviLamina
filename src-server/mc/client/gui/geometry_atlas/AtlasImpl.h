#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GeometryAtlas {

class AtlasImpl {
public:
    // AtlasImpl inner types declare
    // clang-format off
    struct TileEntry;
    struct Data;
    struct CommandArgs;
    struct TileDirtyUpdate;
    // clang-format on

    // AtlasImpl inner types define
    enum class TileDirtyStatus : uchar {};

    struct TileEntry {
    public:
        // TileEntry inner types define
        enum class Status : uchar {};
    };

    struct Data {};

    struct CommandArgs {};

    struct TileDirtyUpdate {};
};

} // namespace GeometryAtlas
