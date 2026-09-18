#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TerrainLayer {
public:
    // TerrainLayer inner types define
    enum class Transparency : uchar {
        None   = 0,
        Sorted = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64 const>                       id;
    ::ll::TypedStorage<8, 16, ::std::string_view const>          name;
    ::ll::TypedStorage<1, 1, ::TerrainLayer::Transparency const> transparency;
    // NOLINTEND
};
