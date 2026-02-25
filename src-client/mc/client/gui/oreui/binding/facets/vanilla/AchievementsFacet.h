#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/FacetPlayerAchievementData.h"
#include "mc/client/social/manual_achievement_tracking/TrackedSetting.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class Option;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct FacetAchievementData; }
namespace Social { struct User; }
namespace persona { struct AchievementOfferCollectionManager; }
// clang-format on

namespace OreUI {

class AchievementsFacet : public ::OreUI::FacetBase<::OreUI::AchievementsFacet> {
public:
    // AchievementsFacet inner types define
    enum class AchievementFacetStatus : uchar {
        Loading = 0,
        Loaded  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::Social::User>()>>       mUserProvider;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Option*>>                                  mManualTrackingOption;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<1, 1, ::OreUI::AchievementsFacet::AchievementFacetStatus>          mStatus;
    ::ll::TypedStorage<8, 40, ::OreUI::FacetPlayerAchievementData>                        mFacetPlayerAchievementData;
    ::ll::TypedStorage<
        8,
        56,
        ::brstd::flat_map<
            ::std::string,
            ::ManualAchievementTracking::TrackedSetting,
            ::std::less<::std::string>,
            ::std::vector<::std::string>,
            ::std::vector<::ManualAchievementTracking::TrackedSetting>>>
                                                                            mTrackedSettings;
    ::ll::TypedStorage<1, 1, bool>                                          mNeedToUpdateAchievementData;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>              mTrackingOptionSubscription;
    ::ll::TypedStorage<4, 4, int>                                           mAchievementUpdateListenerToken;
    ::ll::TypedStorage<8, 8, ::persona::AchievementOfferCollectionManager&> mAchievementOfferCollectionManager;
    // NOLINTEND

public:
    // prevent constructor by default
    AchievementsFacet& operator=(AchievementsFacet const&);
    AchievementsFacet(AchievementsFacet const&);
    AchievementsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AchievementsFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AchievementsFacet(
        ::std::function<::std::shared_ptr<::Social::User>()>              userProvider,
        ::persona::AchievementOfferCollectionManager&                     achievementOfferCollectionManager,
        ::gsl::not_null<::Option*>                                        manualTrackingOption,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> const& resourceAllowList
    );

    MCAPI void _addAchievementUpdateCallback(::std::function<void()> callback);

    MCAPI void _getAchievementData();

    MCAPI void _refreshPersona(::OreUI::FacetAchievementData& facetAchievement) const;

    MCAPI void _removeAchievementUpdateCallback();

    MCFOLD ::OreUI::FacetPlayerAchievementData const& getFacetPlayerAchievementData() const;

    MCFOLD ::OreUI::AchievementsFacet::AchievementFacetStatus getStatus() const;

    MCAPI void setTrackedStatus(::std::string const& achievementId, bool tracked);
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
        ::std::function<::std::shared_ptr<::Social::User>()>              userProvider,
        ::persona::AchievementOfferCollectionManager&                     achievementOfferCollectionManager,
        ::gsl::not_null<::Option*>                                        manualTrackingOption,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> const& resourceAllowList
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
