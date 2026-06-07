#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class InvocationStatus; }
namespace Social { class SocialDrawerManager; }
// clang-format on

namespace OreUI {

class SocialSystemCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::SocialSystemCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::SocialDrawerManager>> mSocialDrawerManager;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, bool>>       mReportIsDrawerVisible;
    // NOLINTEND

public:
    // prevent constructor by default
    SocialSystemCommandGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SocialSystemCommandGroup(::OreUI::GameDependencies const& game);

    MCAPI void _reportIsDrawerVisible(::OreUI::InvocationStatus status, bool isVisible) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
