#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Ability {
public:
    // Ability inner types define
    enum class Options : schar {
        None                        = 0x0,
        NoSave                      = 0x1,
        CommandExposed              = 0x2,
        PermissionsInterfaceExposed = 0x4,
    };

    enum class Type : schar {
        Invalid = 0x0,
        Unset   = 0x1,
        Bool    = 0x2,
        Float   = 0x3,
    };

    union Value {
        bool  mBoolVal;
        float mFloatVal;
    };

    Ability::Type    mType;    // this+0x0
    Ability::Value   mValue;   // this+0x4
    Ability::Options mOptions; // this+0x8

public:
    // NOLINTBEGIN
    MCAPI Ability();

    MCAPI Ability(bool value, ::Ability::Options ops);

    MCAPI bool getBool() const;

    MCAPI float getFloat() const;

    MCAPI ::Ability::Type getType() const;

    MCAPI bool hasOption(::Ability::Options op) const;

    MCAPI bool isSet() const;

    MCAPI bool operator!=(class Ability const& rhs) const;

    MCAPI void setBool(bool val);

    MCAPI void setFloat(float val);

    MCAPI void unSet();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
