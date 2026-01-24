#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/options/AutoUpdateMode.h"
#include "mc/client/options/DebugHudOptions.h"
#include "mc/client/options/IOptions.h"
#include "mc/client/options/RealmsEnvironment.h"
#include "mc/client/options/SplitScreenDirection.h"
#include "mc/client/options/XboxSandboxEnvironment.h"
#include "mc/client/store/DisplayLoggedErrorType.h"
#include "mc/deps/input/InputMode.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/DevConnectionQuality.h"
#include "mc/options/GraphicsMode.h"
#include "mc/options/TargetRenderAPI.h"
#include "mc/options/UIProfile.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/platform/diagnostics/bedrock_log/LogCategory.h"

// auto generated forward declare list
// clang-format off
class Option;
// clang-format on

class BaseOptions : public ::IOptions, public ::std::enable_shared_from_this<::IOptions> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 6216, ::std::array<::std::unique_ptr<::Option>, 777>> mOptions;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::IOptions>>                      mPerMachineOptionsSource;
    ::ll::TypedStorage<1, 1, bool>                                              mIsDevOptionsDirty;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BaseOptions() /*override*/;

    virtual ::std::shared_ptr<::IOptions> sharedFromThis() /*override*/;

    virtual ::std::shared_ptr<::IOptions const> sharedFromThis() const /*override*/;

    virtual bool isValidOption(::OptionID optionId) const /*override*/;

    virtual ::gsl::not_null<::Option*> get(::OptionID optionId) /*override*/;

    virtual ::gsl::not_null<::Option const*> get(::OptionID optionId) const /*override*/;

    virtual ::std::optional<::Option*> getIfValid(::OptionID optionId) /*override*/;

    virtual ::std::optional<::Option const*> getIfValid(::OptionID optionId) const /*override*/;

    virtual ::std::array<::std::unique_ptr<::Option>, 777> const& getAllRegisteredOptions() /*override*/;

    virtual void forEachOption(::std::function<void(::Option*)> callback) /*override*/;

    virtual bool consumeDevOptionsDirty() /*override*/;

    virtual void dumpOptionsToLogFile() const /*override*/;

    virtual ::Option& _registerOption(::std::unique_ptr<::Option> option) /*override*/;

    virtual void updateInputMode(::InputMode inputMode) /*override*/;

    virtual void setMainVolume(float volume) /*override*/;

    virtual float getMainVolume() const /*override*/;

    virtual void setMusicVolume(float volume) /*override*/;

    virtual float getMusicVolume() const /*override*/;

    virtual void setSoundVolume(float volume) /*override*/;

    virtual float getSoundVolume() const /*override*/;

    virtual void setTTSVolume(float volume) /*override*/;

    virtual float getTTSVolume() const /*override*/;

    virtual float getChatMessageDuration() const /*override*/;

    virtual float getToastNotificationDuration() const /*override*/;

    virtual void setSensitivity(float sensitivity, ::InputMode inputMode) /*override*/;

    virtual float getSensitivity(::InputMode inputMode) const /*override*/;

    virtual void setSpyglassDamping(float value, ::InputMode inputMode) /*override*/;

    virtual float getSpyglassDamping(::InputMode inputMode) const /*override*/;

    virtual void setDwellBeforeDrag(float value) /*override*/;

    virtual float getDwellBeforeDrag() const /*override*/;

    virtual void setStackSplittingTrigger(float value) /*override*/;

    virtual float getStackSplittingTrigger() const /*override*/;

    virtual float getGameSensitivity(::InputMode inputmode) const /*override*/;

    virtual bool getInvertYMouse(::InputMode inputMode) const /*override*/;

    virtual float getParticleViewDistance() const /*override*/;

    virtual bool getBobView() const /*override*/;

    virtual float getDamageBobStrength() const /*override*/;

    virtual bool getCameraShake() const /*override*/;

    virtual bool getHideEndFlash() const /*override*/;

    virtual bool getIsDitheringEnabledBlocks() const /*override*/;

    virtual bool getIsDitheringEnabledMobs() const /*override*/;

    virtual void setResetPlayerAlignment(bool reset) /*override*/;

    virtual bool getResetPlayerAlignment() const /*override*/;

    virtual ::GraphicsMode getGraphicsMode() const /*override*/;

    virtual ::TargetRenderAPI getTargetRenderAPI() const /*override*/;

    virtual bool getTransparentLeaves() const /*override*/;

    virtual bool getFancyBubbles() const /*override*/;

    virtual bool getSmoothLighting() const /*override*/;

    virtual bool getGuiAccessibilityScaling() const /*override*/;

    virtual bool getUseMouseForDigging() const /*override*/;

    virtual bool isLeftHanded() const /*override*/;

    virtual bool isHotbarOnlyTouch() const /*override*/;

    virtual bool getDestroyVibration(::InputMode inputMode) const /*override*/;

    virtual bool getSplitVibration(::InputMode inputMode) const /*override*/;

    virtual bool getAutoJump(::InputMode inputMode) const /*override*/;

    virtual void setFullscreen(bool fullscreen) /*override*/;

    virtual bool getFullscreen() const /*override*/;

    virtual void toggleFullscreen() /*override*/;

    virtual void setDifficulty(int difficulty) /*override*/;

    virtual void setHideGUI(bool hideGUI) /*override*/;

    virtual bool getHideHud() const /*override*/;

    virtual bool getHideHand() const /*override*/;

    virtual void setHideToolTips(bool hideToolTips) /*override*/;

    virtual bool getHideToolTips() const /*override*/;

    virtual void setHidePaperDoll(bool hidePaperDoll) /*override*/;

    virtual bool getHidePaperDoll() const /*override*/;

    virtual void setIngamePlayerNames(bool useNameTag) /*override*/;

    virtual bool getIngamePlayerNames() const /*override*/;

    virtual void setSplitscreenIngamePlayerNames(bool useNameTag) /*override*/;

    virtual bool getSplitscreenIngamePlayerNames() const /*override*/;

    virtual void setInterfaceOpacity(float opacity) /*override*/;

    virtual float getInterfaceOpacity() const /*override*/;

    virtual void setSplitscreenInterfaceOpacity(float opacity) /*override*/;

    virtual float getSplitscreenInterfaceOpacity() const /*override*/;

    virtual void setShowAutoSaveIcon(bool ShowAutoSaveIcon) /*override*/;

    virtual bool getShowAutoSaveIcon() const /*override*/;

    virtual void setSplitscreenDirection(int splitScreenDirection) /*override*/;

    virtual ::SplitScreenDirection getSplitscreenDirection() const /*override*/;

    virtual void setHideScreens(bool hideScreens) /*override*/;

    virtual bool getHideScreens() const /*override*/;

    virtual void setHideItemInHand(bool hideItemInHand) /*override*/;

    virtual bool getHideItemInHand() const /*override*/;

    virtual bool getScreenAnimations() const /*override*/;

    virtual ::UIProfile getUIProfile() const /*override*/;

    virtual void setForceUseUnsortedPolys(bool renderUnsorted) /*override*/;

    virtual bool getForceUseUnsortedPolys() const /*override*/;

    virtual void setRenderDebug(::DebugHudOptions renderDebug) /*override*/;

    virtual ::DebugHudOptions getRenderDebug() const /*override*/;

    virtual bool getRemoteImguiEnabled() const /*override*/;

    virtual void setRemoteImguiEnabled(bool remoteImguiEnabled) /*override*/;

    virtual float getGamma() const /*override*/;

    virtual void setMSAA(int msaa) /*override*/;

    virtual void setTexelAA(bool texelAA) /*override*/;

    virtual void setFixedCamera(bool fixedCamera) /*override*/;

    virtual bool getFixedCamera() const /*override*/;

    virtual void setSkinId(::std::string const& skinId) /*override*/;

    virtual ::std::string const& getSkinId() const /*override*/;

    virtual void setLastCustomSkinId(::std::string const& lastCustomSkinId) /*override*/;

    virtual ::std::string const& getLastCustomSkinId() const /*override*/;

    virtual bool getFovToggle() const /*override*/;

    virtual void setServerVisible(bool serverVisible) /*override*/;

    virtual bool getServerVisible() const /*override*/;

    virtual void setSplitControls(bool splitControls) /*override*/;

    virtual bool getSplitControls() const /*override*/;

    virtual bool getSwapJumpAndSneak() const /*override*/;

    virtual bool getFancySkies() const /*override*/;

    virtual void setRenderClouds(bool renderClouds) /*override*/;

    virtual bool getRenderClouds() const /*override*/;

    virtual bool getDevAutoLoadLevel() const /*override*/;

    virtual bool getDevAssertionsDebugBreak() const /*override*/;

    virtual bool getDevAssertionsShowDialog() const /*override*/;

    virtual bool getDevShowDisplayLoggedError() const /*override*/;

    virtual bool getDevShowDisplayLoggedError(::DisplayLoggedErrorType errortype) const /*override*/;

    virtual void setDevShowDevConsoleButton(bool dev_showDevConsoleButton) /*override*/;

    virtual bool getDevShowDevConsoleButton() const /*override*/;

    virtual bool getDevIgnoreUserInput() const /*override*/;

    virtual bool getDevDisplayTreatmentPanel() const /*override*/;

    virtual void setDevDisplayTreatmentPanel(bool dev_displayTreatmentPanel) /*override*/;

    virtual void setDevShowMinecraftTCUIReplacement(bool dev_showMinecraftTCUIReplacement) /*override*/;

    virtual bool getDevShowMinecraftTCUIReplacement() const /*override*/;

    virtual bool getDevCreateRealmWithoutPurchase() const /*override*/;

    virtual bool getDevDisableConnectedStoragePush() const /*override*/;

    virtual bool getDevDisableConnectedStoragePull() const /*override*/;

    virtual void setDevFindMobs(bool dev_findMobs) /*override*/;

    virtual bool getDevFindMobs() const /*override*/;

    virtual void setDevRenderBoundingBoxes(bool dev_renderBoundingBoxes) /*override*/;

    virtual bool getDevRenderBoundingBoxes() const /*override*/;

    virtual void setDevRenderPaths(bool dev_renderPaths) /*override*/;

    virtual bool getDevRenderPaths() const /*override*/;

    virtual void setDevRenderMobInfoState(bool dev_renderMobInfoState) /*override*/;

    virtual bool getDevRenderMobInfoState() const /*override*/;

    virtual void setDevRenderGoalState(bool dev_renderGoalState) /*override*/;

    virtual bool getDevRenderGoalState() const /*override*/;

    virtual void setDevRenderSchedulerInfo(bool dev_renderSchedulerState) /*override*/;

    virtual bool getDevRenderSchedulerInfo() const /*override*/;

    virtual void setDevRenderCoordinateSystems(bool dev_renderCoords) /*override*/;

    virtual bool getDevRenderCoordinateSystems() const /*override*/;

    virtual bool getDevResetClientId() const /*override*/;

    virtual void setDevLogFlushImmediate(bool dev_FlushLogOnWrite) /*override*/;

    virtual bool getDevLogFlushImmediate() const /*override*/;

    virtual void setDevLogTimestamp(bool dev_timestamp) /*override*/;

    virtual bool getDevLogTimestamp() const /*override*/;

    virtual void setDevLogTrace(bool dev_trace) /*override*/;

    virtual bool getDevLogTrace() const /*override*/;

    virtual void setDevLogArea(bool dev_logArea) /*override*/;

    virtual bool getDevLogArea() const /*override*/;

    virtual void setDevLogPriority(bool dev_logPriority) /*override*/;

    virtual bool getDevLogPriority() const /*override*/;

    virtual void setDevLogThread(bool dev_logThread) /*override*/;

    virtual bool getDevLogThread() const /*override*/;

    virtual void setDevLogAppend(bool dev_append) /*override*/;

    virtual bool getDevLogAppend() const /*override*/;

    virtual void setDevLogProcessId(bool enable) /*override*/;

    virtual bool getDevLogProcessId() const /*override*/;

    virtual void setDevLogThreadId(bool enable) /*override*/;

    virtual bool getDevLogThreadId() const /*override*/;

    virtual void setDevLogMessageId(bool enable) /*override*/;

    virtual bool getDevLogMessageId() const /*override*/;

    virtual void setDevLogSilentLogging(bool silent) /*override*/;

    virtual bool getDevLogSilentLogging() const /*override*/;

    virtual void setDevLogPriorityFilter(::std::string const& devFilter) /*override*/;

    virtual ::std::string const& getDevLogPriorityFilter() const /*override*/;

    virtual void setDevLogAreaFilter(::std::string const& devFilter) /*override*/;

    virtual ::std::string const& getDevLogAreaFilter() const /*override*/;

    virtual void setDevGameEventRetentionTicks(ushort retentionTicks) /*override*/;

    virtual ushort getDevGameEventRetentionTicks() const /*override*/;

    virtual void setDevDeepDarkDebugRender(bool render) /*override*/;

    virtual bool getDevDeepDarkDebugRender() const /*override*/;

    virtual bool isLogCategoryEnabled(::BedrockLog::LogCategory category) const /*override*/;

    virtual bool getDevEnableProfilerOutput() /*override*/;

    virtual bool getDevAddUsersSilently() const /*override*/;

    virtual int getDevBenchmarkModeTime() /*override*/;

    virtual bool getDevDisableClientBlobCache() const /*override*/;

    virtual bool getDevClientBlobCacheOnLocalServer() const /*override*/;

    virtual void setLogFlushDelay(int delay_time) /*override*/;

    virtual int getLogFlushDelay() /*override*/;

    virtual int getAutomationParallelSlices() const /*override*/;

    virtual int getAutomationParallelCurrentSlice() const /*override*/;

    virtual bool getIsAutomationRun() const /*override*/;

    virtual bool getShouldQuitAppAfterTesting() const /*override*/;

    virtual bool shouldUploadTestArtifacts() const /*override*/;

    virtual bool hasAutomationTestRunTimedOut() const /*override*/;

    virtual bool hasAutomationTestRunReachedCrashLimit() const /*override*/;

    virtual bool shouldAppendDebugLogTimestamp() const /*override*/;

    virtual ::std::string getAutomationServerIp() const /*override*/;

    virtual ::std::string getAutomationServerPort() const /*override*/;

    virtual ::std::string getAutomationArtifactUploadSas() const /*override*/;

    virtual ::std::string getAutomationArtifactUploadUrl() const /*override*/;

    virtual ::std::string getAutomationRelativeBlobpath() const /*override*/;

    virtual ::std::string getAutomationFunctionalTestTags() const /*override*/;

    virtual ::std::string getAutomationServerTestTags() const /*override*/;

    virtual ::std::string getAutomationUnitTestTags() const /*override*/;

    virtual ::std::string getAutomationFunctionalBrokenTestTags() const /*override*/;

    virtual ::std::string getAutomationServerBrokenTestTags() const /*override*/;

    virtual ::std::string getAutomationUnitBrokenTestTags() const /*override*/;

    virtual ::std::string getAutomationTestBuildID() const /*override*/;

    virtual ::std::string getAutomationUploadToken() const /*override*/;

    virtual ::std::string getAutomationEnabledFeatures() const /*override*/;

    virtual ::std::string getAutomationEnabledExperiments() const /*override*/;

    virtual bool getAutomationShouldGroupServerTests() const /*override*/;

    virtual bool getAutomationUnrandomTestsEnabled() const /*override*/;

    virtual bool getAutomationRunEntireServerTestGroup() const /*override*/;

    virtual bool getAutomationRunServerTestAfterEachTest() const /*override*/;

    virtual ::std::string const& getTestBranchName() const /*override*/;

    virtual bool getFunctionalTestBlockInput() const /*override*/;

    virtual bool shouldBlockUserInput() const /*override*/;

    virtual bool hasSetSafeZone() const /*override*/;

    virtual bool getAutomationDisableTreatmentPackDownloads() const /*override*/;

    virtual bool getAutomationProfilerCaptureEnabled() const /*override*/;

    virtual bool getAutomationProfilerFlipEnabled() const /*override*/;

    virtual int getAutomationRepeatCount() const /*override*/;

    virtual int getAutomationSoakTestRunDurationMinutes() const /*override*/;

    virtual bool getAutomationRerunFailuresOnly() const /*override*/;

    virtual int getAutomationUnitPerTestcaseTimeout() const /*override*/;

    virtual int getAutomationFunctionalPerTestcaseTimeout() const /*override*/;

    virtual int getAutomationServerPerTestcaseTimeout() const /*override*/;

    virtual void setAutomationFunctionalBrokenTestTags(::std::string const& tags) /*override*/;

    virtual void setAutomationUnitBrokenTestTags(::std::string const& tags) /*override*/;

    virtual void setAutomationUploadToken(::std::string const& token) /*override*/;

    virtual bool getDevAchievmentsAlwaysEnabled() /*override*/;

    virtual bool shouldServerTestsLogWorlds() const /*override*/;

    virtual bool shouldServerTestsAssertOnLevelDiff() const /*override*/;

    virtual ::std::string getAutomationMultiplayerSessionName() const /*override*/;

    virtual int getAutomationMultiplayerDeviceIndex() const /*override*/;

    virtual ::std::vector<::std::string> getAutomationMultiplayerUserAccounts() const /*override*/;

    virtual ::DevConnectionQuality getDevConnectionQuality() const /*override*/;

    virtual int getDevRenderAttachPos() const /*override*/;

    virtual void setMultiPlayerGame(bool multiPlayerGame) /*override*/;

    virtual bool getMultiPlayerGame() const /*override*/;

    virtual void setXboxLiveVisible(bool xboxLiveVisible) /*override*/;

    virtual bool wasLoggedInLastSession() /*override*/;

    virtual void setHasEverLoggedIntoXbl(bool hasEverLoggedIntoXbl) /*override*/;

    virtual bool getHasEverLoggedIntoXbl() const /*override*/;

    virtual void setHasShownFirstLaunchWelcomeModal(bool hasShownModal) /*override*/;

    virtual bool getHasShownFirstLaunchWelcomeModal() const /*override*/;

    virtual void setHasShownFirstSocialWelcomeModal(bool hasShownModal) /*override*/;

    virtual bool getHasShownFirstSocialWelcomeModal() const /*override*/;

    virtual void setDoNotShowFriendsListFTUE(bool hasShownModal) /*override*/;

    virtual bool getDoNotShowFriendsListFTUE() const /*override*/;

    virtual void setHasShownBannedModalAtStartup(bool hasShownModal) /*override*/;

    virtual bool getHasShownBannedModalAtStartup() const /*override*/;

    virtual void setAcknowledgedAutoSave(bool acknowledgedAutoSave) /*override*/;

    virtual bool getAcknowledgedAutoSave() const /*override*/;

    virtual void setRealmsInviteShowFriendsOption(bool showFriendInvitesOnly) /*override*/;

    virtual bool getRealmsInviteShowFriendsOption() const /*override*/;

    virtual void setNumberOfOwnedRealms(int numberOfOwnedRealms) /*override*/;

    virtual int getNumberOfOwnedRealms() const /*override*/;

    virtual void setNumberOfFriendsRealms(int numberOfOwnedRealms) /*override*/;

    virtual int getNumberOfFriendsRealms() const /*override*/;

    virtual void setCreateRealmUpsellCount(int value) /*override*/;

    virtual int getCreateRealmUpsellCount() const /*override*/;

    virtual void setSaveAndQuitCount(int value) /*override*/;

    virtual int getSaveAndQuitCount() const /*override*/;

    virtual void setIsRatingsPromptShown(bool value) /*override*/;

    virtual bool getIsRatingsPromptShown() const /*override*/;

    virtual void setShowRealmsTrialButtonFromPlayScreen(bool value) /*override*/;

    virtual bool getShowRealmsTrialButtonFromPlayScreen() const /*override*/;

    virtual ::AutoUpdateMode getAutoUpdateMode() const /*override*/;

    virtual void setCanUseCellularData(bool useNetworkData) /*override*/;

    virtual bool getCanUseCellularData() const /*override*/;

    virtual int getPlayerViewPerspective() const /*override*/;

    virtual void setRequireWebsocketEncryption(bool require) /*override*/;

    virtual bool getRequireWebsocketEncryption() const /*override*/;

    virtual void setWebsocketsEnabled(bool enabled) /*override*/;

    virtual bool getWebsocketsEnabled() const /*override*/;

    virtual void setUseIPv6Only(bool useIPv6Only) /*override*/;

    virtual bool getUseIPv6Only() const /*override*/;

    virtual void setUseRetailXboxSandbox(bool const retail) /*override*/;

    virtual bool getUseRetailXboxSandbox() const /*override*/;

    virtual void setXboxLiveSandbox(::XboxSandboxEnvironment environment) /*override*/;

    virtual ::std::string const& getXboxLiveSandbox() const /*override*/;

    virtual void setRealmsEnvironment(::RealmsEnvironment realmsEnvironment) /*override*/;

    virtual ::RealmsEnvironment getRealmsEnvironment() const /*override*/;

    virtual void setRealmsEndpoint(::std::string const& realmsEndpoint) /*override*/;

    virtual ::std::string const& getRealmsEndpoint() const /*override*/;

    virtual ::std::string const& getRealmsV2Endpoint() const /*override*/;

    virtual void setRealmsEndpointPayment(::std::string const& realmsEndpointPayment) /*override*/;

    virtual ::std::string const& getRealmsEndpointPayment() const /*override*/;

    virtual void setRealmsRelyingParty(::std::string const& realmsRelyingParty) /*override*/;

    virtual ::std::string const& getRealmsRelyingParty() const /*override*/;

    virtual void setRealmsRelyingPartyPayment(::std::string const& realmsRelyingPartyPayment) /*override*/;

    virtual ::std::string const& getRealmsRelyingPartyPayment() const /*override*/;

    virtual void setStoreHasPurchasedCoins(bool value) /*override*/;

    virtual bool getStoreHasPurchasedCoins() const /*override*/;

    virtual void setShowUnfulfilledPurchaseModal(bool value) /*override*/;

    virtual bool getShowUnfulfilledPurchaseModal() const /*override*/;

    virtual void setSwitchCoinDebug(bool value) /*override*/;

    virtual bool getSwitchCoinDebug() const /*override*/;

    virtual void setEduHasLoggedIn(bool hasEduLoggedIn) /*override*/;

    virtual bool getEduHasLoggedIn() const /*override*/;

    virtual void setShownPlatformNetworkConnectConfirmation(bool value) /*override*/;

    virtual bool getShownPlatformNetworkConnectConfirmation() const /*override*/;

    virtual void setShownPlatformPremiumUpsell(bool value) /*override*/;

    virtual bool getShownPlatformPremiumUpsell() const /*override*/;

    virtual void setAppLaunchedCount(int value) /*override*/;

    virtual int getAppLaunchedCount() const /*override*/;

    virtual void setEcoMode(bool value) /*override*/;

    virtual bool getEcoMode() const /*override*/;

    virtual void setEduCloudBackupToggle(bool cloudBackup) /*override*/;

    virtual bool getEduCloudBackupToggle() const /*override*/;

    virtual void setUseFontOverrides(bool value) /*override*/;

    virtual bool getUseFontOverrides() const /*override*/;

    virtual ::NewInteractionModel getEffectiveTouchScheme() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Option* _getOptionAndAssertIfNotPresent(::OptionID optionId) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::shared_ptr<::IOptions> $sharedFromThis();

    MCFOLD ::std::shared_ptr<::IOptions const> $sharedFromThis() const;

    MCFOLD bool $isValidOption(::OptionID optionId) const;

    MCFOLD ::gsl::not_null<::Option*> $get(::OptionID optionId);

    MCFOLD ::gsl::not_null<::Option const*> $get(::OptionID optionId) const;

    MCFOLD ::std::optional<::Option*> $getIfValid(::OptionID optionId);

    MCFOLD ::std::optional<::Option const*> $getIfValid(::OptionID optionId) const;

    MCFOLD ::std::array<::std::unique_ptr<::Option>, 777> const& $getAllRegisteredOptions();

    MCFOLD void $forEachOption(::std::function<void(::Option*)> callback);

    MCAPI bool $consumeDevOptionsDirty();

    MCFOLD void $dumpOptionsToLogFile() const;

    MCAPI ::Option& $_registerOption(::std::unique_ptr<::Option> option);

    MCAPI void $updateInputMode(::InputMode inputMode);

    MCAPI void $setMainVolume(float volume);

    MCAPI float $getMainVolume() const;

    MCAPI void $setMusicVolume(float volume);

    MCAPI float $getMusicVolume() const;

    MCAPI void $setSoundVolume(float volume);

    MCAPI float $getSoundVolume() const;

    MCAPI void $setTTSVolume(float volume);

    MCAPI float $getTTSVolume() const;

    MCAPI float $getChatMessageDuration() const;

    MCAPI float $getToastNotificationDuration() const;

    MCAPI void $setSensitivity(float sensitivity, ::InputMode inputMode);

    MCAPI float $getSensitivity(::InputMode inputMode) const;

    MCAPI void $setSpyglassDamping(float value, ::InputMode inputMode);

    MCAPI float $getSpyglassDamping(::InputMode inputMode) const;

    MCAPI void $setDwellBeforeDrag(float value);

    MCAPI float $getDwellBeforeDrag() const;

    MCAPI void $setStackSplittingTrigger(float value);

    MCAPI float $getStackSplittingTrigger() const;

    MCAPI float $getGameSensitivity(::InputMode inputmode) const;

    MCAPI bool $getInvertYMouse(::InputMode inputMode) const;

    MCAPI float $getParticleViewDistance() const;

    MCAPI bool $getBobView() const;

    MCAPI float $getDamageBobStrength() const;

    MCAPI bool $getCameraShake() const;

    MCAPI bool $getHideEndFlash() const;

    MCAPI bool $getIsDitheringEnabledBlocks() const;

    MCAPI bool $getIsDitheringEnabledMobs() const;

    MCAPI void $setResetPlayerAlignment(bool reset);

    MCAPI bool $getResetPlayerAlignment() const;

    MCAPI ::GraphicsMode $getGraphicsMode() const;

    MCAPI ::TargetRenderAPI $getTargetRenderAPI() const;

    MCAPI bool $getTransparentLeaves() const;

    MCAPI bool $getFancyBubbles() const;

    MCAPI bool $getSmoothLighting() const;

    MCAPI bool $getGuiAccessibilityScaling() const;

    MCFOLD bool $getUseMouseForDigging() const;

    MCAPI bool $isLeftHanded() const;

    MCAPI bool $isHotbarOnlyTouch() const;

    MCAPI bool $getDestroyVibration(::InputMode inputMode) const;

    MCAPI bool $getSplitVibration(::InputMode inputMode) const;

    MCAPI bool $getAutoJump(::InputMode inputMode) const;

    MCAPI void $setFullscreen(bool fullscreen);

    MCAPI bool $getFullscreen() const;

    MCAPI void $toggleFullscreen();

    MCAPI void $setDifficulty(int difficulty);

    MCAPI void $setHideGUI(bool hideGUI);

    MCAPI bool $getHideHud() const;

    MCAPI bool $getHideHand() const;

    MCAPI void $setHideToolTips(bool hideToolTips);

    MCAPI bool $getHideToolTips() const;

    MCAPI void $setHidePaperDoll(bool hidePaperDoll);

    MCAPI bool $getHidePaperDoll() const;

    MCAPI void $setIngamePlayerNames(bool useNameTag);

    MCAPI bool $getIngamePlayerNames() const;

    MCAPI void $setSplitscreenIngamePlayerNames(bool useNameTag);

    MCAPI bool $getSplitscreenIngamePlayerNames() const;

    MCAPI void $setInterfaceOpacity(float opacity);

    MCAPI float $getInterfaceOpacity() const;

    MCAPI void $setSplitscreenInterfaceOpacity(float opacity);

    MCAPI float $getSplitscreenInterfaceOpacity() const;

    MCAPI void $setShowAutoSaveIcon(bool ShowAutoSaveIcon);

    MCAPI bool $getShowAutoSaveIcon() const;

    MCAPI void $setSplitscreenDirection(int splitScreenDirection);

    MCAPI ::SplitScreenDirection $getSplitscreenDirection() const;

    MCAPI void $setHideScreens(bool hideScreens);

    MCAPI bool $getHideScreens() const;

    MCAPI void $setHideItemInHand(bool hideItemInHand);

    MCAPI bool $getHideItemInHand() const;

    MCAPI bool $getScreenAnimations() const;

    MCAPI ::UIProfile $getUIProfile() const;

    MCAPI void $setForceUseUnsortedPolys(bool renderUnsorted);

    MCAPI bool $getForceUseUnsortedPolys() const;

    MCAPI void $setRenderDebug(::DebugHudOptions renderDebug);

    MCAPI ::DebugHudOptions $getRenderDebug() const;

    MCFOLD bool $getRemoteImguiEnabled() const;

    MCFOLD void $setRemoteImguiEnabled(bool remoteImguiEnabled);

    MCAPI float $getGamma() const;

    MCAPI void $setMSAA(int msaa);

    MCAPI void $setTexelAA(bool texelAA);

    MCAPI void $setFixedCamera(bool fixedCamera);

    MCAPI bool $getFixedCamera() const;

    MCAPI void $setSkinId(::std::string const& skinId);

    MCAPI ::std::string const& $getSkinId() const;

    MCAPI void $setLastCustomSkinId(::std::string const& lastCustomSkinId);

    MCAPI ::std::string const& $getLastCustomSkinId() const;

    MCAPI bool $getFovToggle() const;

    MCAPI void $setServerVisible(bool serverVisible);

    MCAPI bool $getServerVisible() const;

    MCAPI void $setSplitControls(bool splitControls);

    MCAPI bool $getSplitControls() const;

    MCAPI bool $getSwapJumpAndSneak() const;

    MCAPI bool $getFancySkies() const;

    MCAPI void $setRenderClouds(bool renderClouds);

    MCAPI bool $getRenderClouds() const;

    MCAPI bool $getDevAutoLoadLevel() const;

    MCAPI bool $getDevAssertionsDebugBreak() const;

    MCAPI bool $getDevAssertionsShowDialog() const;

    MCAPI bool $getDevShowDisplayLoggedError() const;

    MCAPI bool $getDevShowDisplayLoggedError(::DisplayLoggedErrorType errortype) const;

    MCAPI void $setDevShowDevConsoleButton(bool dev_showDevConsoleButton);

    MCAPI bool $getDevShowDevConsoleButton() const;

    MCFOLD bool $getDevIgnoreUserInput() const;

    MCAPI bool $getDevDisplayTreatmentPanel() const;

    MCAPI void $setDevDisplayTreatmentPanel(bool dev_displayTreatmentPanel);

    MCAPI void $setDevShowMinecraftTCUIReplacement(bool dev_showMinecraftTCUIReplacement);

    MCAPI bool $getDevShowMinecraftTCUIReplacement() const;

    MCAPI bool $getDevCreateRealmWithoutPurchase() const;

    MCAPI bool $getDevDisableConnectedStoragePush() const;

    MCAPI bool $getDevDisableConnectedStoragePull() const;

    MCAPI void $setDevFindMobs(bool dev_findMobs);

    MCAPI bool $getDevFindMobs() const;

    MCAPI void $setDevRenderBoundingBoxes(bool dev_renderBoundingBoxes);

    MCAPI bool $getDevRenderBoundingBoxes() const;

    MCAPI void $setDevRenderPaths(bool dev_renderPaths);

    MCAPI bool $getDevRenderPaths() const;

    MCAPI void $setDevRenderMobInfoState(bool dev_renderMobInfoState);

    MCAPI bool $getDevRenderMobInfoState() const;

    MCAPI void $setDevRenderGoalState(bool dev_renderGoalState);

    MCAPI bool $getDevRenderGoalState() const;

    MCAPI void $setDevRenderSchedulerInfo(bool dev_renderSchedulerState);

    MCAPI bool $getDevRenderSchedulerInfo() const;

    MCAPI void $setDevRenderCoordinateSystems(bool dev_renderCoords);

    MCAPI bool $getDevRenderCoordinateSystems() const;

    MCAPI bool $getDevResetClientId() const;

    MCAPI void $setDevLogFlushImmediate(bool dev_FlushLogOnWrite);

    MCAPI bool $getDevLogFlushImmediate() const;

    MCAPI void $setDevLogTimestamp(bool dev_timestamp);

    MCAPI bool $getDevLogTimestamp() const;

    MCAPI void $setDevLogTrace(bool dev_trace);

    MCFOLD bool $getDevLogTrace() const;

    MCAPI void $setDevLogArea(bool dev_logArea);

    MCAPI bool $getDevLogArea() const;

    MCAPI void $setDevLogPriority(bool dev_logPriority);

    MCAPI bool $getDevLogPriority() const;

    MCFOLD void $setDevLogThread(bool dev_logThread);

    MCFOLD bool $getDevLogThread() const;

    MCAPI void $setDevLogAppend(bool dev_append);

    MCFOLD bool $getDevLogAppend() const;

    MCAPI void $setDevLogProcessId(bool enable);

    MCAPI bool $getDevLogProcessId() const;

    MCFOLD void $setDevLogThreadId(bool enable);

    MCFOLD bool $getDevLogThreadId() const;

    MCAPI void $setDevLogMessageId(bool enable);

    MCAPI bool $getDevLogMessageId() const;

    MCAPI void $setDevLogSilentLogging(bool silent);

    MCAPI bool $getDevLogSilentLogging() const;

    MCAPI void $setDevLogPriorityFilter(::std::string const& devFilter);

    MCAPI ::std::string const& $getDevLogPriorityFilter() const;

    MCAPI void $setDevLogAreaFilter(::std::string const& devFilter);

    MCAPI ::std::string const& $getDevLogAreaFilter() const;

    MCAPI void $setDevGameEventRetentionTicks(ushort retentionTicks);

    MCAPI ushort $getDevGameEventRetentionTicks() const;

    MCAPI void $setDevDeepDarkDebugRender(bool render);

    MCAPI bool $getDevDeepDarkDebugRender() const;

    MCAPI bool $isLogCategoryEnabled(::BedrockLog::LogCategory category) const;

    MCAPI bool $getDevEnableProfilerOutput();

    MCAPI bool $getDevAddUsersSilently() const;

    MCAPI int $getDevBenchmarkModeTime();

    MCAPI bool $getDevDisableClientBlobCache() const;

    MCAPI bool $getDevClientBlobCacheOnLocalServer() const;

    MCFOLD void $setLogFlushDelay(int delay_time);

    MCFOLD int $getLogFlushDelay();

    MCFOLD int $getAutomationParallelSlices() const;

    MCFOLD int $getAutomationParallelCurrentSlice() const;

    MCFOLD bool $getIsAutomationRun() const;

    MCFOLD bool $getShouldQuitAppAfterTesting() const;

    MCFOLD bool $shouldUploadTestArtifacts() const;

    MCFOLD bool $hasAutomationTestRunTimedOut() const;

    MCFOLD bool $hasAutomationTestRunReachedCrashLimit() const;

    MCFOLD bool $shouldAppendDebugLogTimestamp() const;

    MCFOLD ::std::string $getAutomationServerIp() const;

    MCFOLD ::std::string $getAutomationServerPort() const;

    MCFOLD ::std::string $getAutomationArtifactUploadSas() const;

    MCFOLD ::std::string $getAutomationArtifactUploadUrl() const;

    MCFOLD ::std::string $getAutomationRelativeBlobpath() const;

    MCFOLD ::std::string $getAutomationFunctionalTestTags() const;

    MCFOLD ::std::string $getAutomationServerTestTags() const;

    MCFOLD ::std::string $getAutomationUnitTestTags() const;

    MCFOLD ::std::string $getAutomationFunctionalBrokenTestTags() const;

    MCFOLD ::std::string $getAutomationServerBrokenTestTags() const;

    MCFOLD ::std::string $getAutomationUnitBrokenTestTags() const;

    MCFOLD ::std::string $getAutomationTestBuildID() const;

    MCFOLD ::std::string $getAutomationUploadToken() const;

    MCFOLD ::std::string $getAutomationEnabledFeatures() const;

    MCFOLD ::std::string $getAutomationEnabledExperiments() const;

    MCFOLD bool $getAutomationShouldGroupServerTests() const;

    MCFOLD bool $getAutomationUnrandomTestsEnabled() const;

    MCFOLD bool $getAutomationRunEntireServerTestGroup() const;

    MCFOLD bool $getAutomationRunServerTestAfterEachTest() const;

    MCFOLD ::std::string const& $getTestBranchName() const;

    MCFOLD bool $getFunctionalTestBlockInput() const;

    MCFOLD bool $shouldBlockUserInput() const;

    MCAPI bool $hasSetSafeZone() const;

    MCFOLD bool $getAutomationDisableTreatmentPackDownloads() const;

    MCFOLD bool $getAutomationProfilerCaptureEnabled() const;

    MCFOLD bool $getAutomationProfilerFlipEnabled() const;

    MCFOLD int $getAutomationRepeatCount() const;

    MCFOLD int $getAutomationSoakTestRunDurationMinutes() const;

    MCFOLD bool $getAutomationRerunFailuresOnly() const;

    MCFOLD int $getAutomationUnitPerTestcaseTimeout() const;

    MCFOLD int $getAutomationFunctionalPerTestcaseTimeout() const;

    MCFOLD int $getAutomationServerPerTestcaseTimeout() const;

    MCFOLD void $setAutomationFunctionalBrokenTestTags(::std::string const& tags);

    MCFOLD void $setAutomationUnitBrokenTestTags(::std::string const& tags);

    MCFOLD void $setAutomationUploadToken(::std::string const& token);

    MCFOLD bool $getDevAchievmentsAlwaysEnabled();

    MCFOLD bool $shouldServerTestsLogWorlds() const;

    MCFOLD bool $shouldServerTestsAssertOnLevelDiff() const;

    MCFOLD ::std::string $getAutomationMultiplayerSessionName() const;

    MCFOLD int $getAutomationMultiplayerDeviceIndex() const;

    MCFOLD ::std::vector<::std::string> $getAutomationMultiplayerUserAccounts() const;

    MCAPI int $getDevRenderAttachPos() const;

    MCAPI void $setMultiPlayerGame(bool multiPlayerGame);

    MCAPI bool $getMultiPlayerGame() const;

    MCAPI void $setXboxLiveVisible(bool xboxLiveVisible);

    MCAPI bool $wasLoggedInLastSession();

    MCAPI void $setHasEverLoggedIntoXbl(bool hasEverLoggedIntoXbl);

    MCAPI bool $getHasEverLoggedIntoXbl() const;

    MCAPI void $setHasShownFirstLaunchWelcomeModal(bool hasShownModal);

    MCAPI bool $getHasShownFirstLaunchWelcomeModal() const;

    MCAPI void $setHasShownFirstSocialWelcomeModal(bool hasShownModal);

    MCAPI bool $getHasShownFirstSocialWelcomeModal() const;

    MCAPI void $setDoNotShowFriendsListFTUE(bool hasShownModal);

    MCAPI bool $getDoNotShowFriendsListFTUE() const;

    MCAPI void $setHasShownBannedModalAtStartup(bool hasShownModal);

    MCAPI bool $getHasShownBannedModalAtStartup() const;

    MCAPI void $setAcknowledgedAutoSave(bool acknowledgedAutoSave);

    MCAPI bool $getAcknowledgedAutoSave() const;

    MCAPI void $setRealmsInviteShowFriendsOption(bool showFriendInvitesOnly);

    MCAPI bool $getRealmsInviteShowFriendsOption() const;

    MCAPI void $setNumberOfOwnedRealms(int numberOfOwnedRealms);

    MCAPI int $getNumberOfOwnedRealms() const;

    MCAPI void $setNumberOfFriendsRealms(int numberOfOwnedRealms);

    MCAPI int $getNumberOfFriendsRealms() const;

    MCAPI void $setCreateRealmUpsellCount(int value);

    MCAPI int $getCreateRealmUpsellCount() const;

    MCAPI void $setSaveAndQuitCount(int value);

    MCAPI int $getSaveAndQuitCount() const;

    MCAPI void $setIsRatingsPromptShown(bool value);

    MCAPI bool $getIsRatingsPromptShown() const;

    MCAPI void $setShowRealmsTrialButtonFromPlayScreen(bool value);

    MCAPI bool $getShowRealmsTrialButtonFromPlayScreen() const;

    MCAPI ::AutoUpdateMode $getAutoUpdateMode() const;

    MCAPI void $setCanUseCellularData(bool useNetworkData);

    MCAPI bool $getCanUseCellularData() const;

    MCAPI int $getPlayerViewPerspective() const;

    MCAPI void $setRequireWebsocketEncryption(bool require);

    MCAPI bool $getRequireWebsocketEncryption() const;

    MCAPI void $setWebsocketsEnabled(bool enabled);

    MCAPI bool $getWebsocketsEnabled() const;

    MCAPI void $setUseIPv6Only(bool useIPv6Only);

    MCAPI bool $getUseIPv6Only() const;

    MCAPI void $setUseRetailXboxSandbox(bool const retail);

    MCAPI bool $getUseRetailXboxSandbox() const;

    MCAPI void $setXboxLiveSandbox(::XboxSandboxEnvironment environment);

    MCAPI ::std::string const& $getXboxLiveSandbox() const;

    MCAPI void $setRealmsEnvironment(::RealmsEnvironment realmsEnvironment);

    MCAPI ::RealmsEnvironment $getRealmsEnvironment() const;

    MCAPI void $setRealmsEndpoint(::std::string const& realmsEndpoint);

    MCAPI ::std::string const& $getRealmsEndpoint() const;

    MCAPI ::std::string const& $getRealmsV2Endpoint() const;

    MCAPI void $setRealmsEndpointPayment(::std::string const& realmsEndpointPayment);

    MCAPI ::std::string const& $getRealmsEndpointPayment() const;

    MCAPI void $setRealmsRelyingParty(::std::string const& realmsRelyingParty);

    MCAPI ::std::string const& $getRealmsRelyingParty() const;

    MCAPI void $setRealmsRelyingPartyPayment(::std::string const& realmsRelyingPartyPayment);

    MCAPI ::std::string const& $getRealmsRelyingPartyPayment() const;

    MCAPI void $setStoreHasPurchasedCoins(bool value);

    MCAPI bool $getStoreHasPurchasedCoins() const;

    MCAPI void $setShowUnfulfilledPurchaseModal(bool value);

    MCAPI bool $getShowUnfulfilledPurchaseModal() const;

    MCAPI void $setSwitchCoinDebug(bool value);

    MCAPI bool $getSwitchCoinDebug() const;

    MCAPI void $setEduHasLoggedIn(bool hasEduLoggedIn);

    MCAPI bool $getEduHasLoggedIn() const;

    MCAPI void $setShownPlatformNetworkConnectConfirmation(bool value);

    MCAPI bool $getShownPlatformNetworkConnectConfirmation() const;

    MCAPI void $setShownPlatformPremiumUpsell(bool value);

    MCAPI bool $getShownPlatformPremiumUpsell() const;

    MCAPI void $setAppLaunchedCount(int value);

    MCAPI int $getAppLaunchedCount() const;

    MCAPI void $setEcoMode(bool value);

    MCAPI bool $getEcoMode() const;

    MCAPI void $setEduCloudBackupToggle(bool cloudBackup);

    MCAPI bool $getEduCloudBackupToggle() const;

    MCAPI void $setUseFontOverrides(bool value);

    MCAPI bool $getUseFontOverrides() const;

    MCAPI ::NewInteractionModel $getEffectiveTouchScheme() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
