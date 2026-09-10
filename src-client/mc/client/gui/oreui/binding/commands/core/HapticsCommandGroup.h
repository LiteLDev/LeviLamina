#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class HapticsCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::HapticsCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::AppPlatform&>                             mAppPlatform;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int>> mVibrate;
    // NOLINTEND

public:
    // prevent constructor by default
    HapticsCommandGroup& operator=(HapticsCommandGroup const&);
    HapticsCommandGroup(HapticsCommandGroup const&);
    HapticsCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit HapticsCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
