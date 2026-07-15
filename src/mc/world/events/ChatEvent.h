#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

struct ChatEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                              mMessage;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                             mFilteredMessage;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>                                 mSender;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::WeakRef<::EntityContext>>>> mTargets;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mAuthor;
    ::ll::TypedStorage<1, 1, bool>                                                        mMessageValid;
    ::ll::TypedStorage<1, 1, bool>                                                        mAllowFiltering;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ChatEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
