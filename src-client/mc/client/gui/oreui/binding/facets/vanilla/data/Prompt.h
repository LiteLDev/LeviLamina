#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { struct PromptAction; }
// clang-format on

namespace OreUI {

struct Prompt {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                        mId;
    ::ll::TypedStorage<1, 1, bool>                                  mIsActive;
    ::ll::TypedStorage<8, 32, ::std::string>                        mTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                        mBody;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::PromptAction>> mActions;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>                  mChosenAction;
    // NOLINTEND

public:
    // prevent constructor by default
    Prompt& operator=(Prompt const&);
    Prompt(Prompt const&);
    Prompt();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::OreUI::Prompt& operator=(::OreUI::Prompt&&);

    MCAPI void
    show(::std::string id, ::std::string title, ::std::string body, ::std::vector<::OreUI::PromptAction> actions);

    MCAPI void storeChosenAction(int action);

    MCAPI ~Prompt();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
