#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOfferRepository;
// clang-format on

namespace OreUI {

class OfferRepositoryFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::OfferRepositoryFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository>> mOfferRepository;
    ::ll::TypedStorage<1, 1, bool>                             mIsFinishedQueryingProductsAndPurchases;
    ::ll::TypedStorage<1, 1, bool>                             mIsRealmsTrialOfferAvailable;
    ::ll::TypedStorage<1, 1, bool>                             mIsCoreOfferAvailable;
    ::ll::TypedStorage<1, 1, bool>                             mIsPlusOfferAvailable;
    ::ll::TypedStorage<8, 32, ::std::string>                   mCoreTerms;
    ::ll::TypedStorage<8, 32, ::std::string>                   mCoreTermsExtra;
    ::ll::TypedStorage<8, 32, ::std::string>                   mPlusTerms;
    ::ll::TypedStorage<8, 32, ::std::string>                   mPlusTermsExtra;
    ::ll::TypedStorage<8, 32, ::std::string>                   mCoreSubscriptionPrice;
    ::ll::TypedStorage<8, 32, ::std::string>                   mPlusSubscriptionPrice;
    ::ll::TypedStorage<1, 1, bool>                             mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOfferRepositoryEventSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    OfferRepositoryFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit OfferRepositoryFacet(::Bedrock::NotNullNonOwnerPtr<::IOfferRepository> offerRepository);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IOfferRepository> offerRepository);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
