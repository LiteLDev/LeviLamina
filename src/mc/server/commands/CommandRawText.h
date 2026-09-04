#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandRawText {
public:
    // member variables
    // NOLINTBEGIN
    ::std::string mText;
    // NOLINTEND
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::CommandRawText>();
// clang-format on
