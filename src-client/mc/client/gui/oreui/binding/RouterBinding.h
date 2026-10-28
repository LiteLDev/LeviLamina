#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/RouterHistoryAdapter.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class View; }
// clang-format on

namespace OreUI {

class RouterBinding {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 312, ::OreUI::RouterHistoryAdapter>  mRouterHistoryAdapter;
    ::ll::TypedStorage<8, 8, ::cohtml::View&>                  mView;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSubscription;
    ::ll::TypedStorage<8, 24, ::std::vector<void*>>            mEventHandles;
    ::ll::TypedStorage<1, 1, bool>                             mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterBinding& operator=(RouterBinding const&);
    RouterBinding(RouterBinding const&);
    RouterBinding();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void bind();

    MCAPI void update();
    // NOLINTEND
};

} // namespace OreUI
