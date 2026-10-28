#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IOptionRegistry;
class IReadWriteOptions;
class NewPlayerSystem;
class TextToSpeechSystem;
class TrialManager;
namespace MainMenu { class Gate; }
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
namespace Social { class IUserManager; }
namespace Social { class MultiplayerServiceManager; }
// clang-format on

namespace OreUI {

class PreStartFlowQuery : public ::OreUI::QueryBase<::OreUI::PreStartFlowQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IOptionRegistry&>         mOptions;
    ::ll::TypedStorage<8, 8, ::IReadWriteOptions const&> mReadWriteOptions;
    ::ll::TypedStorage<8, 8, ::AppPlatform&>             mPlatform;
    ::ll::TypedStorage<8, 8, ::Social::IUserManager&>    mUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::MultiplayerServiceManager>>
                                                                        mMultiplayerServiceManager;
    ::ll::TypedStorage<8, 8, ::NewPlayerSystem&>                        mNewPlayerSystem;
    ::ll::TypedStorage<8, 8, ::TrialManager&>                           mTrialManager;
    ::ll::TypedStorage<8, 64, ::std::function<::TextToSpeechSystem*()>> mTtsProvider;
    ::ll::TypedStorage<8, 64, ::std::function<::MainMenu::Gate*()>>     mMainMenuGateProvider;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mTextToSpeechDiscoveredToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mHasSetSafeZoneToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mAcknowledgedAutoSaveToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mForceFtuePopupsToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mLoggedIntoXblToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mShownPlatformNetworkConfirmation;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mShownFirstLaunchWelcomeModalToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mMainMenuGateToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mIdentitySignInToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mIdentitySignOutToken;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>           mIsPrimaryUserReady;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>           mShouldShowAccessibilitySettings;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>           mShouldShowSafeAreaWarning;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>           mShouldShowAutoSaveWarning;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>           mShouldShowPlatformSignInScreen;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>           mShouldShowXblFirstLaunchScreen;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>           mShouldShowBrandMoment;
    // NOLINTEND

public:
    // prevent constructor by default
    PreStartFlowQuery& operator=(PreStartFlowQuery const&);
    PreStartFlowQuery(PreStartFlowQuery const&);
    PreStartFlowQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PreStartFlowQuery(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);

    MCAPI void _updateProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
