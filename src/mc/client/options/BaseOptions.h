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
#include "mc/diagnostics/bedrock_log/LogCategory.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/DevConnectionQuality.h"
#include "mc/options/GraphicsMode.h"
#include "mc/options/TargetRenderAPI.h"
#include "mc/options/UIProfile.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class Option;
// clang-format on

class BaseOptions : public ::IOptions, public ::std::enable_shared_from_this<::IOptions> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 6176> mUnkacbc15;
    ::ll::UntypedStorage<8, 16>   mUnk8e592b;
    ::ll::UntypedStorage<1, 1>    mUnkb0c321;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseOptions& operator=(BaseOptions const&);
    BaseOptions(BaseOptions const&);
    BaseOptions();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~BaseOptions() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~BaseOptions() /*override*/;
#endif

    virtual ::std::shared_ptr<::IOptions> sharedFromThis() /*override*/;

    virtual ::std::shared_ptr<::IOptions const> sharedFromThis() const /*override*/;

    virtual bool isValidOption(::OptionID optionId) const /*override*/;

    virtual ::gsl::not_null<::Option*> get(::OptionID optionId) /*override*/;

    virtual ::gsl::not_null<::Option const*> get(::OptionID optionId) const /*override*/;

    virtual ::std::optional<::Option*> getIfValid(::OptionID optionId) /*override*/;

    virtual ::std::optional<::Option const*> getIfValid(::OptionID optionId) const /*override*/;

    virtual ::std::array<::std::unique_ptr<::Option>, 772> const& getAllRegisteredOptions() /*override*/;

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
    MCNAPI_C ::Option* _getOptionAndAssertIfNotPresent(::OptionID optionId) const;
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
    MCNAPI ::std::shared_ptr<::IOptions> $sharedFromThis();

    MCNAPI ::std::shared_ptr<::IOptions const> $sharedFromThis() const;

    MCNAPI bool $isValidOption(::OptionID optionId) const;

    MCNAPI ::gsl::not_null<::Option*> $get(::OptionID optionId);

    MCNAPI ::gsl::not_null<::Option const*> $get(::OptionID optionId) const;

    MCNAPI ::std::optional<::Option*> $getIfValid(::OptionID optionId);

    MCNAPI ::std::optional<::Option const*> $getIfValid(::OptionID optionId) const;

    MCNAPI ::std::array<::std::unique_ptr<::Option>, 772> const& $getAllRegisteredOptions();

    MCNAPI void $forEachOption(::std::function<void(::Option*)> callback);

    MCNAPI bool $consumeDevOptionsDirty();

    MCNAPI void $dumpOptionsToLogFile() const;

    MCNAPI ::Option& $_registerOption(::std::unique_ptr<::Option> option);

    MCNAPI void $updateInputMode(::InputMode inputMode);

    MCNAPI void $setMainVolume(float volume);

    MCNAPI float $getMainVolume() const;

    MCNAPI void $setMusicVolume(float volume);

    MCNAPI float $getMusicVolume() const;

    MCNAPI void $setSoundVolume(float volume);

    MCNAPI float $getSoundVolume() const;

    MCNAPI void $setTTSVolume(float volume);

    MCNAPI float $getTTSVolume() const;

    MCNAPI float $getChatMessageDuration() const;

    MCNAPI float $getToastNotificationDuration() const;

    MCNAPI void $setSensitivity(float sensitivity, ::InputMode inputMode);

    MCNAPI float $getSensitivity(::InputMode inputMode) const;

    MCNAPI void $setSpyglassDamping(float value, ::InputMode inputMode);

    MCNAPI float $getSpyglassDamping(::InputMode inputMode) const;

    MCNAPI void $setDwellBeforeDrag(float value);

    MCNAPI float $getDwellBeforeDrag() const;

    MCNAPI void $setStackSplittingTrigger(float value);

    MCNAPI float $getStackSplittingTrigger() const;

    MCNAPI float $getGameSensitivity(::InputMode inputmode) const;

    MCNAPI bool $getInvertYMouse(::InputMode inputMode) const;

    MCNAPI float $getParticleViewDistance() const;

    MCNAPI bool $getBobView() const;

    MCNAPI bool $getCameraShake() const;

    MCNAPI bool $getHideEndFlash() const;

    MCNAPI bool $getIsDitheringEnabledBlocks() const;

    MCNAPI bool $getIsDitheringEnabledMobs() const;

    MCNAPI void $setResetPlayerAlignment(bool reset);

    MCNAPI bool $getResetPlayerAlignment() const;

    MCNAPI ::GraphicsMode $getGraphicsMode() const;

    MCNAPI ::TargetRenderAPI $getTargetRenderAPI() const;

    MCNAPI bool $getTransparentLeaves() const;

    MCNAPI bool $getFancyBubbles() const;

    MCNAPI bool $getSmoothLighting() const;

    MCNAPI bool $getGuiAccessibilityScaling() const;

    MCNAPI bool $getUseMouseForDigging() const;

    MCNAPI bool $isLeftHanded() const;

    MCNAPI bool $isHotbarOnlyTouch() const;

    MCNAPI bool $getDestroyVibration(::InputMode inputMode) const;

    MCNAPI bool $getSplitVibration(::InputMode inputMode) const;

    MCNAPI bool $getAutoJump(::InputMode inputMode) const;

    MCNAPI void $setFullscreen(bool fullscreen);

    MCNAPI bool $getFullscreen() const;

    MCNAPI void $toggleFullscreen();

    MCNAPI void $setDifficulty(int difficulty);

    MCNAPI void $setHideGUI(bool hideGUI);

    MCNAPI bool $getHideHud() const;

    MCNAPI bool $getHideHand() const;

    MCNAPI void $setHideToolTips(bool hideToolTips);

    MCNAPI bool $getHideToolTips() const;

    MCNAPI void $setHidePaperDoll(bool hidePaperDoll);

    MCNAPI bool $getHidePaperDoll() const;

    MCNAPI void $setIngamePlayerNames(bool useNameTag);

    MCNAPI bool $getIngamePlayerNames() const;

    MCNAPI void $setSplitscreenIngamePlayerNames(bool useNameTag);

    MCNAPI bool $getSplitscreenIngamePlayerNames() const;

    MCNAPI void $setInterfaceOpacity(float opacity);

    MCNAPI float $getInterfaceOpacity() const;

    MCNAPI void $setSplitscreenInterfaceOpacity(float opacity);

    MCNAPI float $getSplitscreenInterfaceOpacity() const;

    MCNAPI void $setShowAutoSaveIcon(bool ShowAutoSaveIcon);

    MCNAPI bool $getShowAutoSaveIcon() const;

    MCNAPI void $setSplitscreenDirection(int splitScreenDirection);

    MCNAPI ::SplitScreenDirection $getSplitscreenDirection() const;

    MCNAPI void $setHideScreens(bool hideScreens);

    MCNAPI bool $getHideScreens() const;

    MCNAPI void $setHideItemInHand(bool hideItemInHand);

    MCNAPI bool $getHideItemInHand() const;

    MCNAPI bool $getScreenAnimations() const;

    MCNAPI void $setForceUseUnsortedPolys(bool renderUnsorted);

    MCNAPI bool $getForceUseUnsortedPolys() const;

    MCNAPI void $setRenderDebug(::DebugHudOptions renderDebug);

    MCNAPI ::DebugHudOptions $getRenderDebug() const;

    MCNAPI bool $getRemoteImguiEnabled() const;

    MCNAPI void $setRemoteImguiEnabled(bool remoteImguiEnabled);

    MCNAPI float $getGamma() const;

    MCNAPI void $setMSAA(int msaa);

    MCNAPI void $setTexelAA(bool texelAA);

    MCNAPI void $setFixedCamera(bool fixedCamera);

    MCNAPI bool $getFixedCamera() const;

    MCNAPI void $setSkinId(::std::string const& skinId);

    MCNAPI ::std::string const& $getSkinId() const;

    MCNAPI void $setLastCustomSkinId(::std::string const& lastCustomSkinId);

    MCNAPI ::std::string const& $getLastCustomSkinId() const;

    MCNAPI bool $getFovToggle() const;

    MCNAPI void $setServerVisible(bool serverVisible);

    MCNAPI bool $getServerVisible() const;

    MCNAPI void $setSplitControls(bool splitControls);

    MCNAPI bool $getSplitControls() const;

    MCNAPI bool $getSwapJumpAndSneak() const;

    MCNAPI bool $getFancySkies() const;

    MCNAPI void $setRenderClouds(bool renderClouds);

    MCNAPI bool $getRenderClouds() const;

    MCNAPI bool $getDevAutoLoadLevel() const;

    MCNAPI bool $getDevAssertionsDebugBreak() const;

    MCNAPI bool $getDevAssertionsShowDialog() const;

    MCNAPI bool $getDevShowDisplayLoggedError() const;

    MCNAPI bool $getDevShowDisplayLoggedError(::DisplayLoggedErrorType errortype) const;

    MCNAPI void $setDevShowDevConsoleButton(bool dev_showDevConsoleButton);

    MCNAPI bool $getDevShowDevConsoleButton() const;

    MCNAPI bool $getDevIgnoreUserInput() const;

    MCNAPI bool $getDevDisplayTreatmentPanel() const;

    MCNAPI void $setDevDisplayTreatmentPanel(bool dev_displayTreatmentPanel);

    MCNAPI void $setDevShowMinecraftTCUIReplacement(bool dev_showMinecraftTCUIReplacement);

    MCNAPI bool $getDevShowMinecraftTCUIReplacement() const;

    MCNAPI bool $getDevCreateRealmWithoutPurchase() const;

    MCNAPI bool $getDevDisableConnectedStoragePush() const;

    MCNAPI bool $getDevDisableConnectedStoragePull() const;

    MCNAPI void $setDevFindMobs(bool dev_findMobs);

    MCNAPI bool $getDevFindMobs() const;

    MCNAPI void $setDevRenderBoundingBoxes(bool dev_renderBoundingBoxes);

    MCNAPI bool $getDevRenderBoundingBoxes() const;

    MCNAPI void $setDevRenderPaths(bool dev_renderPaths);

    MCNAPI bool $getDevRenderPaths() const;

    MCNAPI void $setDevRenderMobInfoState(bool dev_renderMobInfoState);

    MCNAPI bool $getDevRenderMobInfoState() const;

    MCNAPI void $setDevRenderGoalState(bool dev_renderGoalState);

    MCNAPI bool $getDevRenderGoalState() const;

    MCNAPI void $setDevRenderSchedulerInfo(bool dev_renderSchedulerState);

    MCNAPI bool $getDevRenderSchedulerInfo() const;

    MCNAPI void $setDevRenderCoordinateSystems(bool dev_renderCoords);

    MCNAPI bool $getDevRenderCoordinateSystems() const;

    MCNAPI bool $getDevResetClientId() const;

    MCNAPI void $setDevLogFlushImmediate(bool dev_FlushLogOnWrite);

    MCNAPI bool $getDevLogFlushImmediate() const;

    MCNAPI void $setDevLogTimestamp(bool dev_timestamp);

    MCNAPI bool $getDevLogTimestamp() const;

    MCNAPI void $setDevLogTrace(bool dev_trace);

    MCNAPI bool $getDevLogTrace() const;

    MCNAPI void $setDevLogArea(bool dev_logArea);

    MCNAPI bool $getDevLogArea() const;

    MCNAPI void $setDevLogPriority(bool dev_logPriority);

    MCNAPI bool $getDevLogPriority() const;

    MCNAPI void $setDevLogThread(bool dev_logThread);

    MCNAPI bool $getDevLogThread() const;

    MCNAPI void $setDevLogAppend(bool dev_append);

    MCNAPI bool $getDevLogAppend() const;

    MCNAPI void $setDevLogProcessId(bool enable);

    MCNAPI bool $getDevLogProcessId() const;

    MCNAPI void $setDevLogThreadId(bool enable);

    MCNAPI bool $getDevLogThreadId() const;

    MCNAPI void $setDevLogMessageId(bool enable);

    MCNAPI bool $getDevLogMessageId() const;

    MCNAPI void $setDevLogSilentLogging(bool silent);

    MCNAPI bool $getDevLogSilentLogging() const;

    MCNAPI void $setDevLogPriorityFilter(::std::string const& devFilter);

    MCNAPI ::std::string const& $getDevLogPriorityFilter() const;

    MCNAPI void $setDevLogAreaFilter(::std::string const& devFilter);

    MCNAPI ::std::string const& $getDevLogAreaFilter() const;

    MCNAPI void $setDevGameEventRetentionTicks(ushort retentionTicks);

    MCNAPI ushort $getDevGameEventRetentionTicks() const;

    MCNAPI void $setDevDeepDarkDebugRender(bool render);

    MCNAPI bool $getDevDeepDarkDebugRender() const;

    MCNAPI bool $isLogCategoryEnabled(::BedrockLog::LogCategory category) const;

    MCNAPI bool $getDevEnableProfilerOutput();

    MCNAPI bool $getDevAddUsersSilently() const;

    MCNAPI int $getDevBenchmarkModeTime();

    MCNAPI bool $getDevDisableClientBlobCache() const;

    MCNAPI bool $getDevClientBlobCacheOnLocalServer() const;

    MCNAPI void $setLogFlushDelay(int delay_time);

    MCNAPI int $getLogFlushDelay();

    MCNAPI int $getAutomationParallelSlices() const;

    MCNAPI int $getAutomationParallelCurrentSlice() const;

    MCNAPI bool $getIsAutomationRun() const;

    MCNAPI bool $getShouldQuitAppAfterTesting() const;

    MCNAPI bool $shouldUploadTestArtifacts() const;

    MCNAPI bool $hasAutomationTestRunTimedOut() const;

    MCNAPI bool $hasAutomationTestRunReachedCrashLimit() const;

    MCNAPI bool $shouldAppendDebugLogTimestamp() const;

    MCNAPI ::std::string $getAutomationServerIp() const;

    MCNAPI ::std::string $getAutomationServerPort() const;

    MCNAPI ::std::string $getAutomationArtifactUploadSas() const;

    MCNAPI ::std::string $getAutomationArtifactUploadUrl() const;

    MCNAPI ::std::string $getAutomationRelativeBlobpath() const;

    MCNAPI ::std::string $getAutomationFunctionalTestTags() const;

    MCNAPI ::std::string $getAutomationServerTestTags() const;

    MCNAPI ::std::string $getAutomationUnitTestTags() const;

    MCNAPI ::std::string $getAutomationFunctionalBrokenTestTags() const;

    MCNAPI ::std::string $getAutomationServerBrokenTestTags() const;

    MCNAPI ::std::string $getAutomationUnitBrokenTestTags() const;

    MCNAPI ::std::string $getAutomationTestBuildID() const;

    MCNAPI ::std::string $getAutomationUploadToken() const;

    MCNAPI ::std::string $getAutomationEnabledFeatures() const;

    MCNAPI ::std::string $getAutomationEnabledExperiments() const;

    MCNAPI bool $getAutomationShouldGroupServerTests() const;

    MCNAPI bool $getAutomationUnrandomTestsEnabled() const;

    MCNAPI bool $getAutomationRunEntireServerTestGroup() const;

    MCNAPI bool $getAutomationRunServerTestAfterEachTest() const;

    MCNAPI ::std::string const& $getTestBranchName() const;

    MCNAPI bool $getFunctionalTestBlockInput() const;

    MCNAPI bool $shouldBlockUserInput() const;

    MCNAPI bool $hasSetSafeZone() const;

    MCNAPI bool $getAutomationDisableTreatmentPackDownloads() const;

    MCNAPI bool $getAutomationProfilerCaptureEnabled() const;

    MCNAPI bool $getAutomationProfilerFlipEnabled() const;

    MCNAPI int $getAutomationRepeatCount() const;

    MCNAPI int $getAutomationSoakTestRunDurationMinutes() const;

    MCNAPI bool $getAutomationRerunFailuresOnly() const;

    MCNAPI int $getAutomationUnitPerTestcaseTimeout() const;

    MCNAPI int $getAutomationFunctionalPerTestcaseTimeout() const;

    MCNAPI int $getAutomationServerPerTestcaseTimeout() const;

    MCNAPI void $setAutomationFunctionalBrokenTestTags(::std::string const& tags);

    MCNAPI void $setAutomationUnitBrokenTestTags(::std::string const& tags);

    MCNAPI void $setAutomationUploadToken(::std::string const& token);

    MCNAPI bool $getDevAchievmentsAlwaysEnabled();

    MCNAPI bool $shouldServerTestsLogWorlds() const;

    MCNAPI bool $shouldServerTestsAssertOnLevelDiff() const;

    MCNAPI ::std::string $getAutomationMultiplayerSessionName() const;

    MCNAPI int $getAutomationMultiplayerDeviceIndex() const;

    MCNAPI ::std::vector<::std::string> $getAutomationMultiplayerUserAccounts() const;

    MCNAPI int $getDevRenderAttachPos() const;

    MCNAPI void $setMultiPlayerGame(bool multiPlayerGame);

    MCNAPI bool $getMultiPlayerGame() const;

    MCNAPI void $setXboxLiveVisible(bool xboxLiveVisible);

    MCNAPI bool $wasLoggedInLastSession();

    MCNAPI void $setHasEverLoggedIntoXbl(bool hasEverLoggedIntoXbl);

    MCNAPI bool $getHasEverLoggedIntoXbl() const;

    MCNAPI void $setHasShownFirstLaunchWelcomeModal(bool hasShownModal);

    MCNAPI bool $getHasShownFirstLaunchWelcomeModal() const;

    MCNAPI void $setHasShownFirstSocialWelcomeModal(bool hasShownModal);

    MCNAPI bool $getHasShownFirstSocialWelcomeModal() const;

    MCNAPI void $setDoNotShowFriendsListFTUE(bool hasShownModal);

    MCNAPI bool $getDoNotShowFriendsListFTUE() const;

    MCNAPI void $setHasShownBannedModalAtStartup(bool hasShownModal);

    MCNAPI bool $getHasShownBannedModalAtStartup() const;

    MCNAPI void $setAcknowledgedAutoSave(bool acknowledgedAutoSave);

    MCNAPI bool $getAcknowledgedAutoSave() const;

    MCNAPI void $setRealmsInviteShowFriendsOption(bool showFriendInvitesOnly);

    MCNAPI bool $getRealmsInviteShowFriendsOption() const;

    MCNAPI void $setNumberOfOwnedRealms(int numberOfOwnedRealms);

    MCNAPI int $getNumberOfOwnedRealms() const;

    MCNAPI void $setNumberOfFriendsRealms(int numberOfOwnedRealms);

    MCNAPI int $getNumberOfFriendsRealms() const;

    MCNAPI void $setCreateRealmUpsellCount(int value);

    MCNAPI int $getCreateRealmUpsellCount() const;

    MCNAPI void $setSaveAndQuitCount(int value);

    MCNAPI int $getSaveAndQuitCount() const;

    MCNAPI void $setIsRatingsPromptShown(bool value);

    MCNAPI bool $getIsRatingsPromptShown() const;

    MCNAPI void $setShowRealmsTrialButtonFromPlayScreen(bool value);

    MCNAPI bool $getShowRealmsTrialButtonFromPlayScreen() const;

    MCNAPI ::AutoUpdateMode $getAutoUpdateMode() const;

    MCNAPI void $setCanUseCellularData(bool useNetworkData);

    MCNAPI bool $getCanUseCellularData() const;

    MCNAPI int $getPlayerViewPerspective() const;

    MCNAPI void $setRequireWebsocketEncryption(bool require);

    MCNAPI bool $getRequireWebsocketEncryption() const;

    MCNAPI void $setWebsocketsEnabled(bool enabled);

    MCNAPI bool $getWebsocketsEnabled() const;

    MCNAPI void $setUseIPv6Only(bool useIPv6Only);

    MCNAPI bool $getUseIPv6Only() const;

    MCNAPI void $setUseRetailXboxSandbox(bool const retail);

    MCNAPI bool $getUseRetailXboxSandbox() const;

    MCNAPI void $setXboxLiveSandbox(::XboxSandboxEnvironment environment);

    MCNAPI ::std::string const& $getXboxLiveSandbox() const;

    MCNAPI void $setRealmsEnvironment(::RealmsEnvironment realmsEnvironment);

    MCNAPI ::RealmsEnvironment $getRealmsEnvironment() const;

    MCNAPI void $setRealmsEndpoint(::std::string const& realmsEndpoint);

    MCNAPI ::std::string const& $getRealmsEndpoint() const;

    MCNAPI ::std::string const& $getRealmsV2Endpoint() const;

    MCNAPI void $setRealmsEndpointPayment(::std::string const& realmsEndpointPayment);

    MCNAPI ::std::string const& $getRealmsEndpointPayment() const;

    MCNAPI void $setRealmsRelyingParty(::std::string const& realmsRelyingParty);

    MCNAPI ::std::string const& $getRealmsRelyingParty() const;

    MCNAPI void $setRealmsRelyingPartyPayment(::std::string const& realmsRelyingPartyPayment);

    MCNAPI ::std::string const& $getRealmsRelyingPartyPayment() const;

    MCNAPI void $setStoreHasPurchasedCoins(bool value);

    MCNAPI bool $getStoreHasPurchasedCoins() const;

    MCNAPI void $setShowUnfulfilledPurchaseModal(bool value);

    MCNAPI bool $getShowUnfulfilledPurchaseModal() const;

    MCNAPI void $setSwitchCoinDebug(bool value);

    MCNAPI bool $getSwitchCoinDebug() const;

    MCNAPI void $setEduHasLoggedIn(bool hasEduLoggedIn);

    MCNAPI bool $getEduHasLoggedIn() const;

    MCNAPI void $setShownPlatformNetworkConnectConfirmation(bool value);

    MCNAPI bool $getShownPlatformNetworkConnectConfirmation() const;

    MCNAPI void $setShownPlatformPremiumUpsell(bool value);

    MCNAPI bool $getShownPlatformPremiumUpsell() const;

    MCNAPI void $setAppLaunchedCount(int value);

    MCNAPI int $getAppLaunchedCount() const;

    MCNAPI void $setEcoMode(bool value);

    MCNAPI bool $getEcoMode() const;

    MCNAPI void $setEduCloudBackupToggle(bool cloudBackup);

    MCNAPI bool $getEduCloudBackupToggle() const;

    MCNAPI void $setUseFontOverrides(bool value);

    MCNAPI bool $getUseFontOverrides() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
