#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::spawn { struct LocalMobCapCalc; }
// clang-format on

namespace br::spawn {

struct State {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                           mSpawnableChunkCount;
    ::ll::TypedStorage<4, 32, ::std::array<int, 8>>         mobCategoryCounts;
    ::ll::TypedStorage<8, 56, ::br::spawn::LocalMobCapCalc> mCalc;
    // NOLINTEND
};

} // namespace br::spawn
