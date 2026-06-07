#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_20::Brain {

struct MemorySetterProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                   mMemoryName;
    ::ll::TypedStorage<8, 40, ::std::variant<bool, int, float, ::std::string>> mValue;
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::Brain
