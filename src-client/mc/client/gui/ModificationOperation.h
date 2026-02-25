#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

struct ModificationOperation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Json::Value*>       baseVal;
    ::ll::TypedStorage<8, 8, ::Json::Value const*> modificationOperation;
    ::ll::TypedStorage<8, 32, ::std::string>       controlNamePath;
    ::ll::TypedStorage<4, 4, int>                  treeLevel;
    // NOLINTEND
};
