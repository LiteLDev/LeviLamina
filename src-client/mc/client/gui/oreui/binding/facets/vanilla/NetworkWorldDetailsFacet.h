#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/NetworkWorldDetails.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace World { class ExternalServerWorldList; }
namespace World { class ThirdPartyWorldList; }
// clang-format on

namespace OreUI {

class NetworkWorldDetailsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::NetworkWorldDetailsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::ThirdPartyWorldList&>                               mThirdPartyWorldList;
    ::ll::TypedStorage<8, 8, ::World::ExternalServerWorldList&>                           mExternalServerWorldList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mThirdpartyListSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mExternalListSubscription;
    ::ll::TypedStorage<8, 376, ::OreUI::NetworkWorldDetails>                              mCurrentNetworkWorldDetails;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mCurrentNetworkWorldId;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDirty;
    ::ll::TypedStorage<1, 1, bool>                                                        mHasLoadedDetails;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkWorldDetailsFacet& operator=(NetworkWorldDetailsFacet const&);
    NetworkWorldDetailsFacet(NetworkWorldDetailsFacet const&);
    NetworkWorldDetailsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkWorldDetailsFacet(
        ::World::ThirdPartyWorldList&                              thirdPartyWorldList,
        ::World::ExternalServerWorldList&                          externalServerWorldList,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
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
        ::World::ExternalServerWorldList&                          externalServerWorldList,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
