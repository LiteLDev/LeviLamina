#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Ability {
public:
    // Ability inner types define
    enum class Options : uchar {
        None                        = 0,
        NoSave                      = 1,
        CommandExposed              = 2,
        PermissionsInterfaceExposed = 4,
    };

    enum class Type : uchar {
        Invalid = 0,
        Unset   = 1,
        Bool    = 2,
        Float   = 3,
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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Ability();

    MCAPI Ability(bool value, ::Ability::Options ops);

    MCAPI bool getBool() const;

    MCAPI float getFloat() const;

    MCFOLD ::Ability::Type getType() const;

    MCAPI bool hasOption(::Ability::Options op) const;

    MCAPI bool isSet() const;

    MCAPI bool operator!=(::Ability const& rhs) const;

    MCAPI void setBool(bool val);

    MCAPI void setFloat(float val);

    MCFOLD void unSet();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(bool value, ::Ability::Options ops);
    // NOLINTEND
};
