#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

class PropertyMetadata {
public:
    // PropertyMetadata inner types define
    enum class ContainedType : schar {
        None              = -1,
        IntProperty       = 0,
        FloatProperty     = 1,
        BoolProperty      = 2,
        EnumIndexProperty = 3,
        Count             = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                   mName;
    ::ll::TypedStorage<1, 1, ::PropertyMetadata::ContainedType> mType;
    ::ll::TypedStorage<8, 8, uint64>                            mOverallIndex;
    ::ll::TypedStorage<8, 8, uint64>                            mTypeArrayIndex;
    ::ll::TypedStorage<1, 1, bool>                              mClientSync;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PropertyMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
