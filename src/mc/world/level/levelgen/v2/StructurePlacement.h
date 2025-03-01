#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
namespace br::worldgen { struct RandomSpreadPlacement; }
// clang-format on

namespace br::worldgen {

struct StructurePlacement {
public:
    // StructurePlacement inner types define
    using Type = ::std::variant<::br::worldgen::RandomSpreadPlacement>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                                  mFrequency;
    ::ll::TypedStorage<4, 4, int>                                                    mSalt;
    ::ll::TypedStorage<8, 8, bool (*)(int64, int64, ::ChunkPos, float)>              mReducer;
    ::ll::TypedStorage<4, 16, ::std::variant<::br::worldgen::RandomSpreadPlacement>> mType;
    // NOLINTEND
};

} // namespace br::worldgen
