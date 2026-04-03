#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/client/gui/oreui/routing/RouterHistoryAdapter.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class RouterCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::RouterCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 312, ::OreUI::RouterHistoryAdapter>                      mRouter;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::std::string>> mPush;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, ::std::string>> mReplace;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void>>                mBack;
    ::ll::TypedStorage<8, 136, ::OreUI::Detail::CallableImpl<void, int>>           mGo;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterCommandGroup();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RouterCommandGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RouterCommandGroup(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
