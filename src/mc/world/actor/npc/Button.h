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
    // prevent constructor by default
    Button& operator=(Button const&);
    Button(Button const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Button();

    MCFOLD_C ::npc::Button& operator=(::npc::Button&&);

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
