#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/FetchStatus.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class ILayoutServiceCache;
namespace OreUI { class FabObject; }
// clang-format on

namespace OreUI {

class FabQuery : public ::OreUI::QueryBase<::OreUI::FabQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::FetchStatus, ::OreUI::FetchStatus>> mFetchStatus;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::FabObject>>                           mFab;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ILayoutServiceCache>>           mLayoutServiceCache;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                                   mTaskGroup;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::SharedAsync<void>>                        mFetchTask;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                mRefreshSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    FabQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FabQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FabQuery(::Bedrock::NotNullNonOwnerPtr<::ILayoutServiceCache> layoutServiceCache, ::std::string const& fabId);

    MCAPI void _fetchFab(::std::string const& fabId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Bedrock::NotNullNonOwnerPtr<::ILayoutServiceCache> layoutServiceCache, ::std::string const& fabId);
    // NOLINTEND
};

} // namespace OreUI
