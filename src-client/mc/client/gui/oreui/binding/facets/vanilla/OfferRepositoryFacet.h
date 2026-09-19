#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IOfferRepository;
class ISubscriptionStateManager;
// clang-format on

namespace OreUI {

class OfferRepositoryFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::OfferRepositoryFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository>> mOfferRepository;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ISubscriptionStateManager>>    mSubscriptionStateManager;
    ::ll::TypedStorage<1, 1, bool>                                               mIsCommerceV2Enabled;
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
    ::ll::TypedStorage<8, 32, ::std::string>                   mStoreId;
    ::ll::TypedStorage<1, 1, bool>                             mIsDirty;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mOfferRepositoryEventSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSubscriptionDataChangedSubscription;
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
    MCAPI OfferRepositoryFacet(
        ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository> offerRepository,
        ::std::shared_ptr<::ISubscriptionStateManager>    subscriptionStateManager,
        bool                                              isCommerceV2Enabled
    );

    MCFOLD ::std::string const& getCoreSubscriptionPrice() const;

    MCFOLD ::std::string const& getCoreTerms() const;

    MCFOLD ::std::string const& getCoreTermsExtra() const;

    MCFOLD ::std::string const& getPlusSubscriptionPrice() const;

    MCFOLD ::std::string const& getPlusTerms() const;

    MCFOLD ::std::string const& getPlusTermsExtra() const;

    MCFOLD ::std::string const& getStoreId() const;

    MCFOLD bool isFinishedQueryingProductsAndPurchases() const;

    MCAPI bool isRealmsCoreOfferAvailable() const;

    MCFOLD bool isRealmsPlusOfferAvailable() const;

    MCAPI bool isRealmsTrialOfferAvailable() const;

    MCAPI void setFacetDirty();
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
        ::Bedrock::NotNullNonOwnerPtr<::IOfferRepository> offerRepository,
        ::std::shared_ptr<::ISubscriptionStateManager>    subscriptionStateManager,
        bool                                              isCommerceV2Enabled
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND
};

} // namespace OreUI
