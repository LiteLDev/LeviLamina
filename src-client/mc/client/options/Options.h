#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/KeyboardType.h"
#include "mc/client/options/BaseOptions.h"
#include "mc/client/options/GraphicsQualityPresetMode.h"
#include "mc/client/options/IOptions.h"
#include "mc/client/renderer/PlatformConfiguration.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/Subject.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deviceinfo/DeviceMemoryTier.h"
#include "mc/options/GraphicsMode.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionResetFlags.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceEventCoordinator;
class GamePadRemappingLayout;
class IAdvancedGraphicsOptions;
class IOptions;
class KeyboardRemappingLayout;
class Option;
class OptionsObserver;
class TaskGroup;
struct ChatOptions;
struct OptionSaveDeferral;
struct OptionValueInterface;
struct ScriptDebuggerSettings;
namespace Bedrock::PubSub { class Subscription; }
namespace Core { class SingleThreadedLock; }
namespace Scripting { struct WatchdogSettings; }
namespace Social::Events { class Event; }
// clang-format on

class Options : public ::BaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ChatOptions>>            mChatOptions;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>          mFilePath;
    ::ll::TypedStorage<1, 1, bool>                                        mLoadInProgress;
    ::ll::TypedStorage<1, 1, bool>                                        mPrimaryUserStatus;
    ::ll::TypedStorage<1, 1, bool>                                        mAllowedToSave;
    ::ll::TypedStorage<4, 4, ::IOptions::SaveRequestMode>                 mSaveRequestMode;
    ::ll::TypedStorage<4, 4, ::std::atomic<int>>                          mSaveDeferralCount;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>     mNextSaveTime;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OptionValueInterface>>   mOptionValues;
    ::ll::TypedStorage<4, 4, int>                                         mDefaultViewDistanceChunks;
    ::ll::TypedStorage<4, 4, int>                                         mDefaultRayTracingViewDistanceChunks;
    ::ll::TypedStorage<4, 4, int>                                         mDefaultDeferredViewDistanceChunks;
    ::ll::TypedStorage<4, 4, int>                                         mRenderDistanceDefaultIdx;
    ::ll::TypedStorage<4, 4, int>                                         mRayDistanceDefaultIdx;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                         mRenderDistanceLevels;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                         mRayTracingRenderDistanceLevels;
    ::ll::TypedStorage<8, 24, ::std::vector<int>>                         mDeferredRenderDistanceLevels;
    ::ll::TypedStorage<4, 4, float>                                       mPpmDpadSizeOld;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>               mRecentSkinIds;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GamePadRemappingLayout>> mGamePadRemapping;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::KeyboardRemappingLayout>>>    mKeyboardRemappings;
    ::ll::TypedStorage<8, 32, ::Core::Subject<::OptionsObserver, ::Core::SingleThreadedLock>> mEventSubject;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                                  mIOTaskGroup;
    ::ll::TypedStorage<1, 1, bool>                                                            mIsSaveInProgress;
    ::ll::TypedStorage<1, 1, bool>                                                            mChangeStorageInProgress;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>>                 mObserverSubscriptions;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::PubSub::Subscription>>                 mLockSubscriptions;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ClientInstanceEventCoordinator>>
        mClientInstanceEventCoordinator;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions>>     mAdvancedGraphicsOptions;
    ::ll::TypedStorage<8, 24, ::std::vector<::PlatformConfiguration::GraphicsQualityPreset>> mGraphicsQualityPresets;
    ::ll::TypedStorage<1, 1, bool>                                                           mUserChangedBloom;
    ::ll::TypedStorage<4, 4, int>                                                            mDeferredTargetFrameRate;
    // NOLINTEND

public:
    // prevent constructor by default
    Options();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Options() /*override*/;

    virtual void load(::Core::PathBuffer<::std::string> filePath) /*override*/;

    virtual void tickSaveTimer() /*override*/;

    virtual void notifySaveAllowed() /*override*/;

    virtual void saveIfNeeded() /*override*/;

    virtual ::OptionSaveDeferral requestSaveDeferral() /*override*/;

    virtual void reset(::OptionResetFlags flags, ::InputMode inputMode) /*override*/;

    virtual bool getPrimaryUserStatus() const /*override*/;

    virtual void setClientInstanceCoordinator(
        ::Bedrock::NonOwnerPointer<::ClientInstanceEventCoordinator> const& coordinator
    ) /*override*/;

    virtual ::FileStorageDirectory getFileStorageLocation() const /*override*/;

    virtual void setFileStorageLocation(::FileStorageDirectory, ::std::function<void(bool)>) /*override*/;

    virtual bool isValidOption(::OptionID optionId) const /*override*/;

    virtual ::gsl::not_null<::Option*> get(::OptionID optionId) /*override*/;

    virtual ::gsl::not_null<::Option const*> get(::OptionID optionId) const /*override*/;

    virtual ::std::optional<::Option*> getIfValid(::OptionID optionId) /*override*/;

    virtual ::std::optional<::Option const*> getIfValid(::OptionID optionId) const /*override*/;

    virtual void getTelemetryOptions(::std::vector<::OptionID>& output) /*override*/;

    virtual void refreshRenderDistanceLevels() /*override*/;

    virtual bool isLoadInProgress() /*override*/;

    virtual void addObserver(::OptionsObserver& observer) /*override*/;

    virtual void loadOptionsFromString(::std::string options) /*override*/;

    virtual void elevateSaveRequestMode(::IOptions::SaveRequestMode saveRequestMode) /*override*/;

    virtual ::ChatOptions const& getChatOptions() const /*override*/;

    virtual ::ChatOptions& getChatOptions() /*override*/;

    virtual ::std::array<::std::unique_ptr<::Option>, 777> const& getAllRegisteredOptions() /*override*/;

    virtual void forEachOption(::std::function<void(::Option*)> callback) /*override*/;

    virtual int getViewDistanceChunks() const /*override*/;

    virtual int getDefaultViewDistanceChunks(::GraphicsMode graphicsMode) const /*override*/;

    virtual int getMaxViewDistanceChunks() const /*override*/;

    virtual int getMaxViewDistanceChunksRaw() const /*override*/;

    virtual bool getRayTracing() const /*override*/;

    virtual bool getDeferred() const /*override*/;

    virtual ::GamePadRemappingLayout& getGamePadRemapping() /*override*/;

    virtual ::std::shared_ptr<::KeyboardRemappingLayout> getCurrentKeyboardRemapping() const /*override*/;

    virtual ::std::shared_ptr<::KeyboardRemappingLayout> getKeyboardRemappingByType(::KeyboardType keyboardType) const
        /*override*/;

    virtual void setLanguage(::std::string const& language) /*override*/;

    virtual ::std::string getLanguage() const /*override*/;

    virtual void setPlayerViewPerspective(int playerViewPerspective) /*override*/;

    virtual void setRecentSkinIds(::std::vector<::std::string> const& recentSkinIds) /*override*/;

    virtual ::std::vector<::std::string> const& getRecentSkinIds() /*override*/;

    virtual float getDefaultPlatformSafeZoneX() const /*override*/;

    virtual float getDefaultPlatformSafeZoneY() const /*override*/;

    virtual bool getServerboundClientDiagnosticsEnabled() const /*override*/;

    virtual ::ScriptDebuggerSettings getScriptDebuggerSettings() const /*override*/;

    virtual ::Scripting::WatchdogSettings getScriptWatchdogSettings() const /*override*/;

    virtual ::GraphicsMode getGraphicsMode() const /*override*/;

    virtual int getGraphicsQualityPresetMode() const /*override*/;

    virtual int getDeferredTargetFrameRate() const /*override*/;

    virtual void setSaveDeferralCount(int value) /*override*/;

    virtual int getSaveDeferralCount() const /*override*/;

    virtual ::std::optional<::DeviceMemoryTier> getScriptingMemoryTierOverride() const /*override*/;

    virtual void setForceVibrantVisualsDisabled(bool value) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Options(
        ::std::unique_ptr<::OptionValueInterface> optionValues,
        bool,
        bool                                                             isPrimaryUser,
        ::std::weak_ptr<::IOptions> const&                               perMachineOptionsSource,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& advancedGraphicsOptions
    );

    MCAPI ::std::string _cleanPlayerName(::std::string const& name) const;

    MCAPI void _loadInputMapping(::std::map<::std::string, ::std::string>& propertyMap);

    MCAPI void _loadOptions(::std::map<::std::string, ::std::string>& propertyMap);

    MCAPI void _loadSpecialOptions(::std::map<::std::string, ::std::string>& propertyMap);

    MCAPI void _parseFilesAndLoadOptions();

    MCAPI void _readGamepadMapping(::std::string const& optionKey, ::std::string const& value);

    MCAPI void _readKeyboardMapping(::std::string const& optionKey, ::std::string const& value);

    MCAPI void _registerAccessibilityOptions();

    MCAPI void _registerChatOptions();

    MCAPI void _registerHiddenFeatureOptions();

    MCAPI void _registerOptions();

    MCAPI void _registerSelfLock(::OptionID id, ::std::function<void(bool&)> isModifiableCondition);

    MCAPI void _registerSelfObserver(
        ::OptionID                                          id,
        ::std::function<void(::Option const&, ::InputMode)> onInputModeValueChangeCallback
    );

    MCAPI void _registerSelfObserver(::OptionID id, ::std::function<void(::Option const&)> onValueChangeCallback);

    MCAPI void _registerSelfObservers();

    MCAPI void
    _resolveMultipleSwitchRealmsEnabled(bool doOverride, ::std::vector<::std::string> featureList, bool currentSetting);

    MCAPI bool _save();

    MCAPI void _saveAsync();

    MCAPI void _saveInputMapping(::std::vector<::std::pair<::std::string, ::std::string>>& settingsVec) const;

    MCAPI void _setAGFXValuesForPreset(::GraphicsQualityPresetMode preset);

    MCAPI void _setOptionCallbacks();

    MCAPI bool _shouldLoadGamepadMapping(::std::map<::std::string, ::std::string>& propertyMap) const;

    MCAPI void fireEventOptionsUpdated(::Social::Events::Event& event, ::InputMode inputMode);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& do_not_save();

    MCAPI static ::std::string const& not_available();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::OptionValueInterface> optionValues,
        bool,
        bool                                                             isPrimaryUser,
        ::std::weak_ptr<::IOptions> const&                               perMachineOptionsSource,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& advancedGraphicsOptions
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
    MCAPI void $load(::Core::PathBuffer<::std::string> filePath);

    MCAPI void $tickSaveTimer();

    MCAPI void $notifySaveAllowed();

    MCAPI void $saveIfNeeded();

    MCAPI ::OptionSaveDeferral $requestSaveDeferral();

    MCAPI void $reset(::OptionResetFlags flags, ::InputMode inputMode);

    MCAPI bool $getPrimaryUserStatus() const;

    MCAPI void
    $setClientInstanceCoordinator(::Bedrock::NonOwnerPointer<::ClientInstanceEventCoordinator> const& coordinator);

    MCFOLD bool $isValidOption(::OptionID optionId) const;

    MCFOLD ::gsl::not_null<::Option*> $get(::OptionID optionId);

    MCFOLD ::gsl::not_null<::Option const*> $get(::OptionID optionId) const;

    MCFOLD ::std::optional<::Option*> $getIfValid(::OptionID optionId);

    MCFOLD ::std::optional<::Option const*> $getIfValid(::OptionID optionId) const;

    MCAPI void $getTelemetryOptions(::std::vector<::OptionID>& output);

    MCAPI void $refreshRenderDistanceLevels();

    MCAPI bool $isLoadInProgress();

    MCAPI void $addObserver(::OptionsObserver& observer);

    MCFOLD void $loadOptionsFromString(::std::string options);

    MCAPI void $elevateSaveRequestMode(::IOptions::SaveRequestMode saveRequestMode);

    MCFOLD ::ChatOptions const& $getChatOptions() const;

    MCFOLD ::ChatOptions& $getChatOptions();

    MCFOLD ::std::array<::std::unique_ptr<::Option>, 777> const& $getAllRegisteredOptions();

    MCFOLD void $forEachOption(::std::function<void(::Option*)> callback);

    MCAPI int $getViewDistanceChunks() const;

    MCAPI int $getDefaultViewDistanceChunks(::GraphicsMode graphicsMode) const;

    MCAPI int $getMaxViewDistanceChunks() const;

    MCAPI int $getMaxViewDistanceChunksRaw() const;

    MCAPI bool $getRayTracing() const;

    MCAPI bool $getDeferred() const;

    MCAPI ::GamePadRemappingLayout& $getGamePadRemapping();

    MCAPI ::std::shared_ptr<::KeyboardRemappingLayout> $getCurrentKeyboardRemapping() const;

    MCAPI ::std::shared_ptr<::KeyboardRemappingLayout> $getKeyboardRemappingByType(::KeyboardType keyboardType) const;

    MCAPI void $setLanguage(::std::string const& language);

    MCAPI ::std::string $getLanguage() const;

    MCAPI void $setPlayerViewPerspective(int playerViewPerspective);

    MCAPI void $setRecentSkinIds(::std::vector<::std::string> const& recentSkinIds);

    MCAPI ::std::vector<::std::string> const& $getRecentSkinIds();

    MCAPI float $getDefaultPlatformSafeZoneX() const;

    MCAPI float $getDefaultPlatformSafeZoneY() const;

    MCAPI bool $getServerboundClientDiagnosticsEnabled() const;

    MCAPI ::ScriptDebuggerSettings $getScriptDebuggerSettings() const;

    MCAPI ::Scripting::WatchdogSettings $getScriptWatchdogSettings() const;

    MCAPI ::GraphicsMode $getGraphicsMode() const;

    MCAPI int $getGraphicsQualityPresetMode() const;

    MCAPI int $getDeferredTargetFrameRate() const;

    MCAPI void $setSaveDeferralCount(int value);

    MCAPI int $getSaveDeferralCount() const;

    MCAPI ::std::optional<::DeviceMemoryTier> $getScriptingMemoryTierOverride() const;

    MCAPI void $setForceVibrantVisualsDisabled(bool value);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
