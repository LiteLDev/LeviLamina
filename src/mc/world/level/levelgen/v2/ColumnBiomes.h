#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BiomeIdType;
// clang-format on

namespace br::worldgen {

struct ColumnBiomes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeIdType>> mBiomes;
    ::ll::TypedStorage<1, 1, bool>                          mEnumerated;
    // NOLINTEND
};

} // namespace br::worldgen
