#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

class INIProperty {
public:
    // INIProperty inner types define
    enum class PropertyType : int {
        Unknown = 0,
        Int     = 1,
        Float   = 2,
        Bool    = 3,
        String  = 4,
        Invalid = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk1f72c7;
    ::ll::UntypedStorage<8, 32> mUnk984288;
    ::ll::UntypedStorage<8, 32> mUnkf04b53;
    // NOLINTEND

public:
    // prevent constructor by default
    INIProperty& operator=(INIProperty const&);
    INIProperty(INIProperty const&);
    INIProperty();
};

} // namespace cereal
