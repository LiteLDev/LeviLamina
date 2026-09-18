#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/queries/menus/layout/FetchStatus.h"
#include "mc/deps/core/threading/SharedAsync.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class ILayoutServiceCache;
struct LayoutCacheSnapshot;
// clang-format on

namespace OreUI {

class LayoutQuery : public ::OreUI::QueryBase<::OreUI::LayoutQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::FetchStatus, ::OreUI::FetchStatus>> mFetchStatus;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>, ::std::optional<::std::string>>>
                                                                                      mVariant;
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::std::string, ::std::string>> mFabIds;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ILayoutServiceCache>>   mLayoutServiceCache;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                           mTaskGroup;
    ::ll::TypedStorage<8, 16, ::Bedrock::Threading::SharedAsync<void>>                mFetchTask;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                        mRefreshSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    LayoutQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LayoutQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    LayoutQuery(::Bedrock::NotNullNonOwnerPtr<::ILayoutServiceCache> layoutServiceCache, ::std::string const& layoutId);

    MCAPI void _applyLayout(::LayoutCacheSnapshot const& layout);

    MCAPI void _continueLayout(::std::string const& layoutId);

    MCAPI void _fetchLayout(::std::string const& layoutId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Bedrock::NotNullNonOwnerPtr<::ILayoutServiceCache> layoutServiceCache, ::std::string const& layoutId);
    // NOLINTEND
};

} // namespace OreUI
