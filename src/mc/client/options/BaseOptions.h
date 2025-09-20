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
#include "mc/options/UIProfile.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class Option;
// clang-format on

class BaseOptions : public ::IOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 6128> mUnke9a92b;
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
    // vIndex: 0
    virtual ~BaseOptions() /*override*/ = default;

    // vIndex: 11
    virtual bool isValidOption(::OptionID) const /*override*/;

    // vIndex: 13
    virtual ::gsl::not_null<::Option*> get(::OptionID) /*override*/;

    // vIndex: 12
    virtual ::gsl::not_null<::Option const*> get(::OptionID) const /*override*/;

    // vIndex: 15
    virtual ::std::optional<::Option*> getIfValid(::OptionID) /*override*/;

    // vIndex: 14
    virtual ::std::optional<::Option const*> getIfValid(::OptionID) const /*override*/;

    // vIndex: 24
    virtual ::std::array<::std::unique_ptr<::Option>, 766> const& getAllRegisteredOptions() /*override*/;

    // vIndex: 25
    virtual void forEachOption(::std::function<void(::Option*)>) /*override*/;

    // vIndex: 26
    virtual bool consumeDevOptionsDirty() /*override*/;

    // vIndex: 27
    virtual void dumpOptionsToLogFile() const /*override*/;

    // vIndex: 1
    virtual ::Option& _registerOption(::std::unique_ptr<::Option>) /*override*/;

    // vIndex: 28
    virtual void updateInputMode(::InputMode) /*override*/;

    // vIndex: 29
    virtual void setMainVolume(float) /*override*/;

    // vIndex: 30
    virtual float getMainVolume() const /*override*/;

    // vIndex: 31
    virtual void setMusicVolume(float) /*override*/;

    // vIndex: 32
    virtual float getMusicVolume() const /*override*/;

    // vIndex: 33
    virtual void setSoundVolume(float) /*override*/;

    // vIndex: 34
    virtual float getSoundVolume() const /*override*/;

    // vIndex: 35
    virtual void setTTSVolume(float) /*override*/;

    // vIndex: 36
    virtual float getTTSVolume() const /*override*/;

    // vIndex: 37
    virtual float getChatMessageDuration() const /*override*/;

    // vIndex: 38
    virtual float getToastNotificationDuration() const /*override*/;

    // vIndex: 39
    virtual void setSensitivity(float, ::InputMode) /*override*/;

    // vIndex: 40
    virtual float getSensitivity(::InputMode) const /*override*/;

    // vIndex: 41
    virtual void setSpyglassDamping(float, ::InputMode) /*override*/;

    // vIndex: 42
    virtual float getSpyglassDamping(::InputMode) const /*override*/;

    // vIndex: 43
    virtual void setDwellBeforeDrag(float) /*override*/;

    // vIndex: 44
    virtual float getDwellBeforeDrag() const /*override*/;

    // vIndex: 45
    virtual void setStackSplittingTrigger(float) /*override*/;

    // vIndex: 46
    virtual float getStackSplittingTrigger() const /*override*/;

    // vIndex: 47
    virtual float getGameSensitivity(::InputMode) const /*override*/;

    // vIndex: 50
    virtual bool getInvertYMouse(::InputMode) const /*override*/;

    // vIndex: 55
    virtual float getParticleViewDistance() const /*override*/;

    // vIndex: 56
    virtual bool getBobView() const /*override*/;

    // vIndex: 57
    virtual bool getCameraShake() const /*override*/;

    // vIndex: 58
    virtual bool getStereoRendering() const /*override*/;

    // vIndex: 59
    virtual void setResetPlayerAlignment(bool) /*override*/;

    // vIndex: 60
    virtual bool getResetPlayerAlignment() const /*override*/;

    // vIndex: 61
    virtual ::GraphicsMode getGraphicsMode() const /*override*/;

    // vIndex: 62
    virtual bool getTransparentLeaves() const /*override*/;

    // vIndex: 63
    virtual bool getFancyBubbles() const /*override*/;

    // vIndex: 64
    virtual bool getSmoothLighting() const /*override*/;

    // vIndex: 65
    virtual bool getGuiAccessibilityScaling() const /*override*/;

    // vIndex: 70
    virtual bool getUseMouseForDigging() const /*override*/;

    // vIndex: 71
    virtual bool isLeftHanded() const /*override*/;

    // vIndex: 72
    virtual bool isHotbarOnlyTouch() const /*override*/;

    // vIndex: 73
    virtual bool getDestroyVibration(::InputMode) const /*override*/;

    // vIndex: 74
    virtual bool getSplitVibration(::InputMode) const /*override*/;

    // vIndex: 75
    virtual bool getAutoJump(::InputMode) const /*override*/;

    // vIndex: 76
    virtual void setFullscreen(bool) /*override*/;

    // vIndex: 77
    virtual bool getFullscreen() const /*override*/;

    // vIndex: 78
    virtual void toggleFullscreen() /*override*/;

    // vIndex: 85
    virtual void setDifficulty(int) /*override*/;

    // vIndex: 86
    virtual void setHideGUI(bool) /*override*/;

    // vIndex: 87
    virtual bool getHideHud() const /*override*/;

    // vIndex: 88
    virtual bool getHideHand() const /*override*/;

    // vIndex: 89
    virtual void setHideToolTips(bool) /*override*/;

    // vIndex: 90
    virtual bool getHideToolTips() const /*override*/;

    // vIndex: 91
    virtual void setHidePaperDoll(bool) /*override*/;

    // vIndex: 92
    virtual bool getHidePaperDoll() const /*override*/;

    // vIndex: 93
    virtual void setIngamePlayerNames(bool) /*override*/;

    // vIndex: 94
    virtual bool getIngamePlayerNames() const /*override*/;

    // vIndex: 95
    virtual void setSplitscreenIngamePlayerNames(bool) /*override*/;

    // vIndex: 96
    virtual bool getSplitscreenIngamePlayerNames() const /*override*/;

    // vIndex: 97
    virtual void setInterfaceOpacity(float) /*override*/;

    // vIndex: 98
    virtual float getInterfaceOpacity() const /*override*/;

    // vIndex: 99
    virtual void setSplitscreenInterfaceOpacity(float) /*override*/;

    // vIndex: 100
    virtual float getSplitscreenInterfaceOpacity() const /*override*/;

    // vIndex: 101
    virtual void setShowAutoSaveIcon(bool) /*override*/;

    // vIndex: 102
    virtual bool getShowAutoSaveIcon() const /*override*/;

    // vIndex: 103
    virtual void setSplitscreenDirection(int) /*override*/;

    // vIndex: 104
    virtual ::SplitScreenDirection getSplitscreenDirection() const /*override*/;

    // vIndex: 105
    virtual void setHideScreens(bool) /*override*/;

    // vIndex: 106
    virtual bool getHideScreens() const /*override*/;

    // vIndex: 107
    virtual void setHideItemInHand(bool) /*override*/;

    // vIndex: 108
    virtual bool getHideItemInHand() const /*override*/;

    // vIndex: 109
    virtual bool getScreenAnimations() const /*override*/;

    // vIndex: 112
    virtual ::UIProfile getUIProfile() const /*override*/;

    // vIndex: 113
    virtual void setForceUseUnsortedPolys(bool) /*override*/;

    // vIndex: 114
    virtual bool getForceUseUnsortedPolys() const /*override*/;

    // vIndex: 115
    virtual void setRenderDebug(::DebugHudOptions) /*override*/;

    // vIndex: 116
    virtual ::DebugHudOptions getRenderDebug() const /*override*/;

    // vIndex: 117
    virtual bool getRemoteImguiEnabled() const /*override*/;

    // vIndex: 118
    virtual void setRemoteImguiEnabled(bool) /*override*/;

    // vIndex: 119
    virtual float getGamma() const /*override*/;

    // vIndex: 120
    virtual void setMSAA(int) /*override*/;

    // vIndex: 121
    virtual void setTexelAA(bool) /*override*/;

    // vIndex: 122
    virtual void setFixedCamera(bool) /*override*/;

    // vIndex: 123
    virtual bool getFixedCamera() const /*override*/;

    // vIndex: 124
    virtual void setSkinId(::std::string const&) /*override*/;

    // vIndex: 125
    virtual ::std::string const& getSkinId() const /*override*/;

    // vIndex: 126
    virtual void setLastCustomSkinId(::std::string const&) /*override*/;

    // vIndex: 127
    virtual ::std::string const& getLastCustomSkinId() const /*override*/;

    // vIndex: 130
    virtual bool getFovToggle() const /*override*/;

    // vIndex: 131
    virtual void setServerVisible(bool) /*override*/;

    // vIndex: 132
    virtual bool getServerVisible() const /*override*/;

    // vIndex: 133
    virtual void setSplitControls(bool) /*override*/;

    // vIndex: 134
    virtual bool getSplitControls() const /*override*/;

    // vIndex: 135
    virtual bool getSwapJumpAndSneak() const /*override*/;

    // vIndex: 136
    virtual bool getFancySkies() const /*override*/;

    // vIndex: 137
    virtual void setRenderClouds(bool) /*override*/;

    // vIndex: 138
    virtual bool getRenderClouds() const /*override*/;

    // vIndex: 139
    virtual bool getDevAutoLoadLevel() const /*override*/;

    // vIndex: 140
    virtual bool getDevAssertionsDebugBreak() const /*override*/;

    // vIndex: 141
    virtual bool getDevAssertionsShowDialog() const /*override*/;

    // vIndex: 143
    virtual bool getDevShowDisplayLoggedError() const /*override*/;

    // vIndex: 142
    virtual bool getDevShowDisplayLoggedError(::DisplayLoggedErrorType) const /*override*/;

    // vIndex: 144
    virtual void setDevShowDevConsoleButton(bool) /*override*/;

    // vIndex: 145
    virtual bool getDevShowDevConsoleButton() const /*override*/;

    // vIndex: 146
    virtual bool getDevIgnoreUserInput() const /*override*/;

    // vIndex: 147
    virtual bool getDevDisplayTreatmentPanel() const /*override*/;

    // vIndex: 148
    virtual void setDevDisplayTreatmentPanel(bool) /*override*/;

    // vIndex: 149
    virtual void setDevShowMinecraftTCUIReplacement(bool) /*override*/;

    // vIndex: 150
    virtual bool getDevShowMinecraftTCUIReplacement() const /*override*/;

    // vIndex: 151
    virtual bool getDevCreateRealmWithoutPurchase() const /*override*/;

    // vIndex: 152
    virtual bool getDevDisableConnectedStoragePush() const /*override*/;

    // vIndex: 153
    virtual bool getDevDisableConnectedStoragePull() const /*override*/;

    // vIndex: 154
    virtual void setDevFindMobs(bool) /*override*/;

    // vIndex: 155
    virtual bool getDevFindMobs() const /*override*/;

    // vIndex: 156
    virtual void setDevRenderBoundingBoxes(bool) /*override*/;

    // vIndex: 157
    virtual bool getDevRenderBoundingBoxes() const /*override*/;

    // vIndex: 158
    virtual void setDevRenderPaths(bool) /*override*/;

    // vIndex: 159
    virtual bool getDevRenderPaths() const /*override*/;

    // vIndex: 160
    virtual void setDevRenderMobInfoState(bool) /*override*/;

    // vIndex: 161
    virtual bool getDevRenderMobInfoState() const /*override*/;

    // vIndex: 162
    virtual void setDevRenderGoalState(bool) /*override*/;

    // vIndex: 163
    virtual bool getDevRenderGoalState() const /*override*/;

    // vIndex: 164
    virtual void setDevRenderSchedulerInfo(bool) /*override*/;

    // vIndex: 165
    virtual bool getDevRenderSchedulerInfo() const /*override*/;

    // vIndex: 166
    virtual void setDevRenderCoordinateSystems(bool) /*override*/;

    // vIndex: 167
    virtual bool getDevRenderCoordinateSystems() const /*override*/;

    // vIndex: 168
    virtual bool getDevResetClientId() const /*override*/;

    // vIndex: 169
    virtual void setDevLogFlushImmediate(bool) /*override*/;

    // vIndex: 170
    virtual bool getDevLogFlushImmediate() const /*override*/;

    // vIndex: 171
    virtual void setDevLogTimestamp(bool) /*override*/;

    // vIndex: 172
    virtual bool getDevLogTimestamp() const /*override*/;

    // vIndex: 173
    virtual void setDevLogTrace(bool) /*override*/;

    // vIndex: 174
    virtual bool getDevLogTrace() const /*override*/;

    // vIndex: 175
    virtual void setDevLogArea(bool) /*override*/;

    // vIndex: 176
    virtual bool getDevLogArea() const /*override*/;

    // vIndex: 177
    virtual void setDevLogPriority(bool) /*override*/;

    // vIndex: 178
    virtual bool getDevLogPriority() const /*override*/;

    // vIndex: 179
    virtual void setDevLogThread(bool) /*override*/;

    // vIndex: 180
    virtual bool getDevLogThread() const /*override*/;

    // vIndex: 181
    virtual void setDevLogAppend(bool) /*override*/;

    // vIndex: 182
    virtual bool getDevLogAppend() const /*override*/;

    // vIndex: 183
    virtual void setDevLogProcessId(bool) /*override*/;

    // vIndex: 184
    virtual bool getDevLogProcessId() const /*override*/;

    // vIndex: 185
    virtual void setDevLogThreadId(bool) /*override*/;

    // vIndex: 186
    virtual bool getDevLogThreadId() const /*override*/;

    // vIndex: 187
    virtual void setDevLogMessageId(bool) /*override*/;

    // vIndex: 188
    virtual bool getDevLogMessageId() const /*override*/;

    // vIndex: 189
    virtual void setDevLogSilentLogging(bool) /*override*/;

    // vIndex: 190
    virtual bool getDevLogSilentLogging() const /*override*/;

    // vIndex: 191
    virtual void setDevLogPriorityFilter(::std::string const&) /*override*/;

    // vIndex: 192
    virtual ::std::string const& getDevLogPriorityFilter() const /*override*/;

    // vIndex: 193
    virtual void setDevLogAreaFilter(::std::string const&) /*override*/;

    // vIndex: 194
    virtual ::std::string const& getDevLogAreaFilter() const /*override*/;

    // vIndex: 195
    virtual void setDevGameEventRetentionTicks(ushort) /*override*/;

    // vIndex: 196
    virtual ushort getDevGameEventRetentionTicks() const /*override*/;

    // vIndex: 197
    virtual void setDevDeepDarkDebugRender(bool) /*override*/;

    // vIndex: 198
    virtual bool getDevDeepDarkDebugRender() const /*override*/;

    // vIndex: 199
    virtual bool isLogCategoryEnabled(::BedrockLog::LogCategory) const /*override*/;

    // vIndex: 200
    virtual bool getDevEnableProfilerOutput() /*override*/;

    // vIndex: 201
    virtual bool getDevAddUsersSilently() const /*override*/;

    // vIndex: 202
    virtual int getDevBenchmarkModeTime() /*override*/;

    // vIndex: 203
    virtual bool getDevDisableClientBlobCache() const /*override*/;

    // vIndex: 204
    virtual bool getDevClientBlobCacheOnLocalServer() const /*override*/;

    // vIndex: 205
    virtual void setLogFlushDelay(int) /*override*/;

    // vIndex: 206
    virtual int getLogFlushDelay() /*override*/;

    // vIndex: 207
    virtual int getAutomationParallelSlices() const /*override*/;

    // vIndex: 208
    virtual int getAutomationParallelCurrentSlice() const /*override*/;

    // vIndex: 209
    virtual bool getIsAutomationRun() const /*override*/;

    // vIndex: 210
    virtual bool getShouldQuitAppAfterTesting() const /*override*/;

    // vIndex: 211
    virtual bool shouldUploadTestArtifacts() const /*override*/;

    // vIndex: 212
    virtual bool hasAutomationTestRunTimedOut() const /*override*/;

    // vIndex: 213
    virtual bool hasAutomationTestRunReachedCrashLimit() const /*override*/;

    // vIndex: 214
    virtual bool shouldAppendDebugLogTimestamp() const /*override*/;

    // vIndex: 215
    virtual ::std::string getAutomationServerIp() const /*override*/;

    // vIndex: 216
    virtual ::std::string getAutomationServerPort() const /*override*/;

    // vIndex: 217
    virtual ::std::string getAutomationArtifactUploadSas() const /*override*/;

    // vIndex: 218
    virtual ::std::string getAutomationArtifactUploadUrl() const /*override*/;

    // vIndex: 219
    virtual ::std::string getAutomationRelativeBlobpath() const /*override*/;

    // vIndex: 220
    virtual ::std::string getAutomationFunctionalTestTags() const /*override*/;

    // vIndex: 221
    virtual ::std::string getAutomationServerTestTags() const /*override*/;

    // vIndex: 222
    virtual ::std::string getAutomationUnitTestTags() const /*override*/;

    // vIndex: 223
    virtual ::std::string getAutomationFunctionalBrokenTestTags() const /*override*/;

    // vIndex: 224
    virtual ::std::string getAutomationServerBrokenTestTags() const /*override*/;

    // vIndex: 225
    virtual ::std::string getAutomationUnitBrokenTestTags() const /*override*/;

    // vIndex: 226
    virtual ::std::string getAutomationTestBuildID() const /*override*/;

    // vIndex: 227
    virtual ::std::string getAutomationUploadToken() const /*override*/;

    // vIndex: 228
    virtual ::std::string getAutomationEnabledFeatures() const /*override*/;

    // vIndex: 229
    virtual ::std::string getAutomationEnabledExperiments() const /*override*/;

    // vIndex: 230
    virtual bool getAutomationShouldGroupServerTests() const /*override*/;

    // vIndex: 231
    virtual bool getAutomationUnrandomTestsEnabled() const /*override*/;

    // vIndex: 232
    virtual bool getAutomationRunEntireServerTestGroup() const /*override*/;

    // vIndex: 233
    virtual bool getAutomationRunServerTestAfterEachTest() const /*override*/;

    // vIndex: 234
    virtual ::std::string const& getTestBranchName() const /*override*/;

    // vIndex: 235
    virtual bool getFunctionalTestBlockInput() const /*override*/;

    // vIndex: 236
    virtual bool shouldBlockUserInput() const /*override*/;

    // vIndex: 237
    virtual bool hasSetSafeZone() const /*override*/;

    // vIndex: 238
    virtual bool getAutomationDisableTreatmentPackDownloads() const /*override*/;

    // vIndex: 239
    virtual bool getAutomationProfilerCaptureEnabled() const /*override*/;

    // vIndex: 240
    virtual bool getAutomationProfilerFlipEnabled() const /*override*/;

    // vIndex: 241
    virtual int getAutomationRepeatCount() const /*override*/;

    // vIndex: 242
    virtual int getAutomationSoakTestRunDurationMinutes() const /*override*/;

    // vIndex: 243
    virtual bool getAutomationRerunFailuresOnly() const /*override*/;

    // vIndex: 244
    virtual int getAutomationUnitPerTestcaseTimeout() const /*override*/;

    // vIndex: 245
    virtual int getAutomationFunctionalPerTestcaseTimeout() const /*override*/;

    // vIndex: 246
    virtual int getAutomationServerPerTestcaseTimeout() const /*override*/;

    // vIndex: 247
    virtual void setAutomationFunctionalBrokenTestTags(::std::string const&) /*override*/;

    // vIndex: 248
    virtual void setAutomationUnitBrokenTestTags(::std::string const&) /*override*/;

    // vIndex: 249
    virtual void setAutomationUploadToken(::std::string const&) /*override*/;

    // vIndex: 250
    virtual bool getDevAchievmentsAlwaysEnabled() /*override*/;

    // vIndex: 251
    virtual bool shouldServerTestsLogWorlds() const /*override*/;

    // vIndex: 252
    virtual bool shouldServerTestsAssertOnLevelDiff() const /*override*/;

    // vIndex: 253
    virtual ::std::string getAutomationMultiplayerSessionName() const /*override*/;

    // vIndex: 254
    virtual int getAutomationMultiplayerDeviceIndex() const /*override*/;

    // vIndex: 255
    virtual ::std::vector<::std::string> getAutomationMultiplayerUserAccounts() const /*override*/;

    // vIndex: 256
    virtual ::DevConnectionQuality getDevConnectionQuality() const /*override*/;

    // vIndex: 257
    virtual int getDevRenderAttachPos() const /*override*/;

    // vIndex: 258
    virtual void setMultiPlayerGame(bool) /*override*/;

    // vIndex: 259
    virtual bool getMultiPlayerGame() const /*override*/;

    // vIndex: 260
    virtual void setXboxLiveVisible(bool) /*override*/;

    // vIndex: 261
    virtual bool wasLoggedInLastSession() /*override*/;

    // vIndex: 262
    virtual void setHasEverLoggedIntoXbl(bool) /*override*/;

    // vIndex: 263
    virtual bool getHasEverLoggedIntoXbl() const /*override*/;

    // vIndex: 264
    virtual void setHasShownFirstLaunchWelcomeModal(bool) /*override*/;

    // vIndex: 265
    virtual bool getHasShownFirstLaunchWelcomeModal() const /*override*/;

    // vIndex: 266
    virtual void setAcknowledgedAutoSave(bool) /*override*/;

    // vIndex: 267
    virtual bool getAcknowledgedAutoSave() const /*override*/;

    // vIndex: 268
    virtual void setRealmsInviteShowFriendsOption(bool) /*override*/;

    // vIndex: 269
    virtual bool getRealmsInviteShowFriendsOption() const /*override*/;

    // vIndex: 270
    virtual void setNumberOfOwnedRealms(int) /*override*/;

    // vIndex: 271
    virtual int getNumberOfOwnedRealms() const /*override*/;

    // vIndex: 272
    virtual void setNumberOfFriendsRealms(int) /*override*/;

    // vIndex: 273
    virtual int getNumberOfFriendsRealms() const /*override*/;

    // vIndex: 274
    virtual void setCreateRealmUpsellCount(int) /*override*/;

    // vIndex: 275
    virtual int getCreateRealmUpsellCount() const /*override*/;

    // vIndex: 276
    virtual void setSaveAndQuitCount(int) /*override*/;

    // vIndex: 277
    virtual int getSaveAndQuitCount() const /*override*/;

    // vIndex: 278
    virtual void setIsRatingsPromptShown(bool) /*override*/;

    // vIndex: 279
    virtual bool getIsRatingsPromptShown() const /*override*/;

    // vIndex: 280
    virtual void setShowRealmsTrialButtonFromPlayScreen(bool) /*override*/;

    // vIndex: 281
    virtual bool getShowRealmsTrialButtonFromPlayScreen() const /*override*/;

    // vIndex: 282
    virtual ::AutoUpdateMode getAutoUpdateMode() const /*override*/;

    // vIndex: 283
    virtual void setCanUseCellularData(bool) /*override*/;

    // vIndex: 284
    virtual bool getCanUseCellularData() const /*override*/;

    // vIndex: 111
    virtual int getPlayerViewPerspective() const /*override*/;

    // vIndex: 285
    virtual void setRequireWebsocketEncryption(bool) /*override*/;

    // vIndex: 286
    virtual bool getRequireWebsocketEncryption() const /*override*/;

    // vIndex: 287
    virtual void setWebsocketsEnabled(bool) /*override*/;

    // vIndex: 288
    virtual bool getWebsocketsEnabled() const /*override*/;

    // vIndex: 289
    virtual void setUseIPv6Only(bool) /*override*/;

    // vIndex: 290
    virtual bool getUseIPv6Only() const /*override*/;

    // vIndex: 291
    virtual void setUseRetailXboxSandbox(bool const) /*override*/;

    // vIndex: 292
    virtual bool getUseRetailXboxSandbox() const /*override*/;

    // vIndex: 293
    virtual void setXboxLiveSandbox(::XboxSandboxEnvironment) /*override*/;

    // vIndex: 294
    virtual ::std::string const& getXboxLiveSandbox() const /*override*/;

    // vIndex: 295
    virtual void setRealmsEnvironment(::RealmsEnvironment) /*override*/;

    // vIndex: 296
    virtual ::RealmsEnvironment getRealmsEnvironment() const /*override*/;

    // vIndex: 297
    virtual void setRealmsEndpoint(::std::string const&) /*override*/;

    // vIndex: 298
    virtual ::std::string const& getRealmsEndpoint() const /*override*/;

    // vIndex: 299
    virtual ::std::string const& getRealmsV2Endpoint() const /*override*/;

    // vIndex: 300
    virtual void setRealmsEndpointPayment(::std::string const&) /*override*/;

    // vIndex: 301
    virtual ::std::string const& getRealmsEndpointPayment() const /*override*/;

    // vIndex: 302
    virtual void setRealmsRelyingParty(::std::string const&) /*override*/;

    // vIndex: 303
    virtual ::std::string const& getRealmsRelyingParty() const /*override*/;

    // vIndex: 304
    virtual void setRealmsRelyingPartyPayment(::std::string const&) /*override*/;

    // vIndex: 305
    virtual ::std::string const& getRealmsRelyingPartyPayment() const /*override*/;

    // vIndex: 306
    virtual void setStoreHasPurchasedCoins(bool) /*override*/;

    // vIndex: 307
    virtual bool getStoreHasPurchasedCoins() const /*override*/;

    // vIndex: 308
    virtual void setShowUnfulfilledPurchaseModal(bool) /*override*/;

    // vIndex: 309
    virtual bool getShowUnfulfilledPurchaseModal() const /*override*/;

    // vIndex: 310
    virtual void setSwitchCoinDebug(bool) /*override*/;

    // vIndex: 311
    virtual bool getSwitchCoinDebug() const /*override*/;

    // vIndex: 317
    virtual void setEduHasLoggedIn(bool) /*override*/;

    // vIndex: 318
    virtual bool getEduHasLoggedIn() const /*override*/;

    // vIndex: 319
    virtual void setShownPlatformNetworkConnectConfirmation(bool) /*override*/;

    // vIndex: 320
    virtual bool getShownPlatformNetworkConnectConfirmation() const /*override*/;

    // vIndex: 321
    virtual void setShownPlatformPremiumUpsell(bool) /*override*/;

    // vIndex: 322
    virtual bool getShownPlatformPremiumUpsell() const /*override*/;

    // vIndex: 323
    virtual void setAppLaunchedCount(int) /*override*/;

    // vIndex: 324
    virtual int getAppLaunchedCount() const /*override*/;

    // vIndex: 325
    virtual void setEcoMode(bool) /*override*/;

    // vIndex: 326
    virtual bool getEcoMode() const /*override*/;

    // vIndex: 327
    virtual void setEduCloudBackupToggle(bool) /*override*/;

    // vIndex: 328
    virtual bool getEduCloudBackupToggle() const /*override*/;

    // vIndex: 329
    virtual void setUseFontOverrides(bool) /*override*/;

    // vIndex: 330
    virtual bool getUseFontOverrides() const /*override*/;

    // vIndex: 331
    virtual ::NewInteractionModel getEffectiveTouchScheme() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
