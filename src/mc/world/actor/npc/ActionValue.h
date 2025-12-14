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
    // prevent constructor by default
    ActionValue& operator=(ActionValue const&);
    ActionValue(ActionValue const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActionValue();

    MCFOLD_C ::npc::ActionValue& operator=(::npc::ActionValue&&);

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
