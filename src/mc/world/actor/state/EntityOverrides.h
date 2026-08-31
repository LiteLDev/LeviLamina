#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"

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
#ifdef LL_PLAT_C
    MCAPI void clear(::ActorUniqueID entity);

    MCAPI void remove(::ActorUniqueID entity, uint propertyIndex);

    MCAPI void set(::ActorUniqueID entity, uint propertyIndex, ::std::variant<::std::monostate, int, float> value);
#endif
    // NOLINTEND
};
