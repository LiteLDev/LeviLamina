#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/routing/RouterHistoryAdapter.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class Router; }
// clang-format on

namespace OreUI {

class RouterFacet : public ::OreUI::FacetBase<::OreUI::RouterFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                             mIsDirty;
    ::ll::TypedStorage<8, 312, ::OreUI::RouterHistoryAdapter>  mRouterHistoryAdapter;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOnRouteChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RouterFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RouterFacet(::OreUI::Router& router);

    MCFOLD ::OreUI::RouterHistoryAdapter& getHistoryAdapter();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Router& router);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
