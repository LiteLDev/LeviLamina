#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Gameface {

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
    ::ll::TypedStorage<2, 2, ::Gameface::ResponseResourceRange::Status>                         mStatus;
    ::ll::TypedStorage<8, 24, ::std::optional<::Gameface::ResponseResourceRange::RangeInBytes>> mRangeInBytes;
    ::ll::TypedStorage<8, 8, uint64>                                                            mSize;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::std::optional<::Gameface::ResponseResourceRange::RangeInBytes> const& getRangeInBytes() const;

    MCFOLD uint64 getSize() const;

    MCFOLD ::Gameface::ResponseResourceRange::Status getStatus() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Gameface::ResponseResourceRange makeOkResponseRange(uint64 start, uint64 end, uint64 size);

    MCAPI static ::Gameface::ResponseResourceRange
    makePartialContentResponseRange(uint64 start, uint64 end, uint64 size);

    MCAPI static ::Gameface::ResponseResourceRange makeRangeNotSatisfiableResponse(uint64 size);
    // NOLINTEND
};

} // namespace Gameface
