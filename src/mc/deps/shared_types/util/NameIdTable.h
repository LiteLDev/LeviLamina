#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Util {

struct NameIdTable {
public:
    // NameIdTable inner types define
    using IdType = int;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, int>> mEntries;
    // NOLINTEND
};

} // namespace SharedTypes::Util
