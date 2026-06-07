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
    MessageButton();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MessageButton(::OreUI::MessageButton const&);

    MCAPI explicit MessageButton(::ButtonData const& button);

    MCAPI void openExternalLink();

    MCFOLD ::OreUI::MessageButton& operator=(::OreUI::MessageButton&&);

    MCAPI ~MessageButton();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::OreUI::MessageButton const&);

    MCFOLD void* $ctor(::ButtonData const& button);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
