#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MainMenuScreenModel;
class PlayScreenModel;
// clang-format on

namespace OreUI {

class ScreenModelProvider {
public:
    // ScreenModelProvider inner types declare
    // clang-format off
    struct FactoryFunctions;
    // clang-format on

    // ScreenModelProvider inner types define
    struct FactoryFunctions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::MainMenuScreenModel>()>>
                                                                                           mCreateMainMenuScreenModel;
        ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::PlayScreenModel>()>> mCreatePlayScreenModel;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~FactoryFunctions();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::OreUI::ScreenModelProvider::FactoryFunctions> mFactoryFunctions;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::MainMenuScreenModel>>          mMainMenuScreenModel;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::PlayScreenModel>>              mPlayScreenModel;
    // NOLINTEND
};

} // namespace OreUI
