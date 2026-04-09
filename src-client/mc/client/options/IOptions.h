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
#include "mc/input/NewInteractionModel.h"
#include "mc/network/DevConnectionQuality.h"
#include "mc/options/GraphicsMode.h"
#include "mc/options/IOptionsReader.h"
#include "mc/options/TargetRenderAPI.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionResetFlags.h"
#include "mc/platform/diagnostics/bedrock_log/LogCategory.h"

// auto generated forward declare list
// clang-format off
class ChatOptions;
class ClientInstanceEventCoordinator;
class GamePadRemappingLayout;
class KeyboardRemappingLayout;
class Option;
class OptionSaveDeferral;
class OptionsObserver;
struct ScriptDebuggerSettings;
namespace Scripting { struct WatchdogSettings; }
// clang-format on

class IOptions : public ::IOptionsReader {
public:
    // IOptions inner types define
    enum class SaveRequestMode : int {};

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IOptions() /*override*/ = default;

    virtual ::std::shared_ptr<::IOptions> sharedFromThis() = 0;

    virtual ::std::shared_ptr<::IOptions const> sharedFromThis() const = 0;

    virtual ::Option& _registerOption(::std::unique_ptr<::Option> option) = 0;

    virtual void load(::Core::PathBuffer<::std::string> filePath) = 0;

    virtual void tickSaveTimer() = 0;

    virtual void notifySaveAllowed() = 0;

    virtual void saveIfNeeded() = 0;

    virtual ::OptionSaveDeferral requestSaveDeferral() = 0;

    virtual void reset(::OptionResetFlags flags, ::InputMode inputMode) = 0;

    virtual bool getPrimaryUserStatus() const = 0;

    virtual void
    setClientInstanceCoordinator(::Bedrock::NonOwnerPointer<::ClientInstanceEventCoordinator> const& coordinator) = 0;

    virtual bool isValidOption(::OptionID optionId) const = 0;

    virtual ::gsl::not_null<::Option*> get(::OptionID optionId) = 0;

    virtual ::std::optional<::Option*> getIfValid(::OptionID optionId) = 0;

    virtual ::std::optional<::Option const*> getIfValid(::OptionID optionId) const = 0;

    virtual void getTelemetryOptions(::std::vector<::OptionID>& output) = 0;

    virtual void refreshRenderDistanceLevels() = 0;

    virtual bool isLoadInProgress() = 0;

    virtual void addObserver(::OptionsObserver& observer) = 0;

    virtual void loadOptionsFromString(::std::string options) = 0;

    virtual void elevateSaveRequestMode(::IOptions::SaveRequestMode saveRequestMode) = 0;

    virtual ::ChatOptions const& getChatOptions() const = 0;

    virtual ::ChatOptions& getChatOptions() = 0;

    virtual ::std::array<::std::unique_ptr<::Option>, 803> const& getAllRegisteredOptions() = 0;

    virtual void forEachOption(::std::function<void(::Option*)> callback) = 0;

    virtual bool consumeDevOptionsDirty() = 0;

    virtual void dumpOptionsToLogFile() const = 0;

    virtual void updateInputMode(::InputMode inputMode) = 0;

    virtual void setMainVolume(float volume) = 0;

    virtual float getMainVolume() const = 0;

    virtual void setMusicVolume(float volume) = 0;

    virtual float getMusicVolume() const = 0;

    virtual void setSoundVolume(float volume) = 0;

    virtual float getSoundVolume() const = 0;

    virtual void setTTSVolume(float volume) = 0;

    virtual float getTTSVolume() const = 0;

    virtual float getChatMessageDuration() const = 0;

    virtual float getToastNotificationDuration() const = 0;

    virtual void setSensitivity(float sensitivity, ::InputMode inputMode) = 0;

    virtual float getSensitivity(::InputMode inputMode) const = 0;

    virtual void setSpyglassDamping(float value, ::InputMode inputMode) = 0;

    virtual float getSpyglassDamping(::InputMode inputMode) const = 0;

    virtual void setDwellBeforeDrag(float value) = 0;

    virtual float getDwellBeforeDrag() const = 0;

    virtual void setStackSplittingTrigger(float value) = 0;

    virtual float getStackSplittingTrigger() const = 0;

    virtual float getGameSensitivity(::InputMode inputmode) const = 0;

    virtual void
    setFileStorageLocation(::FileStorageDirectory fileStorageDirectory, ::std::function<void(bool)> onComplete) = 0;

    virtual ::FileStorageDirectory getFileStorageLocation() const = 0;

    virtual bool getInvertYMouse(::InputMode inputMode) const = 0;

    virtual int getViewDistanceChunks() const = 0;

    virtual int getDefaultViewDistanceChunks(::GraphicsMode graphicsMode) const = 0;

    virtual int getMaxViewDistanceChunksRaw() const = 0;

    virtual float getParticleViewDistance() const = 0;

    virtual bool getBobView() const = 0;

    virtual float getDamageBobStrength() const = 0;

    virtual bool getCameraShake() const = 0;

    virtual bool getHideEndFlash() const = 0;

    virtual bool getIsDitheringEnabledBlocks() const = 0;

    virtual bool getIsDitheringEnabledMobs() const = 0;

    virtual void setResetPlayerAlignment(bool reset) = 0;

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

    virtual bool getDestroyVibration(::InputMode inputMode) const = 0;

    virtual bool getSplitVibration(::InputMode inputMode) const = 0;

    virtual bool getAutoJump(::InputMode inputMode) const = 0;

    virtual void setFullscreen(bool fullscreen) = 0;

    virtual bool getFullscreen() const = 0;

    virtual void toggleFullscreen() = 0;

    virtual ::GamePadRemappingLayout& getGamePadRemapping() = 0;

    virtual ::std::shared_ptr<::KeyboardRemappingLayout> getCurrentKeyboardRemapping() const = 0;

    virtual ::std::shared_ptr<::KeyboardRemappingLayout>
    getKeyboardRemappingByType(::KeyboardType keyboardType) const = 0;

    virtual void setLanguage(::std::string const& language) = 0;

    virtual ::std::string getLanguage() const = 0;

    virtual void setDifficulty(int difficulty) = 0;

    virtual void setHideGUI(bool hideGUI) = 0;

    virtual bool getHideHud() const = 0;

    virtual bool getHideHand() const = 0;

    virtual void setHideToolTips(bool hideToolTips) = 0;

    virtual bool getHideToolTips() const = 0;

    virtual void setHidePaperDoll(bool hidePaperDoll) = 0;

    virtual bool getHidePaperDoll() const = 0;

    virtual void setIngamePlayerNames(bool useNameTag) = 0;

    virtual bool getIngamePlayerNames() const = 0;

    virtual void setSplitscreenIngamePlayerNames(bool useNameTag) = 0;

    virtual bool getSplitscreenIngamePlayerNames() const = 0;

    virtual void setInterfaceOpacity(float opacity) = 0;

    virtual float getInterfaceOpacity() const = 0;

    virtual void setSplitscreenInterfaceOpacity(float opacity) = 0;

    virtual float getSplitscreenInterfaceOpacity() const = 0;

    virtual void setShowAutoSaveIcon(bool ShowAutoSaveIcon) = 0;

    virtual bool getShowAutoSaveIcon() const = 0;

    virtual void setSplitscreenDirection(int splitScreenDirection) = 0;

    virtual ::SplitScreenDirection getSplitscreenDirection() const = 0;

    virtual void setHideScreens(bool hideScreens) = 0;

    virtual bool getHideScreens() const = 0;

    virtual void setHideItemInHand(bool hideItemInHand) = 0;

    virtual bool getHideItemInHand() const = 0;

    virtual bool getScreenAnimations() const = 0;

    virtual void setPlayerViewPerspective(int playerViewPerspective) = 0;

    virtual int getPlayerViewPerspective() const = 0;

    virtual void setForceUseUnsortedPolys(bool renderUnsorted) = 0;

    virtual bool getForceUseUnsortedPolys() const = 0;

    virtual void setRenderDebug(::DebugHudOptions renderDebug) = 0;

    virtual ::DebugHudOptions getRenderDebug() const = 0;

    virtual bool getRemoteImguiEnabled() const = 0;

    virtual void setRemoteImguiEnabled(bool remoteImguiEnabled) = 0;

    virtual float getGamma() const = 0;

    virtual void setMSAA(int msaa) = 0;

    virtual void setTexelAA(bool texelAA) = 0;

    virtual void setFixedCamera(bool fixedCamera) = 0;

    virtual bool getFixedCamera() const = 0;

    virtual void setSkinId(::std::string const& skinId) = 0;

    virtual ::std::string const& getSkinId() const = 0;

    virtual void setLastCustomSkinId(::std::string const& lastCustomSkinId) = 0;

    virtual ::std::string const& getLastCustomSkinId() const = 0;

    virtual void setRecentSkinIds(::std::vector<::std::string> const& recentSkinIds) = 0;

    virtual ::std::vector<::std::string> const& getRecentSkinIds() = 0;

    virtual bool getFovToggle() const = 0;

    virtual void setServerVisible(bool serverVisible) = 0;

    virtual bool getServerVisible() const = 0;

    virtual void setSplitControls(bool splitControls) = 0;

    virtual bool getSplitControls() const = 0;

    virtual bool getSwapJumpAndSneak() const = 0;

    virtual bool getFancySkies() const = 0;

    virtual void setRenderClouds(bool renderClouds) = 0;

    virtual bool getRenderClouds() const = 0;

    virtual bool getDevAutoLoadLevel() const = 0;

    virtual bool getDevAssertionsDebugBreak() const = 0;

    virtual bool getDevAssertionsShowDialog() const = 0;

    virtual bool getDevShowDisplayLoggedError() const = 0;

    virtual bool getDevShowDisplayLoggedError(::DisplayLoggedErrorType errortype) const = 0;

    virtual void setDevShowDevConsoleButton(bool dev_showDevConsoleButton) = 0;

    virtual bool getDevShowDevConsoleButton() const = 0;

    virtual bool getDevIgnoreUserInput() const = 0;

    virtual bool getDevDisplayTreatmentPanel() const = 0;

    virtual void setDevDisplayTreatmentPanel(bool dev_displayTreatmentPanel) = 0;

    virtual void setDevShowMinecraftTCUIReplacement(bool dev_showMinecraftTCUIReplacement) = 0;

    virtual bool getDevShowMinecraftTCUIReplacement() const = 0;

    virtual bool getDevCreateRealmWithoutPurchase() const = 0;

    virtual bool getDevDisableConnectedStoragePush() const = 0;

    virtual bool getDevDisableConnectedStoragePull() const = 0;

    virtual void setDevFindMobs(bool dev_findMobs) = 0;

    virtual bool getDevFindMobs() const = 0;

    virtual void setDevRenderBoundingBoxes(bool dev_renderBoundingBoxes) = 0;

    virtual void setDevRenderPaths(bool dev_renderPaths) = 0;

    virtual void setDevRenderMobInfoState(bool dev_renderMobInfoState) = 0;

    virtual void setDevRenderGoalState(bool dev_renderGoalState) = 0;

    virtual void setDevRenderSchedulerInfo(bool dev_renderSchedulerState) = 0;

    virtual void setDevRenderCoordinateSystems(bool dev_renderCoords) = 0;

    virtual bool getDevRenderCoordinateSystems() const = 0;

    virtual bool getDevResetClientId() const = 0;

    virtual void setDevLogFlushImmediate(bool dev_FlushLogOnWrite) = 0;

    virtual bool getDevLogFlushImmediate() const = 0;

    virtual void setDevLogTimestamp(bool dev_timestamp) = 0;

    virtual bool getDevLogTimestamp() const = 0;

    virtual void setDevLogTrace(bool dev_trace) = 0;

    virtual bool getDevLogTrace() const = 0;

    virtual void setDevLogArea(bool dev_logArea) = 0;

    virtual bool getDevLogArea() const = 0;

    virtual void setDevLogPriority(bool dev_logPriority) = 0;

    virtual bool getDevLogPriority() const = 0;

    virtual void setDevLogThread(bool dev_logThread) = 0;

    virtual bool getDevLogThread() const = 0;

    virtual void setDevLogAppend(bool dev_append) = 0;

    virtual bool getDevLogAppend() const = 0;

    virtual void setDevLogProcessId(bool enable) = 0;

    virtual bool getDevLogProcessId() const = 0;

    virtual void setDevLogThreadId(bool enable) = 0;

    virtual bool getDevLogThreadId() const = 0;

    virtual void setDevLogMessageId(bool enable) = 0;

    virtual bool getDevLogMessageId() const = 0;

    virtual void setDevLogSilentLogging(bool silent) = 0;

    virtual bool getDevLogSilentLogging() const = 0;

    virtual void setDevLogPriorityFilter(::std::string const& devFilter) = 0;

    virtual ::std::string const& getDevLogPriorityFilter() const = 0;

    virtual void setDevLogAreaFilter(::std::string const& devFilter) = 0;

    virtual ::std::string const& getDevLogAreaFilter() const = 0;

    virtual void setDevGameEventRetentionTicks(ushort retentionTicks) = 0;

    virtual void setDevDeepDarkDebugRender(bool render) = 0;

    virtual bool isLogCategoryEnabled(::BedrockLog::LogCategory category) const = 0;

    virtual bool getDevEnableProfilerOutput() = 0;

    virtual bool getDevAddUsersSilently() const = 0;

    virtual int getDevBenchmarkModeTime() = 0;

    virtual bool getDevDisableClientBlobCache() const = 0;

    virtual bool getDevClientBlobCacheOnLocalServer() const = 0;

    virtual void setLogFlushDelay(int delay_time) = 0;

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

    virtual void setAutomationFunctionalBrokenTestTags(::std::string const& tags) = 0;

    virtual void setAutomationUnitBrokenTestTags(::std::string const& tags) = 0;

    virtual void setAutomationUploadToken(::std::string const& token) = 0;

    virtual bool getDevAchievmentsAlwaysEnabled() = 0;

    virtual bool shouldServerTestsLogWorlds() const = 0;

    virtual bool shouldServerTestsAssertOnLevelDiff() const = 0;

    virtual ::std::string getAutomationMultiplayerSessionName() const = 0;

    virtual int getAutomationMultiplayerDeviceIndex() const = 0;

    virtual ::std::vector<::std::string> getAutomationMultiplayerUserAccounts() const = 0;

    virtual ::DevConnectionQuality getDevConnectionQuality() const = 0;

    virtual int getDevRenderAttachPos() const = 0;

    virtual void setMultiPlayerGame(bool multiPlayerGame) = 0;

    virtual bool getMultiPlayerGame() const = 0;

    virtual void setXboxLiveVisible(bool xboxLiveVisible) = 0;

    virtual bool wasLoggedInLastSession() = 0;

    virtual void setHasEverLoggedIntoXbl(bool hasEverLoggedIntoXbl) = 0;

    virtual bool getHasEverLoggedIntoXbl() const = 0;

    virtual void setHasShownFirstLaunchWelcomeModal(bool hasShownModal) = 0;

    virtual bool getHasShownFirstLaunchWelcomeModal() const = 0;

    virtual void setHasShownFirstSocialWelcomeModal(bool hasShownModal) = 0;

    virtual bool getHasShownFirstSocialWelcomeModal() const = 0;

    virtual void setDoNotShowFriendsListFTUE(bool hasShownModal) = 0;

    virtual bool getDoNotShowFriendsListFTUE() const = 0;

    virtual void setHasShownBannedModalAtStartup(bool hasShownModal) = 0;

    virtual bool getHasShownBannedModalAtStartup() const = 0;

    virtual void setAcknowledgedAutoSave(bool acknowledgedAutoSave) = 0;

    virtual bool getAcknowledgedAutoSave() const = 0;

    virtual void setRealmsInviteShowFriendsOption(bool showFriendInvitesOnly) = 0;

    virtual bool getRealmsInviteShowFriendsOption() const = 0;

    virtual void setNumberOfOwnedRealms(int numberOfOwnedRealms) = 0;

    virtual int getNumberOfOwnedRealms() const = 0;

    virtual void setNumberOfFriendsRealms(int numberOfOwnedRealms) = 0;

    virtual int getNumberOfFriendsRealms() const = 0;

    virtual void setCreateRealmUpsellCount(int value) = 0;

    virtual int getCreateRealmUpsellCount() const = 0;

    virtual void setSaveAndQuitCount(int value) = 0;

    virtual int getSaveAndQuitCount() const = 0;

    virtual void setIsRatingsPromptShown(bool value) = 0;

    virtual bool getIsRatingsPromptShown() const = 0;

    virtual void setShowRealmsTrialButtonFromPlayScreen(bool value) = 0;

    virtual bool getShowRealmsTrialButtonFromPlayScreen() const = 0;

    virtual ::AutoUpdateMode getAutoUpdateMode() const = 0;

    virtual void setCanUseCellularData(bool useNetworkData) = 0;

    virtual bool getCanUseCellularData() const = 0;

    virtual void setRequireWebsocketEncryption(bool require) = 0;

    virtual bool getRequireWebsocketEncryption() const = 0;

    virtual void setWebsocketsEnabled(bool enabled) = 0;

    virtual bool getWebsocketsEnabled() const = 0;

    virtual void setUseIPv6Only(bool useIPv6Only) = 0;

    virtual bool getUseIPv6Only() const = 0;

    virtual void setUseRetailXboxSandbox(bool const retail) = 0;

    virtual bool getUseRetailXboxSandbox() const = 0;

    virtual void setXboxLiveSandbox(::XboxSandboxEnvironment environment) = 0;

    virtual ::std::string const& getXboxLiveSandbox() const = 0;

    virtual void setRealmsEnvironment(::RealmsEnvironment realmsEnvironment) = 0;

    virtual ::RealmsEnvironment getRealmsEnvironment() const = 0;

    virtual void setRealmsEndpoint(::std::string const& realmsEndpoint) = 0;

    virtual ::std::string const& getRealmsEndpoint() const = 0;

    virtual ::std::string const& getRealmsV2Endpoint() const = 0;

    virtual void setRealmsEndpointPayment(::std::string const& realmsEndpointPayment) = 0;

    virtual ::std::string const& getRealmsEndpointPayment() const = 0;

    virtual void setRealmsRelyingParty(::std::string const& realmsRelyingParty) = 0;

    virtual ::std::string const& getRealmsRelyingParty() const = 0;

    virtual void setRealmsRelyingPartyPayment(::std::string const& realmsRelyingPartyPayment) = 0;

    virtual ::std::string const& getRealmsRelyingPartyPayment() const = 0;

    virtual void setStoreHasPurchasedCoins(bool value) = 0;

    virtual bool getStoreHasPurchasedCoins() const = 0;

    virtual void setShowUnfulfilledPurchaseModal(bool value) = 0;

    virtual bool getShowUnfulfilledPurchaseModal() const = 0;

    virtual void setSwitchCoinDebug(bool value) = 0;

    virtual bool getSwitchCoinDebug() const = 0;

    virtual float getDefaultPlatformSafeZoneX() const = 0;

    virtual float getDefaultPlatformSafeZoneY() const = 0;

    virtual bool getServerboundClientDiagnosticsEnabled() const = 0;

    virtual ::ScriptDebuggerSettings getScriptDebuggerSettings() const = 0;

    virtual ::Scripting::WatchdogSettings getScriptWatchdogSettings() const = 0;

    virtual void setEduHasLoggedIn(bool hasEduLoggedIn) = 0;

    virtual bool getEduHasLoggedIn() const = 0;

    virtual void setShownPlatformNetworkConnectConfirmation(bool value) = 0;

    virtual bool getShownPlatformNetworkConnectConfirmation() const = 0;

    virtual void setShownPlatformPremiumUpsell(bool value) = 0;

    virtual bool getShownPlatformPremiumUpsell() const = 0;

    virtual void setAppLaunchedCount(int value) = 0;

    virtual int getAppLaunchedCount() const = 0;

    virtual void setEcoMode(bool value) = 0;

    virtual bool getEcoMode() const = 0;

    virtual void setEduCloudBackupToggle(bool cloudBackup) = 0;

    virtual bool getEduCloudBackupToggle() const = 0;

    virtual void setUseFontOverrides(bool value) = 0;

    virtual bool getUseFontOverrides() const = 0;

    virtual ::NewInteractionModel getEffectiveTouchScheme() const = 0;

    virtual void setSaveDeferralCount(int value) = 0;

    virtual int getSaveDeferralCount() const = 0;

    virtual void setForceVibrantVisualsDisabled(bool value) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
