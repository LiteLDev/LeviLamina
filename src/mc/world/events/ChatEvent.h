#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class TextPacket;
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
    // prevent constructor by default
    ChatEvent& operator=(ChatEvent const&);
    ChatEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChatEvent(::ChatEvent const&);

    MCNAPI ChatEvent(::ChatEvent&&);

    MCNAPI ChatEvent(::WeakRef<::EntityContext> sender, ::TextPacket const& packet);

    MCNAPI ~ChatEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ChatEvent const&);

    MCNAPI void* $ctor(::ChatEvent&&);

    MCNAPI void* $ctor(::WeakRef<::EntityContext> sender, ::TextPacket const& packet);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
