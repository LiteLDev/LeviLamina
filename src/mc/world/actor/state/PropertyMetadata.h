#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    ::ll::UntypedStorage<8, 48> mUnkb31e60;
    ::ll::UntypedStorage<1, 1>  mUnkf835bf;
    ::ll::UntypedStorage<8, 8>  mUnkec4683;
    ::ll::UntypedStorage<8, 8>  mUnkf0318d;
    ::ll::UntypedStorage<1, 1>  mUnk94ae84;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyMetadata& operator=(PropertyMetadata const&);
    PropertyMetadata(PropertyMetadata const&);
    PropertyMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PropertyMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
