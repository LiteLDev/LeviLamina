#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

namespace SharedTypes::v1_26_20::Brain {

struct MemorySetterDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                                  mMemoryName;
    ::ll::TypedStorage<8, 40, ::std::variant<bool, int, float, ::std::string>> mValue;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::Brain
