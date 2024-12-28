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
        ::ll::UntypedStorage<1, 4> mUnk45a32a;
        ::ll::UntypedStorage<4, 4> mUnk46b742;
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
    // prevent constructor by default
    Ability& operator=(Ability const&);
    Ability(Ability const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Ability();

    MCAPI Ability(bool value, ::Ability::Options ops);

    MCAPI bool getBool() const;

    MCAPI float getFloat() const;

    MCAPI ::Ability::Type getType() const;

    MCAPI bool hasOption(::Ability::Options op) const;

    MCAPI bool isSet() const;

    MCAPI bool operator!=(::Ability const& rhs) const;

    MCAPI void setBool(bool val);

    MCAPI void setFloat(float val);

    MCAPI void unSet();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(bool value, ::Ability::Options ops);
    // NOLINTEND
};
