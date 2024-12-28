#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class EntityTypes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd09d2e;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityTypes& operator=(EntityTypes const&);
    EntityTypes(EntityTypes const&);
    EntityTypes();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool parseJson(::Json::Value const& root);

    MCAPI ~EntityTypes();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
