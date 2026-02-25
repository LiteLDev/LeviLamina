#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/experimental/methods/CallableImpl.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
// clang-format on

namespace OreUI::Experimental {

class HapticsCommandGroup : public ::OreUI::Experimental::CommandGroupBase<::OreUI::Experimental::HapticsCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::AppPlatform&>                                           mAppPlatform;
    ::ll::TypedStorage<8, 136, ::OreUI::Experimental::Detail::CallableImpl<void, int>> mVibrate;
    // NOLINTEND

public:
    // prevent constructor by default
    HapticsCommandGroup& operator=(HapticsCommandGroup const&);
    HapticsCommandGroup(HapticsCommandGroup const&);
    HapticsCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HapticsCommandGroup() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::Experimental
