#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
class MainMenuScreenModel;
class SuggestedContentOffersProvider;
namespace OreUI { class WorldSettingsProvider_DEPRECATED; }
// clang-format on

namespace OreUI {

class DataProviderManager_DEPRECATED {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SuggestedContentOffersProvider>> mSuggestedContentOffersProvider;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::WorldSettingsProvider_DEPRECATED>> mWorldSettingsProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    DataProviderManager_DEPRECATED();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DataProviderManager_DEPRECATED(
        ::IMinecraftGame&                        minecraftGame,
        ::std::shared_ptr<::MainMenuScreenModel> mainMenuScreenModel
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftGame& minecraftGame, ::std::shared_ptr<::MainMenuScreenModel> mainMenuScreenModel);
    // NOLINTEND
};

} // namespace OreUI
