#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Gameface {

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
    ::ll::TypedStorage<8, 24, ::Gameface::RequestResourceRange::RangeInBytes> mRangeInBytes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::Gameface::RequestResourceRange::RangeInBytes const& getRangeInBytes() const;
    // NOLINTEND
};

} // namespace Gameface
