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
    Button();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Button(::npc::Button const&);

#ifdef LL_PLAT_C
    MCFOLD ::npc::Button& operator=(::npc::Button&&);
#endif

    MCAPI ::npc::Button& operator=(::std::string_view newName);

    MCAPI ~Button();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::npc::Button const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace npc
