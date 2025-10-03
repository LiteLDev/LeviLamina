#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Ability {
public:
    // Ability inner types define
    enum class Type : uchar {
        Invalid = 0,
        Unset   = 1,
        Bool    = 2,
        Float   = 3,
    };

    enum class Options : uchar {
        // bitfield representation
        None                        = 0,
        NoSave                      = 1 << 0,
        CommandExposed              = 1 << 1,
        PermissionsInterfaceExposed = 1 << 2,
    };

    union Value {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 4, bool>  mBoolVal;
        ::ll::TypedStorage<4, 4, float> mFloatVal;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::Ability::Type>    mType;
    ::ll::TypedStorage<4, 4, ::Ability::Value>   mValue;
    ::ll::TypedStorage<1, 1, ::Ability::Options> mOptions;
    // NOLINTEND
};
