#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/storage/LevelSummary.h"

// auto generated forward declare list
// clang-format off
class LocalPlayer;
struct LocalPlayerChangedConnector;
namespace OreUI { class IResourceAllowList; }
// clang-format on

namespace OreUI {

class LevelInfofacet : public ::OreUI::FacetBase<::OreUI::LevelInfofacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mLocalPlayerSubscription;
    ::ll::TypedStorage<8, 64, ::std::function<::LocalPlayer*()>>                          mGetCurrentLocalPlayer;
    ::ll::TypedStorage<8, 64, ::std::function<::LevelSummary*(::std::string)>>            mGetCurrentLevelSummary;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                                     mWorldIconPathString;
    ::ll::TypedStorage<8, 848, ::LevelSummary>                                            mLevelSummary;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mWorldName;
    ::ll::TypedStorage<1, 1, bool>                                                        mStateChanged;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsInitialized;
    ::ll::TypedStorage<1, 1, bool>                                                        mLocalPlayerLoaded;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelInfofacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelInfofacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelInfofacet(
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::LocalPlayerChangedConnector const&                       localPlayerChangedConnector,
        ::std::function<::LocalPlayer*()>                          getCurrentLocalPlayer,
        ::std::function<::LevelSummary*(::std::string)>            getCurrentLevelSummary
    );

    MCAPI void _init();

    MCAPI bool getIsInitialized() const;

    MCFOLD ::OreUI::AllowListPath const& getWorldIconPath() const;

    MCAPI ::std::string const& getWorldName() const;
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
        ::LocalPlayerChangedConnector const&                       localPlayerChangedConnector,
        ::std::function<::LocalPlayer*()>                          getCurrentLocalPlayer,
        ::std::function<::LevelSummary*(::std::string)>            getCurrentLevelSummary
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
