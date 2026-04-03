#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/queries/core/ExposedRouterLocation.h"
#include "mc/client/gui/oreui/routing/RouterHistoryAdapter.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class RouterQuery : public ::OreUI::QueryBase<::OreUI::RouterQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 312, ::OreUI::RouterHistoryAdapter>    mRouter;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>   mRouterToken;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<uint64>>        mLength;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mAction;
    ::ll::TypedStorage<8, 824, ::OreUI::ExposedRouterLocation>   mLocation;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::ExposedRouterLocation, ::std::allocator<::OreUI::ExposedRouterLocation>>>
        mHistory;
    // NOLINTEND

public:
    // prevent constructor by default
    RouterQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RouterQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RouterQuery(::OreUI::ClientDependencies const& client);

    MCAPI void _updateState();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI
