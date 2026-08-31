#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc {

struct ActionValue {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mRawText;
    ::ll::TypedStorage<8, 32, ::std::string> mText;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::npc::ActionValue& operator=(::std::string_view newName);
    // NOLINTEND
};

} // namespace npc
