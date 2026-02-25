#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class ResponseResourceRange {
public:
    // ResponseResourceRange inner types declare
    // clang-format off
    struct RangeInBytes;
    // clang-format on

    // ResponseResourceRange inner types define
    enum class Status : ushort {
        Ok                  = 200,
        PartialContent      = 206,
        RangeNotSatisfiable = 416,
    };

    struct RangeInBytes {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, uint64> start;
        ::ll::TypedStorage<8, 8, uint64> end;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::OreUI::ResponseResourceRange::Status>                         mStatus;
    ::ll::TypedStorage<8, 24, ::std::optional<::OreUI::ResponseResourceRange::RangeInBytes>> mRangeInBytes;
    ::ll::TypedStorage<8, 8, uint64>                                                         mSize;
    // NOLINTEND
};

} // namespace OreUI
