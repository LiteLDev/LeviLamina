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
    // symbol: ?parseJson@EntityTypes@@QEAA_NAEBVValue@Json@@@Z
    MCAPI bool parseJson(class Json::Value const& root);

    // symbol: ??1EntityTypes@@QEAA@XZ
    MCAPI ~EntityTypes();

    // NOLINTEND
};
