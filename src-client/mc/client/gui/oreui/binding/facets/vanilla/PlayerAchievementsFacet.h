#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/AchievementsFacet.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/FacetPlayerAchievementData.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/identity/XUID.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct FacetAchievementData; }
namespace Social { class IUserManager; }
namespace Social { struct XboxLiveUserAchievements; }
namespace persona { struct AchievementOfferCollectionManager; }
// clang-format on

namespace OreUI {

class PlayerAchievementsFacet : public ::OreUI::FacetBase<::OreUI::PlayerAchievementsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                        mDirty;
    ::ll::TypedStorage<8, 16, ::std::optional<::Social::XUID>>                            mXuid;
    ::ll::TypedStorage<1, 1, ::OreUI::AchievementsFacet::AchievementFacetStatus>          mStatus;
    ::ll::TypedStorage<8, 40, ::OreUI::FacetPlayerAchievementData>                        mData;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<4, 4, int>                                                    mAchievementUpdateListenerToken;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::XboxLiveUserAchievements>> mAchievements;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const> mUserManager;
    ::ll::TypedStorage<8, 8, ::persona::AchievementOfferCollectionManager&> mAchievementOfferCollectionManager;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerAchievementsFacet& operator=(PlayerAchievementsFacet const&);
    PlayerAchievementsFacet(PlayerAchievementsFacet const&);
    PlayerAchievementsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerAchievementsFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerAchievementsFacet(
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>      userManager,
        ::persona::AchievementOfferCollectionManager&              achievementOfferCollectionManager
    );

    MCAPI ::Bedrock::Result<void> _load(::std::string const& id);

    MCAPI void _updateAchievementData();

    MCAPI void _updatePersona(::OreUI::FacetAchievementData& facetAchievement) const;

    MCFOLD ::OreUI::FacetPlayerAchievementData const& getData();

    MCFOLD ::OreUI::AchievementsFacet::AchievementFacetStatus const& getStatus();

    MCAPI void load(::std::string const& id);
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
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>      userManager,
        ::persona::AchievementOfferCollectionManager&              achievementOfferCollectionManager
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
