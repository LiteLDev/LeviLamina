#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct TypeNameInfo {
public:
    // prevent constructor by default
    TypeNameInfo& operator=(TypeNameInfo const&);
    TypeNameInfo(TypeNameInfo const&);
    TypeNameInfo();

public:
    // NOLINTBEGIN
    MCAPI TypeNameInfo(std::string, std::string, bool);

    MCAPI ~TypeNameInfo();

    // NOLINTEND
};

}; // namespace Scripting
