#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class PlayerMessagingService;
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class AnimatedButtonCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::AnimatedButtonCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>> mReportRendered;
    ::ll::TypedStorage<8, 8, ::PlayerMessagingService&>                            mPlayerMessagingService;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimatedButtonCommandGroup& operator=(AnimatedButtonCommandGroup const&);
    AnimatedButtonCommandGroup(AnimatedButtonCommandGroup const&);
    AnimatedButtonCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit AnimatedButtonCommandGroup(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
