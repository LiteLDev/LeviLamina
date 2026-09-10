#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GeometryAtlas {

class AtlasImpl {
public:
    // AtlasImpl inner types declare
    // clang-format off
    class TileEntry;
    struct CommandArgs;
    struct Data;
    struct TileDirtyUpdate;
    // clang-format on

    // AtlasImpl inner types define
    enum class TileDirtyStatus : uchar {};

    class TileEntry {
    public:
        // TileEntry inner types define
        enum class Status : uchar {};
    };

    struct CommandArgs {};

    struct Data {};

    struct TileDirtyUpdate {};
};

} // namespace GeometryAtlas
