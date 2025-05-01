#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
        ::ll::UntypedStorage<8, 64> mUnk27f353;
        // NOLINTEND

    public:
        // prevent constructor by default
        PropertiesContainer& operator=(PropertiesContainer const&);
        PropertiesContainer(PropertiesContainer const&);
        PropertiesContainer();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk66b90c;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityOverrides& operator=(EntityOverrides const&);
    EntityOverrides(EntityOverrides const&);
    EntityOverrides();
};
