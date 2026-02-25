#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class RequestResourceRange {
public:
    // RequestResourceRange inner types declare
    // clang-format off
    struct RangeInBytes;
    // clang-format on

    // RequestResourceRange inner types define
    struct RangeInBytes {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64>                   start;
        ::ll::TypedStorage<8, 16, ::std::optional<uint64>> end;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::OreUI::RequestResourceRange::RangeInBytes> mRangeInBytes;
    // NOLINTEND
};

} // namespace OreUI
