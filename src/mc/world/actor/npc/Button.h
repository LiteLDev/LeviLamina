#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace npc {

struct Button {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke4ea12;
    ::ll::UntypedStorage<8, 32> mUnk5635a5;
    // NOLINTEND

public:
    // prevent constructor by default
    Button& operator=(Button const&);
    Button(Button const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Button();

    MCNAPI_C ::npc::Button& operator=(::npc::Button&&);

    MCNAPI ::npc::Button& operator=(::std::string_view newName);

    MCNAPI ~Button();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace npc
