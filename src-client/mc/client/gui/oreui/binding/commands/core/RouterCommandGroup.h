#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/CommandGroupBase.h"
#include "mc/client/gui/oreui/binding/methods/CallableImpl.h"
#include "mc/client/gui/oreui/routing/RouterHistoryAdapter.h"

namespace OreUI {

class RouterCommandGroup : public ::OreUI::CommandGroupBase<::OreUI::RouterCommandGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 312, ::OreUI::RouterHistoryAdapter>                      mRouter;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>> mPush;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, ::std::string>> mReplace;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void>>                mBack;
    ::ll::TypedStorage<8, 168, ::OreUI::Detail::CallableImpl<void, int>>           mGo;
    // NOLINTEND
};

} // namespace OreUI
