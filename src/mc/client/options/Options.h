#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/KeyboardType.h"
#include "mc/client/options/BaseOptions.h"
#include "mc/client/options/GraphicsQualityPresetMode.h"
#include "mc/client/options/IOptions.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
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
class Option;
class OptionsObserver;
struct ScriptDebuggerSettings;
namespace Scripting { struct WatchdogSettings; }
class KeyboardRemappingLayout;
struct ChatOptions;
struct OptionSaveDeferral;
struct OptionValueInterface;
// clang-format on

class Options : public ::BaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf5f65e;
    ::ll::UntypedStorage<8, 32> mUnka6468d;
    ::ll::UntypedStorage<1, 1>  mUnk97d4f1;
    ::ll::UntypedStorage<1, 1>  mUnkbadb16;
    ::ll::UntypedStorage<1, 1>  mUnk5ef96a;
    ::ll::UntypedStorage<4, 4>  mUnkf32118;
    ::ll::UntypedStorage<4, 4>  mUnka00782;
    ::ll::UntypedStorage<8, 8>  mUnk3ecb86;
    ::ll::UntypedStorage<8, 8>  mUnk82d36f;
    ::ll::UntypedStorage<4, 4>  mUnk8a8948;
    ::ll::UntypedStorage<4, 4>  mUnkf44041;
    ::ll::UntypedStorage<4, 4>  mUnk24eb7d;
    ::ll::UntypedStorage<4, 4>  mUnk8f9ddd;
    ::ll::UntypedStorage<4, 4>  mUnkf45021;
    ::ll::UntypedStorage<8, 24> mUnkdc670b;
    ::ll::UntypedStorage<8, 24> mUnk727e15;
    ::ll::UntypedStorage<8, 24> mUnked4d9d;
    ::ll::UntypedStorage<4, 4>  mUnk15219e;
    ::ll::UntypedStorage<8, 24> mUnk11e2d9;
    ::ll::UntypedStorage<8, 8>  mUnk9db756;
    ::ll::UntypedStorage<8, 24> mUnk69f7a9;
    ::ll::UntypedStorage<8, 32> mUnkcb61a0;
    ::ll::UntypedStorage<8, 8>  mUnkd903f8;
    ::ll::UntypedStorage<1, 1>  mUnk7cacd9;
    ::ll::UntypedStorage<1, 1>  mUnk9cd155;
    ::ll::UntypedStorage<8, 24> mUnkfd7ff2;
    ::ll::UntypedStorage<8, 24> mUnk261e43;
    ::ll::UntypedStorage<8, 24> mUnkfaadd9;
    ::ll::UntypedStorage<8, 24> mUnkda32c3;
    ::ll::UntypedStorage<8, 24> mUnk227c67;
    ::ll::UntypedStorage<1, 1>  mUnkf9748f;
    ::ll::UntypedStorage<4, 4>  mUnk6814ff;
    // NOLINTEND

public:
    // prevent constructor by default
    Options& operator=(Options const&);
    Options(Options const&);
    Options();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~Options() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~Options() /*override*/;
#endif

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

    virtual void setFileStorageLocation(
        ::FileStorageDirectory      fileStorageDirectory,
        ::std::function<void(bool)> onComplete
    ) /*override*/;

    virtual void onScreenSizeChanged(int width, int height) /*override*/;

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

    virtual ::std::array<::std::unique_ptr<::Option>, 772> const& getAllRegisteredOptions() /*override*/;

    virtual void forEachOption(::std::function<void(::Option*)> callback) /*override*/;

    virtual int getViewDistanceChunks() const /*override*/;

    virtual int getDefaultViewDistanceChunks(::GraphicsMode graphicsMode) const /*override*/;

    virtual int getMaxViewDistanceChunks() const /*override*/;

    virtual int getMaxViewDistanceChunksRaw() const /*override*/;

    virtual bool getRayTracing() const /*override*/;

    virtual bool getDeferred() const /*override*/;

    virtual ::GamePadRemappingLayout& getGamePadRemapping() /*override*/;

    virtual ::std::shared_ptr<::KeyboardRemappingLayout> getCurrentKeyboardRemapping() const /*override*/;

    virtual ::std::shared_ptr<::KeyboardRemappingLayout> getKeyboardRemappingByType(::KeyboardType) const /*override*/;

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
    MCNAPI_C Options(
        ::std::unique_ptr<::OptionValueInterface> optionValues,
        bool,
        bool                                                             isPrimaryUser,
        ::std::weak_ptr<::IOptions> const&                               perMachineOptionsSource,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& advancedGraphicsOptions
    );

    MCNAPI_C ::std::string _cleanPlayerName(::std::string const& name) const;

    MCNAPI_C void _loadInputMapping(::std::map<::std::string, ::std::string>& propertyMap);

    MCNAPI_C void _loadOptions(::std::map<::std::string, ::std::string>& propertyMap);

    MCNAPI_C void _loadSpecialOptions(::std::map<::std::string, ::std::string>& propertyMap);

    MCNAPI_C void _parseFilesAndLoadOptions();

    MCNAPI_C void _readGamepadMapping(::std::string const& optionKey, ::std::string const& value);

    MCNAPI_C void _readKeyboardMapping(::std::string const& optionKey, ::std::string const& value);

    MCNAPI_C void _registerAccessibilityOptions();

    MCNAPI_C void _registerChatOptions();

    MCNAPI_C void _registerHiddenFeatureOptions();

    MCNAPI_C void _registerOptions();

    MCNAPI_C void _registerSelfLock(::OptionID id, ::std::function<void(bool&)> isModifiableCondition);

    MCNAPI_C void _registerSelfObserver(
        ::OptionID                                          id,
        ::std::function<void(::Option const&, ::InputMode)> onInputModeValueChangeCallback
    );

    MCNAPI_C void _registerSelfObserver(::OptionID id, ::std::function<void(::Option const&)> onValueChangeCallback);

    MCNAPI_C void _registerSelfObservers();

    MCNAPI_C void
    _resolveMultipleSwitchRealmsEnabled(bool doOverride, ::std::vector<::std::string> featureList, bool currentSetting);

    MCNAPI_C bool _save();

    MCNAPI_C void _saveAsync();

    MCNAPI_C void _saveInputMapping(::std::vector<::std::pair<::std::string, ::std::string>>& settingsVec) const;

    MCNAPI_C void _setAGFXValuesForPreset(::GraphicsQualityPresetMode preset);

    MCNAPI_C void _setOptionCallbacks();

    MCNAPI_C bool _shouldLoadGamepadMapping(::std::map<::std::string, ::std::string>& propertyMap) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::std::string const& do_not_save();

    MCNAPI_C static ::std::string const& not_available();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $load(::Core::PathBuffer<::std::string> filePath);

    MCNAPI void $tickSaveTimer();

    MCNAPI void $notifySaveAllowed();

    MCNAPI void $saveIfNeeded();

    MCNAPI ::OptionSaveDeferral $requestSaveDeferral();

    MCNAPI void $reset(::OptionResetFlags flags, ::InputMode inputMode);

    MCNAPI bool $getPrimaryUserStatus() const;

    MCNAPI void
    $setClientInstanceCoordinator(::Bedrock::NonOwnerPointer<::ClientInstanceEventCoordinator> const& coordinator);

    MCNAPI ::FileStorageDirectory $getFileStorageLocation() const;

    MCNAPI void
    $setFileStorageLocation(::FileStorageDirectory fileStorageDirectory, ::std::function<void(bool)> onComplete);

    MCNAPI void $onScreenSizeChanged(int width, int height);

    MCNAPI bool $isValidOption(::OptionID optionId) const;

    MCNAPI ::gsl::not_null<::Option*> $get(::OptionID optionId);

    MCNAPI ::gsl::not_null<::Option const*> $get(::OptionID optionId) const;

    MCNAPI ::std::optional<::Option*> $getIfValid(::OptionID optionId);

    MCNAPI ::std::optional<::Option const*> $getIfValid(::OptionID optionId) const;

    MCNAPI void $getTelemetryOptions(::std::vector<::OptionID>& output);

    MCNAPI void $refreshRenderDistanceLevels();

    MCNAPI bool $isLoadInProgress();

    MCNAPI void $addObserver(::OptionsObserver& observer);

    MCNAPI void $loadOptionsFromString(::std::string options);

    MCNAPI void $elevateSaveRequestMode(::IOptions::SaveRequestMode saveRequestMode);

    MCNAPI ::ChatOptions const& $getChatOptions() const;

    MCNAPI ::ChatOptions& $getChatOptions();

    MCNAPI ::std::array<::std::unique_ptr<::Option>, 772> const& $getAllRegisteredOptions();

    MCNAPI void $forEachOption(::std::function<void(::Option*)> callback);

    MCNAPI int $getViewDistanceChunks() const;

    MCNAPI int $getDefaultViewDistanceChunks(::GraphicsMode graphicsMode) const;

    MCNAPI int $getMaxViewDistanceChunks() const;

    MCNAPI int $getMaxViewDistanceChunksRaw() const;

    MCNAPI bool $getRayTracing() const;

    MCNAPI bool $getDeferred() const;

    MCNAPI ::GamePadRemappingLayout& $getGamePadRemapping();

    MCNAPI ::std::shared_ptr<::KeyboardRemappingLayout> $getCurrentKeyboardRemapping() const;

    MCNAPI void $setLanguage(::std::string const& language);

    MCNAPI ::std::string $getLanguage() const;

    MCNAPI void $setPlayerViewPerspective(int playerViewPerspective);

    MCNAPI void $setRecentSkinIds(::std::vector<::std::string> const& recentSkinIds);

    MCNAPI ::std::vector<::std::string> const& $getRecentSkinIds();

    MCNAPI float $getDefaultPlatformSafeZoneX() const;

    MCNAPI float $getDefaultPlatformSafeZoneY() const;

    MCNAPI bool $getServerboundClientDiagnosticsEnabled() const;

    MCNAPI ::ScriptDebuggerSettings $getScriptDebuggerSettings() const;

    MCNAPI ::Scripting::WatchdogSettings $getScriptWatchdogSettings() const;

    MCNAPI ::GraphicsMode $getGraphicsMode() const;

    MCNAPI int $getGraphicsQualityPresetMode() const;

    MCNAPI int $getDeferredTargetFrameRate() const;

    MCNAPI void $setSaveDeferralCount(int value);

    MCNAPI int $getSaveDeferralCount() const;

    MCNAPI ::std::optional<::DeviceMemoryTier> $getScriptingMemoryTierOverride() const;

    MCNAPI void $setForceVibrantVisualsDisabled(bool value);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
