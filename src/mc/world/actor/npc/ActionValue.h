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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    ActionValue& operator=(ActionValue const&);
    ActionValue(ActionValue const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActionValue();

#ifdef LL_PLAT_C
    MCFOLD ::npc::ActionValue& operator=(::npc::ActionValue&&);
#endif

    MCAPI ::npc::ActionValue& operator=(::std::string_view newName);

    MCAPI ~ActionValue();
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
