#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc {

struct Button {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mRawName;
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::npc::Button& operator=(::std::string_view newName);
    // NOLINTEND
};

} // namespace npc
