#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandFloatRange.h"
#include "mc/server/commands/CommandIntegerRange.h"

class CommandRationalRange {
public:
    // CommandRationalRange inner types define
    enum class BoundType : uchar {
        Undefined = 0,
        Min       = 1,
        Max       = 2,
    };

    enum class ValueType : int {
        Undefined = 0,
        Int       = 1,
        Float     = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::std::variant<::CommandIntegerRange, ::CommandFloatRange>> mRange;
    ::ll::TypedStorage<4, 4, ::CommandRationalRange::ValueType>                           mValueType;
    ::ll::TypedStorage<1, 1, ::CommandRationalRange::BoundType>                           mBoundType;
    ::ll::TypedStorage<1, 1, bool>                                                        mInvert;
    ::ll::TypedStorage<1, 1, bool>                                                        mInclusive;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::CommandRationalRange changeToValueType(::CommandRationalRange::ValueType const& valueType);

    MCNAPI bool isWithinRange(::std::variant<int, float> const& value) const;

    MCNAPI void setInvert(bool val);

    MCNAPI void setValue(::std::variant<int, float> const& value, ::CommandRationalRange::BoundType const& type);
    // NOLINTEND
};
