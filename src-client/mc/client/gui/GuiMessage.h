#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GuiMessage {
public:
    // GuiMessage inner types define
    enum class MessageType : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::GuiMessage::MessageType>       mType;
    ::ll::TypedStorage<8, 32, ::std::string>                  mMessage;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mFilteredMessage;
    ::ll::TypedStorage<8, 32, ::std::string>                  mTTSMessage;
    ::ll::TypedStorage<8, 32, ::std::string>                  mUsername;
    ::ll::TypedStorage<8, 32, ::std::string>                  mFullString;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mFilteredFullString;
    ::ll::TypedStorage<8, 32, ::std::string>                  mAuthorXuid;
    ::ll::TypedStorage<1, 1, bool>                            mForceVisible;
    ::ll::TypedStorage<1, 1, bool>                            mTTSRequired;
    ::ll::TypedStorage<4, 4, float>                           mDuration;
    ::ll::TypedStorage<1, 1, bool>                            mHasBeenSeen;
    // NOLINTEND

public:
    // prevent constructor by default
    GuiMessage& operator=(GuiMessage const&);
    GuiMessage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GuiMessage(::GuiMessage&&);

    MCAPI GuiMessage(::GuiMessage const&);

    MCAPI GuiMessage(
        ::GuiMessage::MessageType      type,
        ::std::string const&           username,
        ::std::string const&           message,
        ::std::optional<::std::string> filteredMessage,
        ::std::string const&           ttsMessage,
        ::std::string const&           authorXuid,
        float                          lifetime,
        bool                           forceVisible,
        bool                           ttsRequired
    );

    MCAPI ::GuiMessage& operator=(::GuiMessage&&);

    MCAPI ~GuiMessage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::GuiMessage&&);

    MCAPI void* $ctor(::GuiMessage const&);

    MCAPI void* $ctor(
        ::GuiMessage::MessageType      type,
        ::std::string const&           username,
        ::std::string const&           message,
        ::std::optional<::std::string> filteredMessage,
        ::std::string const&           ttsMessage,
        ::std::string const&           authorXuid,
        float                          lifetime,
        bool                           forceVisible,
        bool                           ttsRequired
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
