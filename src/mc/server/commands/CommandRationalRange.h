#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    ::ll::UntypedStorage<4, 16> mUnk22d4a5;
    ::ll::UntypedStorage<4, 4>  mUnkde7d4d;
    ::ll::UntypedStorage<1, 1>  mUnk3d8439;
    ::ll::UntypedStorage<1, 1>  mUnkef96a4;
    ::ll::UntypedStorage<1, 1>  mUnk7a2deb;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandRationalRange& operator=(CommandRationalRange const&);
    CommandRationalRange(CommandRationalRange const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandRationalRange();

    MCAPI ::CommandRationalRange changeToValueType(::CommandRationalRange::ValueType const& valueType);

    MCAPI void setInvert(bool val);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
