#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/KeyboardType.h"
#include "mc/client/options/AutoUpdateMode.h"
#include "mc/client/options/DebugHudOptions.h"
#include "mc/client/options/RealmsEnvironment.h"
#include "mc/client/options/SplitScreenDirection.h"
#include "mc/client/options/XboxSandboxEnvironment.h"
#include "mc/client/store/DisplayLoggedErrorType.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/diagnostics/bedrock_log/LogCategory.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/DevConnectionQuality.h"
#include "mc/options/GraphicsMode.h"
#include "mc/options/IOptionsReader.h"
#include "mc/options/TargetRenderAPI.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionResetFlags.h"

// auto generated forward declare list
// clang-format off
class ClientInstanceEventCoordinator;
class GamePadRemappingLayout;
class Option;
class OptionsObserver;
struct ScriptDebuggerSettings;
namespace Scripting { struct WatchdogSettings; }
class KeyboardRemappingLayout;
struct ChatOptions;
struct OptionSaveDeferral;
// clang-format on

class IOptions : public ::IOptionsReader {
public:
    // IOptions inner types define
    enum class SaveRequestMode : int {
        None           = 0,
        Save           = 1,
        ForceCloudSave = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOptions() /*override*/ = default;

    virtual ::std::shared_ptr<::IOptions> sharedFromThis() = 0;

    virtual ::std::shared_ptr<::IOptions const> sharedFromThis() const = 0;

    virtual ::Option& _registerOption(::std::unique_ptr<::Option>) = 0;

    virtual void load(::Core::PathBuffer<::std::string>) = 0;

    virtual void tickSaveTimer() = 0;

    virtual void notifySaveAllowed() = 0;

    virtual void saveIfNeeded() = 0;

    virtual ::OptionSaveDeferral requestSaveDeferral() = 0;

    virtual void reset(::OptionResetFlags, ::InputMode) = 0;

    virtual bool getPrimaryUserStatus() const = 0;

    virtual void setClientInstanceCoordinator(::Bedrock::NonOwnerPointer<::ClientInstanceEventCoordinator> const&) = 0;

    virtual void onScreenSizeChanged(int, int) = 0;

    virtual bool isValidOption(::OptionID) const = 0;

    virtual ::gsl::not_null<::Option*> get(::OptionID) = 0;

    virtual ::std::optional<::Option*> getIfValid(::OptionID) = 0;

    virtual ::std::optional<::Option const*> getIfValid(::OptionID) const = 0;

    virtual void getTelemetryOptions(::std::vector<::OptionID>&) = 0;

    virtual void refreshRenderDistanceLevels() = 0;

    virtual bool isLoadInProgress() = 0;

    virtual void addObserver(::OptionsObserver&) = 0;

    virtual void loadOptionsFromString(::std::string) = 0;

    virtual void elevateSaveRequestMode(::IOptions::SaveRequestMode) = 0;

    virtual ::ChatOptions const& getChatOptions() const = 0;

    virtual ::ChatOptions& getChatOptions() = 0;

    virtual ::std::array<::std::unique_ptr<::Option>, 772> const& getAllRegisteredOptions() = 0;

    virtual void forEachOption(::std::function<void(::Option*)>) = 0;

    virtual bool consumeDevOptionsDirty() = 0;

    virtual void dumpOptionsToLogFile() const = 0;

    virtual void updateInputMode(::InputMode) = 0;

    virtual void setMainVolume(float) = 0;

    virtual float getMainVolume() const = 0;

    virtual void setMusicVolume(float) = 0;

    virtual float getMusicVolume() const = 0;

    virtual void setSoundVolume(float) = 0;

    virtual float getSoundVolume() const = 0;

    virtual void setTTSVolume(float) = 0;

    virtual float getTTSVolume() const = 0;

    virtual float getChatMessageDuration() const = 0;

    virtual float getToastNotificationDuration() const = 0;

    virtual void setSensitivity(float, ::InputMode) = 0;

    virtual float getSensitivity(::InputMode) const = 0;

    virtual void setSpyglassDamping(float, ::InputMode) = 0;

    virtual float getSpyglassDamping(::InputMode) const = 0;

    virtual void setDwellBeforeDrag(float) = 0;

    virtual float getDwellBeforeDrag() const = 0;

    virtual void setStackSplittingTrigger(float) = 0;

    virtual float getStackSplittingTrigger() const = 0;

    virtual float getGameSensitivity(::InputMode) const = 0;

    virtual void setFileStorageLocation(::FileStorageDirectory, ::std::function<void(bool)>) = 0;

    virtual ::FileStorageDirectory getFileStorageLocation() const = 0;

    virtual bool getInvertYMouse(::InputMode) const = 0;

    virtual int getViewDistanceChunks() const = 0;

    virtual int getDefaultViewDistanceChunks(::GraphicsMode) const = 0;

    virtual int getMaxViewDistanceChunksRaw() const = 0;

    virtual float getParticleViewDistance() const = 0;

    virtual bool getBobView() const = 0;

    virtual bool getCameraShake() const = 0;

    virtual bool getHideEndFlash() const = 0;

    virtual bool getIsDitheringEnabledBlocks() const = 0;

    virtual bool getIsDitheringEnabledMobs() const = 0;

    virtual void setResetPlayerAlignment(bool) = 0;

    virtual bool getResetPlayerAlignment() const = 0;

    virtual ::TargetRenderAPI getTargetRenderAPI() const = 0;

    virtual bool getTransparentLeaves() const = 0;

    virtual bool getFancyBubbles() const = 0;

    virtual bool getSmoothLighting() const = 0;

    virtual bool getGuiAccessibilityScaling() const = 0;

    virtual bool getRayTracing() const = 0;

    virtual bool getDeferred() const = 0;

    virtual int getGraphicsQualityPresetMode() const = 0;

    virtual int getDeferredTargetFrameRate() const = 0;

    virtual bool getUseMouseForDigging() const = 0;

    virtual bool isLeftHanded() const = 0;

    virtual bool isHotbarOnlyTouch() const = 0;

    virtual bool getDestroyVibration(::InputMode) const = 0;

    virtual bool getSplitVibration(::InputMode) const = 0;

    virtual bool getAutoJump(::InputMode) const = 0;

    virtual void setFullscreen(bool) = 0;

    virtual bool getFullscreen() const = 0;

    virtual void toggleFullscreen() = 0;

    virtual ::GamePadRemappingLayout& getGamePadRemapping() = 0;

    virtual ::std::shared_ptr<::KeyboardRemappingLayout> getCurrentKeyboardRemapping() const = 0;

    virtual ::std::shared_ptr<::KeyboardRemappingLayout> getKeyboardRemappingByType(::KeyboardType) const = 0;

    virtual void setLanguage(::std::string const&) = 0;

    virtual ::std::string getLanguage() const = 0;

    virtual void setDifficulty(int) = 0;

    virtual void setHideGUI(bool) = 0;

    virtual bool getHideHud() const = 0;

    virtual bool getHideHand() const = 0;

    virtual void setHideToolTips(bool) = 0;

    virtual bool getHideToolTips() const = 0;

    virtual void setHidePaperDoll(bool) = 0;

    virtual bool getHidePaperDoll() const = 0;

    virtual void setIngamePlayerNames(bool) = 0;

    virtual bool getIngamePlayerNames() const = 0;

    virtual void setSplitscreenIngamePlayerNames(bool) = 0;

    virtual bool getSplitscreenIngamePlayerNames() const = 0;

    virtual void setInterfaceOpacity(float) = 0;

    virtual float getInterfaceOpacity() const = 0;

    virtual void setSplitscreenInterfaceOpacity(float) = 0;

    virtual float getSplitscreenInterfaceOpacity() const = 0;

    virtual void setShowAutoSaveIcon(bool) = 0;

    virtual bool getShowAutoSaveIcon() const = 0;

    virtual void setSplitscreenDirection(int) = 0;

    virtual ::SplitScreenDirection getSplitscreenDirection() const = 0;

    virtual void setHideScreens(bool) = 0;

    virtual bool getHideScreens() const = 0;

    virtual void setHideItemInHand(bool) = 0;

    virtual bool getHideItemInHand() const = 0;

    virtual bool getScreenAnimations() const = 0;

    virtual void setPlayerViewPerspective(int) = 0;

    virtual int getPlayerViewPerspective() const = 0;

    virtual void setForceUseUnsortedPolys(bool) = 0;

    virtual bool getForceUseUnsortedPolys() const = 0;

    virtual void setRenderDebug(::DebugHudOptions) = 0;

    virtual ::DebugHudOptions getRenderDebug() const = 0;

    virtual bool getRemoteImguiEnabled() const = 0;

    virtual void setRemoteImguiEnabled(bool) = 0;

    virtual float getGamma() const = 0;

    virtual void setMSAA(int) = 0;

    virtual void setTexelAA(bool) = 0;

    virtual void setFixedCamera(bool) = 0;

    virtual bool getFixedCamera() const = 0;

    virtual void setSkinId(::std::string const&) = 0;

    virtual ::std::string const& getSkinId() const = 0;

    virtual void setLastCustomSkinId(::std::string const&) = 0;

    virtual ::std::string const& getLastCustomSkinId() const = 0;

    virtual void setRecentSkinIds(::std::vector<::std::string> const&) = 0;

    virtual ::std::vector<::std::string> const& getRecentSkinIds() = 0;

    virtual bool getFovToggle() const = 0;

    virtual void setServerVisible(bool) = 0;

    virtual bool getServerVisible() const = 0;

    virtual void setSplitControls(bool) = 0;

    virtual bool getSplitControls() const = 0;

    virtual bool getSwapJumpAndSneak() const = 0;

    virtual bool getFancySkies() const = 0;

    virtual void setRenderClouds(bool) = 0;

    virtual bool getRenderClouds() const = 0;

    virtual bool getDevAutoLoadLevel() const = 0;

    virtual bool getDevAssertionsDebugBreak() const = 0;

    virtual bool getDevAssertionsShowDialog() const = 0;

    virtual bool getDevShowDisplayLoggedError() const = 0;

    virtual bool getDevShowDisplayLoggedError(::DisplayLoggedErrorType) const = 0;

    virtual void setDevShowDevConsoleButton(bool) = 0;

    virtual bool getDevShowDevConsoleButton() const = 0;

    virtual bool getDevIgnoreUserInput() const = 0;

    virtual bool getDevDisplayTreatmentPanel() const = 0;

    virtual void setDevDisplayTreatmentPanel(bool) = 0;

    virtual void setDevShowMinecraftTCUIReplacement(bool) = 0;

    virtual bool getDevShowMinecraftTCUIReplacement() const = 0;

    virtual bool getDevCreateRealmWithoutPurchase() const = 0;

    virtual bool getDevDisableConnectedStoragePush() const = 0;

    virtual bool getDevDisableConnectedStoragePull() const = 0;

    virtual void setDevFindMobs(bool) = 0;

    virtual bool getDevFindMobs() const = 0;

    virtual void setDevRenderBoundingBoxes(bool) = 0;

    virtual void setDevRenderPaths(bool) = 0;

    virtual void setDevRenderMobInfoState(bool) = 0;

    virtual void setDevRenderGoalState(bool) = 0;

    virtual void setDevRenderSchedulerInfo(bool) = 0;

    virtual void setDevRenderCoordinateSystems(bool) = 0;

    virtual bool getDevRenderCoordinateSystems() const = 0;

    virtual bool getDevResetClientId() const = 0;

    virtual void setDevLogFlushImmediate(bool) = 0;

    virtual bool getDevLogFlushImmediate() const = 0;

    virtual void setDevLogTimestamp(bool) = 0;

    virtual bool getDevLogTimestamp() const = 0;

    virtual void setDevLogTrace(bool) = 0;

    virtual bool getDevLogTrace() const = 0;

    virtual void setDevLogArea(bool) = 0;

    virtual bool getDevLogArea() const = 0;

    virtual void setDevLogPriority(bool) = 0;

    virtual bool getDevLogPriority() const = 0;

    virtual void setDevLogThread(bool) = 0;

    virtual bool getDevLogThread() const = 0;

    virtual void setDevLogAppend(bool) = 0;

    virtual bool getDevLogAppend() const = 0;

    virtual void setDevLogProcessId(bool) = 0;

    virtual bool getDevLogProcessId() const = 0;

    virtual void setDevLogThreadId(bool) = 0;

    virtual bool getDevLogThreadId() const = 0;

    virtual void setDevLogMessageId(bool) = 0;

    virtual bool getDevLogMessageId() const = 0;

    virtual void setDevLogSilentLogging(bool) = 0;

    virtual bool getDevLogSilentLogging() const = 0;

    virtual void setDevLogPriorityFilter(::std::string const&) = 0;

    virtual ::std::string const& getDevLogPriorityFilter() const = 0;

    virtual void setDevLogAreaFilter(::std::string const&) = 0;

    virtual ::std::string const& getDevLogAreaFilter() const = 0;

    virtual void setDevGameEventRetentionTicks(ushort) = 0;

    virtual void setDevDeepDarkDebugRender(bool) = 0;

    virtual bool isLogCategoryEnabled(::BedrockLog::LogCategory) const = 0;

    virtual bool getDevEnableProfilerOutput() = 0;

    virtual bool getDevAddUsersSilently() const = 0;

    virtual int getDevBenchmarkModeTime() = 0;

    virtual bool getDevDisableClientBlobCache() const = 0;

    virtual bool getDevClientBlobCacheOnLocalServer() const = 0;

    virtual void setLogFlushDelay(int) = 0;

    virtual int getLogFlushDelay() = 0;

    virtual int getAutomationParallelSlices() const = 0;

    virtual int getAutomationParallelCurrentSlice() const = 0;

    virtual bool getIsAutomationRun() const = 0;

    virtual bool getShouldQuitAppAfterTesting() const = 0;

    virtual bool shouldUploadTestArtifacts() const = 0;

    virtual bool hasAutomationTestRunTimedOut() const = 0;

    virtual bool hasAutomationTestRunReachedCrashLimit() const = 0;

    virtual bool shouldAppendDebugLogTimestamp() const = 0;

    virtual ::std::string getAutomationServerIp() const = 0;

    virtual ::std::string getAutomationServerPort() const = 0;

    virtual ::std::string getAutomationArtifactUploadSas() const = 0;

    virtual ::std::string getAutomationArtifactUploadUrl() const = 0;

    virtual ::std::string getAutomationRelativeBlobpath() const = 0;

    virtual ::std::string getAutomationFunctionalTestTags() const = 0;

    virtual ::std::string getAutomationServerTestTags() const = 0;

    virtual ::std::string getAutomationUnitTestTags() const = 0;

    virtual ::std::string getAutomationFunctionalBrokenTestTags() const = 0;

    virtual ::std::string getAutomationServerBrokenTestTags() const = 0;

    virtual ::std::string getAutomationUnitBrokenTestTags() const = 0;

    virtual ::std::string getAutomationTestBuildID() const = 0;

    virtual ::std::string getAutomationUploadToken() const = 0;

    virtual ::std::string getAutomationEnabledFeatures() const = 0;

    virtual ::std::string getAutomationEnabledExperiments() const = 0;

    virtual bool getAutomationShouldGroupServerTests() const = 0;

    virtual bool getAutomationUnrandomTestsEnabled() const = 0;

    virtual bool getAutomationRunEntireServerTestGroup() const = 0;

    virtual bool getAutomationRunServerTestAfterEachTest() const = 0;

    virtual ::std::string const& getTestBranchName() const = 0;

    virtual bool getFunctionalTestBlockInput() const = 0;

    virtual bool shouldBlockUserInput() const = 0;

    virtual bool hasSetSafeZone() const = 0;

    virtual bool getAutomationDisableTreatmentPackDownloads() const = 0;

    virtual bool getAutomationProfilerCaptureEnabled() const = 0;

    virtual bool getAutomationProfilerFlipEnabled() const = 0;

    virtual int getAutomationRepeatCount() const = 0;

    virtual int getAutomationSoakTestRunDurationMinutes() const = 0;

    virtual bool getAutomationRerunFailuresOnly() const = 0;

    virtual int getAutomationUnitPerTestcaseTimeout() const = 0;

    virtual int getAutomationFunctionalPerTestcaseTimeout() const = 0;

    virtual int getAutomationServerPerTestcaseTimeout() const = 0;

    virtual void setAutomationFunctionalBrokenTestTags(::std::string const&) = 0;

    virtual void setAutomationUnitBrokenTestTags(::std::string const&) = 0;

    virtual void setAutomationUploadToken(::std::string const&) = 0;

    virtual bool getDevAchievmentsAlwaysEnabled() = 0;

    virtual bool shouldServerTestsLogWorlds() const = 0;

    virtual bool shouldServerTestsAssertOnLevelDiff() const = 0;

    virtual ::std::string getAutomationMultiplayerSessionName() const = 0;

    virtual int getAutomationMultiplayerDeviceIndex() const = 0;

    virtual ::std::vector<::std::string> getAutomationMultiplayerUserAccounts() const = 0;

    virtual ::DevConnectionQuality getDevConnectionQuality() const = 0;

    virtual int getDevRenderAttachPos() const = 0;

    virtual void setMultiPlayerGame(bool) = 0;

    virtual bool getMultiPlayerGame() const = 0;

    virtual void setXboxLiveVisible(bool) = 0;

    virtual bool wasLoggedInLastSession() = 0;

    virtual void setHasEverLoggedIntoXbl(bool) = 0;

    virtual bool getHasEverLoggedIntoXbl() const = 0;

    virtual void setHasShownFirstLaunchWelcomeModal(bool) = 0;

    virtual bool getHasShownFirstLaunchWelcomeModal() const = 0;

    virtual void setHasShownFirstSocialWelcomeModal(bool) = 0;

    virtual bool getHasShownFirstSocialWelcomeModal() const = 0;

    virtual void setDoNotShowFriendsListFTUE(bool) = 0;

    virtual bool getDoNotShowFriendsListFTUE() const = 0;

    virtual void setHasShownBannedModalAtStartup(bool) = 0;

    virtual bool getHasShownBannedModalAtStartup() const = 0;

    virtual void setAcknowledgedAutoSave(bool) = 0;

    virtual bool getAcknowledgedAutoSave() const = 0;

    virtual void setRealmsInviteShowFriendsOption(bool) = 0;

    virtual bool getRealmsInviteShowFriendsOption() const = 0;

    virtual void setNumberOfOwnedRealms(int) = 0;

    virtual int getNumberOfOwnedRealms() const = 0;

    virtual void setNumberOfFriendsRealms(int) = 0;

    virtual int getNumberOfFriendsRealms() const = 0;

    virtual void setCreateRealmUpsellCount(int) = 0;

    virtual int getCreateRealmUpsellCount() const = 0;

    virtual void setSaveAndQuitCount(int) = 0;

    virtual int getSaveAndQuitCount() const = 0;

    virtual void setIsRatingsPromptShown(bool) = 0;

    virtual bool getIsRatingsPromptShown() const = 0;

    virtual void setShowRealmsTrialButtonFromPlayScreen(bool) = 0;

    virtual bool getShowRealmsTrialButtonFromPlayScreen() const = 0;

    virtual ::AutoUpdateMode getAutoUpdateMode() const = 0;

    virtual void setCanUseCellularData(bool) = 0;

    virtual bool getCanUseCellularData() const = 0;

    virtual void setRequireWebsocketEncryption(bool) = 0;

    virtual bool getRequireWebsocketEncryption() const = 0;

    virtual void setWebsocketsEnabled(bool) = 0;

    virtual bool getWebsocketsEnabled() const = 0;

    virtual void setUseIPv6Only(bool) = 0;

    virtual bool getUseIPv6Only() const = 0;

    virtual void setUseRetailXboxSandbox(bool const) = 0;

    virtual bool getUseRetailXboxSandbox() const = 0;

    virtual void setXboxLiveSandbox(::XboxSandboxEnvironment) = 0;

    virtual ::std::string const& getXboxLiveSandbox() const = 0;

    virtual void setRealmsEnvironment(::RealmsEnvironment) = 0;

    virtual ::RealmsEnvironment getRealmsEnvironment() const = 0;

    virtual void setRealmsEndpoint(::std::string const&) = 0;

    virtual ::std::string const& getRealmsEndpoint() const = 0;

    virtual ::std::string const& getRealmsV2Endpoint() const = 0;

    virtual void setRealmsEndpointPayment(::std::string const&) = 0;

    virtual ::std::string const& getRealmsEndpointPayment() const = 0;

    virtual void setRealmsRelyingParty(::std::string const&) = 0;

    virtual ::std::string const& getRealmsRelyingParty() const = 0;

    virtual void setRealmsRelyingPartyPayment(::std::string const&) = 0;

    virtual ::std::string const& getRealmsRelyingPartyPayment() const = 0;

    virtual void setStoreHasPurchasedCoins(bool) = 0;

    virtual bool getStoreHasPurchasedCoins() const = 0;

    virtual void setShowUnfulfilledPurchaseModal(bool) = 0;

    virtual bool getShowUnfulfilledPurchaseModal() const = 0;

    virtual void setSwitchCoinDebug(bool) = 0;

    virtual bool getSwitchCoinDebug() const = 0;

    virtual float getDefaultPlatformSafeZoneX() const = 0;

    virtual float getDefaultPlatformSafeZoneY() const = 0;

    virtual bool getServerboundClientDiagnosticsEnabled() const = 0;

    virtual ::ScriptDebuggerSettings getScriptDebuggerSettings() const = 0;

    virtual ::Scripting::WatchdogSettings getScriptWatchdogSettings() const = 0;

    virtual void setEduHasLoggedIn(bool) = 0;

    virtual bool getEduHasLoggedIn() const = 0;

    virtual void setShownPlatformNetworkConnectConfirmation(bool) = 0;

    virtual bool getShownPlatformNetworkConnectConfirmation() const = 0;

    virtual void setShownPlatformPremiumUpsell(bool) = 0;

    virtual bool getShownPlatformPremiumUpsell() const = 0;

    virtual void setAppLaunchedCount(int) = 0;

    virtual int getAppLaunchedCount() const = 0;

    virtual void setEcoMode(bool) = 0;

    virtual bool getEcoMode() const = 0;

    virtual void setEduCloudBackupToggle(bool) = 0;

    virtual bool getEduCloudBackupToggle() const = 0;

    virtual void setUseFontOverrides(bool) = 0;

    virtual bool getUseFontOverrides() const = 0;

    virtual ::NewInteractionModel getEffectiveTouchScheme() const = 0;

    virtual void setSaveDeferralCount(int) = 0;

    virtual int getSaveDeferralCount() const = 0;

    virtual void setForceVibrantVisualsDisabled(bool) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
