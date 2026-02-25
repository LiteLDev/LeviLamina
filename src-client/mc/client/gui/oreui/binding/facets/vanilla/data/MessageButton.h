#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/messaging/player_messaging/ButtonActionType.h"

namespace OreUI {

struct MessageButton {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                      mId;
    ::ll::TypedStorage<8, 32, ::std::string>                      mText;
    ::ll::TypedStorage<8, 32, ::std::string>                      mDescription;
    ::ll::TypedStorage<8, 32, ::std::string>                      mLink;
    ::ll::TypedStorage<4, 4, ::PlayerMessaging::ButtonActionType> mAction;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageButton& operator=(MessageButton const&);
    MessageButton(MessageButton const&);
    MessageButton();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MessageButton(::OreUI::MessageButton&&);

    MCAPI void openExternalLink();

    MCFOLD ::OreUI::MessageButton& operator=(::OreUI::MessageButton&&);

    MCAPI ~MessageButton();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::MessageButton&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
