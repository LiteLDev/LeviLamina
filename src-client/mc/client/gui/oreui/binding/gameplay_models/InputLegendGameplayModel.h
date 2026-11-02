#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/GameplayModelBase.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class FocusShortcutRegistry; }
namespace OreUI { struct InputLegendEntry; }
// clang-format on

namespace OreUI {

class InputLegendGameplayModel : public ::OreUI::Experimental::GameplayModelBase<::OreUI::InputLegendGameplayModel> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::InputLegendEntry>> mEntries;
    ::ll::TypedStorage<1, 1, bool>                                      mHasEntries;
    ::ll::TypedStorage<8, 8, ::OreUI::FocusShortcutRegistry&>           mShortcuts;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::InputLegendEntry>> mScratch;
    // NOLINTEND

public:
    // prevent constructor by default
    InputLegendGameplayModel& operator=(InputLegendGameplayModel const&);
    InputLegendGameplayModel(InputLegendGameplayModel const&);
    InputLegendGameplayModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double) /*override*/;
    // NOLINTEND
};

} // namespace OreUI
