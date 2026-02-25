#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct UICondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>       controlName;
    ::ll::TypedStorage<8, 8, ::Json::Value const*> condition;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~UICondition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
