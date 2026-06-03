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
    ::ll::TypedStorage<4, 4, ::cereal::INIProperty::PropertyType> mType;
    ::ll::TypedStorage<8, 32, ::std::string>                      name;
    ::ll::TypedStorage<8, 32, ::std::string>                      value;
    // NOLINTEND
};

} // namespace cereal
