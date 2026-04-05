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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    Button& operator=(Button const&);
    Button(Button const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI Button();

#ifdef LL_PLAT_C
    MCFOLD ::npc::Button& operator=(::npc::Button&&);
#endif

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
