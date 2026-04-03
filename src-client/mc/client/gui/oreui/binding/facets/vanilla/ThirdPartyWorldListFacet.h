#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/ThirdPartyServersStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IAppPlatform;
struct NetworkWorldInfo;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct NetworkWorldData; }
namespace World { class ThirdPartyWorldList; }
// clang-format on

namespace OreUI {

class ThirdPartyWorldListFacet : public ::OreUI::FacetBase<::OreUI::ThirdPartyWorldListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::ThirdPartyWorldList&>                               mThirdPartyWorldList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mThirdpartyListSubscription;
    ::ll::TypedStorage<4, 4, ::OreUI::ThirdPartyServersStatus>                            mThirdPartyServersStatus;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::NetworkWorldData>>                   mFeaturedWorldData;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::NetworkWorldData>>                   mCreatorWorldData;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::std::monostate>>                mFetchThirdPartyWorldTask;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    ThirdPartyWorldListFacet& operator=(ThirdPartyWorldListFacet const&);
    ThirdPartyWorldListFacet(ThirdPartyWorldListFacet const&);
    ThirdPartyWorldListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~ThirdPartyWorldListFacet() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ThirdPartyWorldListFacet(
        ::World::ThirdPartyWorldList&                              thirdPartyWorldList,
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&          appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI bool _areWorldsDifferent(
        ::OreUI::NetworkWorldData const&             thirdPartyWorldData,
        ::std::shared_ptr<::NetworkWorldInfo> const& thirdPartyWorld
    ) const;

    MCAPI void _onWorldListUpdated();

    MCAPI void _refresh();

    MCAPI bool _shouldRefresh();

    MCFOLD ::std::vector<::OreUI::NetworkWorldData> const& getCreatorWorlds() const;

    MCFOLD ::std::vector<::OreUI::NetworkWorldData> const& getFeaturedWorlds() const;

    MCFOLD ::OreUI::FacetTaskState const getFetchThirdPartyWorldsTaskState() const;

    MCFOLD ::OreUI::ThirdPartyServersStatus const getThirdPartyServersStatus() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::World::ThirdPartyWorldList&                              thirdPartyWorldList,
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&          appPlatform,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
