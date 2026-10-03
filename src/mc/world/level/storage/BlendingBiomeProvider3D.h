#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/SubChunkStorage.h"

// auto generated forward declare list
// clang-format off
class Biome;
// clang-format on

class BlendingBiomeProvider3D {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::vector<::std::unique_ptr<::SubChunkStorage<::Biome>>> const&> mBiomes;
    ::ll::TypedStorage<2, 2, ushort>                                                              mBiomeStackSize;
    ::ll::TypedStorage<8, 8, ::SubChunkStorage<::Biome>*>                                         mBiomeChunkStorage;
    ::ll::TypedStorage<2, 2, short>                                                               mSubChunkBlockIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    BlendingBiomeProvider3D& operator=(BlendingBiomeProvider3D const&);
    BlendingBiomeProvider3D(BlendingBiomeProvider3D const&);
    BlendingBiomeProvider3D();
};
