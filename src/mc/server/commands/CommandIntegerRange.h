#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandIntegerRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>  mMinValue;
    ::ll::TypedStorage<4, 4, int>  mMaxValue;
    ::ll::TypedStorage<1, 1, bool> mInvert;
    ::ll::TypedStorage<1, 1, bool> mInclusive;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandIntegerRange();

    MCAPI CommandIntegerRange(int minVal, int maxVal, bool invert, bool inclusive);

    MCAPI bool isWithinRange(int value) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCFOLD void* $ctor(int minVal, int maxVal, bool invert, bool inclusive);
    // NOLINTEND
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::CommandIntegerRange>();
// clang-format on
