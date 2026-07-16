#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/RealmJoinFailureData.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class IEntitlementManager;
class PlatformMultiplayerRestrictions;
namespace Editor { class IEditorManager; }
namespace OreUI { struct NetworkWorldJoinerSharedData; }
namespace World { class NetworkWorldJoiner; }
namespace ui { class ProgressScreenNavigation; }
// clang-format on

namespace OreUI {

class NetworkWorldJoinerFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::NetworkWorldJoinerFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::NetworkWorldJoiner&>                          mNetworkWorldJoiner;
    ::ll::TypedStorage<8, 8, ::DateManager const&>                                  mDateManager;
    ::ll::TypedStorage<8, 8, ::IEntitlementManager&>                                mEntitlementManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlatformMultiplayerRestrictions>>  mPlatformMultiplayerRestrictions;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<bool()>>                  mIsUsingUnifiedJoinRealmFlow;
    ::ll::TypedStorage<8, 80, ::std::optional<::OreUI::RealmJoinFailureData>>       mRealmJoinFailureData;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Editor::IEditorManager>> mEditorManager;
    ::ll::TypedStorage<1, 1, bool>                                                  mIsDirty;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::NetworkWorldJoinerSharedData>> mSharedData;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRealmsWorldJoinerJoinRealmWorldResultSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkWorldJoinerFacet& operator=(NetworkWorldJoinerFacet const&);
    NetworkWorldJoinerFacet(NetworkWorldJoinerFacet const&);
    NetworkWorldJoinerFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkWorldJoinerFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkWorldJoinerFacet(
        ::World::NetworkWorldJoiner&                         networkWorldJoiner,
        ::ui::ProgressScreenNavigation                       progressScreenNavigation,
        ::DateManager const&                                 dateManager,
        ::IEntitlementManager&                               entitlementManager,
        ::std::unique_ptr<::PlatformMultiplayerRestrictions> platformMultiplayerRestrictions,
        ::brstd::move_only_function<bool()>                  isUsingUnifiedJoinRealmFlow,
        ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> editorManager
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
        ::World::NetworkWorldJoiner&                         networkWorldJoiner,
        ::ui::ProgressScreenNavigation                       progressScreenNavigation,
        ::DateManager const&                                 dateManager,
        ::IEntitlementManager&                               entitlementManager,
        ::std::unique_ptr<::PlatformMultiplayerRestrictions> platformMultiplayerRestrictions,
        ::brstd::move_only_function<bool()>                  isUsingUnifiedJoinRealmFlow,
        ::Bedrock::NonOwnerPointer<::Editor::IEditorManager> editorManager
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
