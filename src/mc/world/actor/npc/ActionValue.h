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
    MCAPI ActionValue();

    MCAPI ::npc::ActionValue& operator=(::std::string_view newName);

    MCAPI ::std::string_view rawValue() const;

    MCAPI ~ActionValue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace npc
