#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BehaviorDefinition;
// clang-format on

class BehaviorTreeDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                          mTreeName;
    ::ll::TypedStorage<8, 32, ::std::string>                          mStringInput;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BehaviorDefinition>> mRoot;
    // NOLINTEND
};
