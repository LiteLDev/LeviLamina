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
    // symbol: ??0Ability@@QEAA@XZ
    MCAPI Ability();

    // symbol: ??0Ability@@QEAA@_NW4Options@0@@Z
    MCAPI Ability(bool value, ::Ability::Options ops);

    // symbol: ?getBool@Ability@@QEBA_NXZ
    MCAPI bool getBool() const;

    // symbol: ?getFloat@Ability@@QEBAMXZ
    MCAPI float getFloat() const;

    // symbol: ?getType@Ability@@QEBA?AW4Type@1@XZ
    MCAPI ::Ability::Type getType() const;

    // symbol: ?hasOption@Ability@@QEBA_NW4Options@1@@Z
    MCAPI bool hasOption(::Ability::Options op) const;

    // symbol: ?isSet@Ability@@QEBA_NXZ
    MCAPI bool isSet() const;

    // symbol: ??9Ability@@QEBA_NAEBV0@@Z
    MCAPI bool operator!=(class Ability const& rhs) const;

    // symbol: ?setBool@Ability@@QEAAX_N@Z
    MCAPI void setBool(bool val);

    // symbol: ?setFloat@Ability@@QEAAXM@Z
    MCAPI void setFloat(float val);

    // symbol: ?unSet@Ability@@QEAAXXZ
    MCAPI void unSet();

    // NOLINTEND
};
