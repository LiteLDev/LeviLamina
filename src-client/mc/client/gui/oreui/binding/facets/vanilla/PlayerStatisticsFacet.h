#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/identity/XUID.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Social { class IUserManager; }
namespace Social { class XboxLiveUserStatistics; }
// clang-format on

namespace OreUI {

class PlayerStatisticsFacet : public ::OreUI::FacetBase<::OreUI::PlayerStatisticsFacet> {
public:
    // PlayerStatisticsFacet inner types declare
    // clang-format off
    struct Statistic;
    struct FacetPlayerStatisticData;
    // clang-format on

    // PlayerStatisticsFacet inner types define
    enum class StatisticIcon : int {
        Clock   = 0,
        Boots   = 1,
        Pickaxe = 2,
        Sword   = 3,
    };

    struct Statistic {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                                name;
        ::ll::TypedStorage<8, 32, ::std::string>                                label;
        ::ll::TypedStorage<4, 4, ::OreUI::PlayerStatisticsFacet::StatisticIcon> icon;
        ::ll::TypedStorage<4, 4, int>                                           valueRaw;
        ::ll::TypedStorage<8, 32, ::std::string>                                valueDisplay;
        ::ll::TypedStorage<8, 32, ::std::string>                                valueNarration;
        ::ll::TypedStorage<4, 4, int>                                           currentUserValueRaw;
        ::ll::TypedStorage<8, 32, ::std::string>                                currentUserValueDisplay;
        ::ll::TypedStorage<8, 32, ::std::string>                                currentUserValueNarration;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~Statistic();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct FacetPlayerStatisticData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                                      mLoaded;
        ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::PlayerStatisticsFacet::Statistic>> mData;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::OreUI::PlayerStatisticsFacet::StatisticIcon>>
                                                                                           mStatisticIconMap;
    ::ll::TypedStorage<1, 1, bool>                                                         mLoaded;
    ::ll::TypedStorage<8, 16, ::std::optional<::Social::XUID>>                             mXuid;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::PlayerStatisticsFacet::Statistic>>    mData;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::XboxLiveUserStatistics>>         mStatistics;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> const> mUserManager;
    ::ll::TypedStorage<1, 1, bool>                                                         mDirty;
    ::ll::TypedStorage<4, 4, int> mLoadedUserStatisticsUpdateToken;
    ::ll::TypedStorage<4, 4, int> mCurrentUserStatisticsUpdateToken;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerStatisticsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerStatisticsFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PlayerStatisticsFacet(::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> userManager);

    MCAPI ::Bedrock::Result<void> _load(::std::string const& id);

    MCAPI void _updateStatisticsData();

    MCFOLD ::std::vector<::OreUI::PlayerStatisticsFacet::Statistic> const& getData();

    MCFOLD bool getLoaded();

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
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager> userManager);
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
