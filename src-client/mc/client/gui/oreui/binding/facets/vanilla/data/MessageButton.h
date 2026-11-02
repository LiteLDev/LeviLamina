#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/services/messaging/player_messaging/ButtonActionType.h"

// auto generated forward declare list
// clang-format off
struct ButtonData;
// clang-format on

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
    MCNAPI explicit MessageButton(::ButtonData const& button);

    MCNAPI void openExternalLink();

    MCNAPI ::OreUI::MessageButton& operator=(::OreUI::MessageButton&&);

    MCNAPI ~MessageButton();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ButtonData const& button);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
