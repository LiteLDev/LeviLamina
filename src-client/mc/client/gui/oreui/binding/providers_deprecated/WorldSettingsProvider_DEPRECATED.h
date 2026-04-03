#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/LevelDataBindings.h"
#include "mc/client/gui/oreui/routing/RouterAction.h"
#include "mc/client/gui/screens/rules/WorldSettingsRules.h"
#include "mc/client/world/WorldCreationHelper.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/storage/LevelDataWrapper.h"
#include "mc/world/level/storage/LevelSummary.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class ILevelListCache;
class IMinecraftGame;
class MainMenuScreenController;
class MainMenuScreenModel;
class OreUIResourcePackFacet;
class TrialManager;
class WorldTemplateLoader;
class WorldTemplateManager;
struct ContentViews;
namespace OreUI { class Router; }
namespace OreUI { class RouterLocation; }
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI {

class WorldSettingsProvider_DEPRECATED {
public:
    // WorldSettingsProvider_DEPRECATED inner types define
    enum class TemplateLoadingState : int {
        InProgress = 0,
        Done       = 1,
        Error      = 2,
    };

    enum class StartLoadingTemplateResult : int {
        Ok              = 0,
        MissingTemplate = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1704, ::LevelDataWrapper>                                       mLevelDataWrapper;
    ::ll::TypedStorage<8, 1704, ::LevelDataWrapper>                                       mDefaultLevelDataWrapper;
    ::ll::TypedStorage<8, 8, ::TrialManager const&>                                       mTrialManager;
    ::ll::TypedStorage<8, 2464, ::WorldCreationHelper>                                    mWorldCreator;
    ::ll::TypedStorage<8, 328, ::OreUI::LevelDataBindings>                                mLevelDataBindings;
    ::ll::TypedStorage<8, 328, ::OreUI::LevelDataBindings>                                mDefaultLevelDataBindings;
    ::ll::TypedStorage<8, 848, ::LevelSummary>                                            mLevelSummary;
    ::ll::TypedStorage<8, 112, ::WorldSettingsRules>                                      mWorldSettingsRules;
    ::ll::TypedStorage<8, 32, ::std::string>                                              mWorldPreviewImagePath;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsWorldCreated;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MainMenuScreenController>>              mMainMenuScreenController;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::MainMenuScreenModel>>                   mMainMenuScreenModel;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUIResourcePackFacet>>                mResourcePackFacet;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::WorldTemplateLoader>>                    mWorldTemplateLoader;
    ::ll::TypedStorage<8, 8, ::ILevelListCache&>                                          mLevelListCache;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>> mKeyProvider;
    ::ll::TypedStorage<8, 8, ::Social::IUserManager&>                                     mUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager>>      mWorldTemplateManager;
    ::ll::TypedStorage<4, 4, int>                                                         mAmountOfScenesOnStack;
    ::ll::TypedStorage<1, 1, bool>                                                        mHasBeenReset;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDirty;
    ::ll::TypedStorage<1, 1, bool>                                                        mNextFrameDirty;
    ::ll::TypedStorage<1, 1, bool>                                                        mReloadInitialTemplate;
    ::ll::TypedStorage<1, 1, bool>                                                        mTemplateLoadingComplete;
    ::ll::TypedStorage<1, 1, bool>                                                        mInitializeResourcePacks;
    ::ll::TypedStorage<1, 1, bool>                                                        isRealmsSubscriptionActive;
    ::ll::TypedStorage<1, 1, bool> mNeedToReloadTemplateAndResourcePacksWhenGoingBackToCNW;
    ::ll::TypedStorage<1, 1, bool> mHasUserChangedPacks;
    ::ll::TypedStorage<1, 1, bool> mSnapshotIsPacksEnabled;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContentViews>> mSnapshotTexturePackViews;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContentViews>> mSnapshotBehaviourPackViews;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>             mSnapshotTexturePacksIDs;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>             mSnapshotBehaviourPacksIDs;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>   mOnRouteChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSettingsProvider_DEPRECATED& operator=(WorldSettingsProvider_DEPRECATED const&);
    WorldSettingsProvider_DEPRECATED(WorldSettingsProvider_DEPRECATED const&);
    WorldSettingsProvider_DEPRECATED();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldSettingsProvider_DEPRECATED(
        ::IMinecraftGame&                                                 minecraftGame,
        ::ILevelListCache&                                                levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::Social::IUserManager&                                           userManager,
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> const&      worldTemplateManager,
        ::std::shared_ptr<::MainMenuScreenModel>                          mainMenuScreenModel,
        ::TrialManager const&                                             trialManager,
        ::OreUI::Router&                                                  router
    );

    MCAPI void _setEditorWorldFlags();

    MCAPI bool arePacksDifferentFromSnapshotPacks() const;

    MCAPI void onRouteChanged(
        ::std::optional<::OreUI::RouterLocation> const& previousLocation,
        ::std::optional<::OreUI::RouterLocation> const& currentLocation,
        ::OreUI::RouterAction                           lastAction
    );

    MCAPI void reset();

    MCAPI void saveResourcePacksSnapshot();

    MCAPI void setContentViews(
        ::std::shared_ptr<::ContentViews> texturePackViews,
        ::std::shared_ptr<::ContentViews> behaviorPackViews
    );

    MCAPI void setWorldPreviewImagePath(::std::string const& worldPreviewImagePath);

    MCAPI ::OreUI::WorldSettingsProvider_DEPRECATED::StartLoadingTemplateResult
    startLoadingTemplate(::std::string const& worldTemplateId);

    MCAPI ::OreUI::WorldSettingsProvider_DEPRECATED::TemplateLoadingState tickTemplateLoader();

    MCAPI ~WorldSettingsProvider_DEPRECATED();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IMinecraftGame&                                                 minecraftGame,
        ::ILevelListCache&                                                levelListCache,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::Social::IUserManager&                                           userManager,
        ::Bedrock::NotNullNonOwnerPtr<::WorldTemplateManager> const&      worldTemplateManager,
        ::std::shared_ptr<::MainMenuScreenModel>                          mainMenuScreenModel,
        ::TrialManager const&                                             trialManager,
        ::OreUI::Router&                                                  router
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
