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
    MCAPI Button();

    MCAPI ::npc::Button& operator=(::std::string_view newName);

    MCAPI ~Button();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace npc
