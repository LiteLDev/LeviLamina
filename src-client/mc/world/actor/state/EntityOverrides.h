#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ActorUniqueID;
// clang-format on

class EntityOverrides {
public:
    // EntityOverrides inner types declare
    // clang-format off
    struct PropertiesContainer;
    // clang-format on

    // EntityOverrides inner types define
    struct PropertiesContainer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::std::variant<int, float>>> mProperties;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::EntityOverrides::PropertiesContainer>> mOverrides;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void remove(::ActorUniqueID entity, uint propertyIndex);
    // NOLINTEND
};
