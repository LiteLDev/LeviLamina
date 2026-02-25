#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"
#include "mc/client/gui/oreui/binding/experimental/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/experimental/queries/core/ExposedRouterLocation.h"
#include "mc/client/gui/oreui/routing/RouterHistoryAdapter.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental { class ClientDependencies; }
// clang-format on

namespace OreUI::Experimental {

class RouterQuery : public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::RouterQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 312, ::OreUI::RouterHistoryAdapter>                  mRouter;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mRouterToken;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<uint64>>        mLength;
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>> mAction;
    ::ll::TypedStorage<8, 808, ::OreUI::Experimental::ExposedRouterLocation>   mLocation;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::Experimental::PropertyVector<
            ::OreUI::Experimental::ExposedRouterLocation,
            ::std::allocator<::OreUI::Experimental::ExposedRouterLocation>>>
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
    MCAPI explicit RouterQuery(::OreUI::Experimental::ClientDependencies const& client);

    MCAPI void _updateState();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Experimental::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI::Experimental
