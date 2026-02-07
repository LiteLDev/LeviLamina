#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/controllers/ModalScreenButtonId.h"
#include "mc/client/gui/screens/controllers/ModalScreenButtonMode.h"

struct ModalScreenData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                contentTitleId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> contentTitleParams;
    ::ll::TypedStorage<8, 32, ::std::string>                contentLabelId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> contentLabelParams;
    ::ll::TypedStorage<8, 32, ::std::string>                ttsContentTitleId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> ttsContentTitleParams;
    ::ll::TypedStorage<8, 32, ::std::string>                ttsContentLabelId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> ttsContentLabelParams;
    ::ll::TypedStorage<8, 32, ::std::string>                eventScreenNameOverride;
    ::ll::TypedStorage<8, 32, ::std::string>                leftButtonLabelId;
    ::ll::TypedStorage<8, 32, ::std::string>                middleButtonLabelId;
    ::ll::TypedStorage<8, 32, ::std::string>                rightCancelButtonLabelId;
    ::ll::TypedStorage<4, 4, ::ModalScreenButtonMode>       buttonMode;
    ::ll::TypedStorage<1, 1, bool>                          contentContainsPII;
    ::ll::TypedStorage<1, 1, bool>                          closeButton;
    ::ll::TypedStorage<1, 1, bool>                          enableEmoticonify;
    ::ll::TypedStorage<4, 4, ::ModalScreenButtonId>         initialFocusButton;
    ::ll::TypedStorage<1, 1, bool>                          leftButtonClosesModal;
    ::ll::TypedStorage<1, 1, bool>                          middleButtonClosesModal;
    ::ll::TypedStorage<1, 1, bool>                          rightButtonClosesModal;
    ::ll::TypedStorage<1, 1, bool>                          shouldHideKeyboard;
    // NOLINTEND

public:
    // prevent constructor by default
    ModalScreenData& operator=(ModalScreenData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ModalScreenData();

    MCAPI ModalScreenData(::ModalScreenData&&);

    MCAPI ModalScreenData(::ModalScreenData const&);

    MCAPI ~ModalScreenData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ModalScreenData&&);

    MCAPI void* $ctor(::ModalScreenData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
