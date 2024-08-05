#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class EntityTypes {
public:
    // prevent constructor by default
    EntityTypes& operator=(EntityTypes const&);
    EntityTypes(EntityTypes const&);
    EntityTypes();

public:
    // NOLINTBEGIN
    MCAPI bool parseJson(class Json::Value const& root);

    MCAPI ~EntityTypes();

    // NOLINTEND
};
