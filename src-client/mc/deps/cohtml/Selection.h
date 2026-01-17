#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml::TextInput {

struct Selection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkd03fba;
    ::ll::UntypedStorage<4, 4> mUnk379267;
    // NOLINTEND

public:
    // prevent constructor by default
    Selection& operator=(Selection const&);
    Selection(Selection const&);
    Selection();
};

} // namespace cohtml::TextInput
