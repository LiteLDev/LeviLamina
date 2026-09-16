#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class LevelChunk;
// clang-format on

struct SubChunkChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mCreationTime;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::LevelChunk>>          mLevelChunk;
    ::ll::TypedStorage<8, 64, ::std::function<void(::BlockSource&)>>  mChange;
    // NOLINTEND
};
