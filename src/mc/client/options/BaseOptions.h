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

class BaseOptions : public ::IOptions, public ::std::enable_shared_from_this<::IOptions> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 6160> mUnk4b486b;
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

    // vIndex: 14
    virtual ::std::shared_ptr<::IOptions> sharedFromThis() /*override*/;

    // vIndex: 13
    virtual ::std::shared_ptr<::IOptions const> sharedFromThis() const /*override*/;

    // vIndex: 25
    virtual bool isValidOption(::OptionID) const /*override*/;

    // vIndex: 26
    virtual ::gsl::not_null<::Option*> get(::OptionID) /*override*/;

    // vIndex: 1
    virtual ::gsl::not_null<::Option const*> get(::OptionID) const /*override*/;

    // vIndex: 28
    virtual ::std::optional<::Option*> getIfValid(::OptionID) /*override*/;

    // vIndex: 27
    virtual ::std::optional<::Option const*> getIfValid(::OptionID) const /*override*/;

    // vIndex: 37
    virtual ::std::array<::std::unique_ptr<::Option>, 770> const& getAllRegisteredOptions() /*override*/;

    // vIndex: 38
    virtual void forEachOption(::std::function<void(::Option*)>) /*override*/;

    // vIndex: 39
    virtual bool consumeDevOptionsDirty() /*override*/;

    // vIndex: 40
    virtual void dumpOptionsToLogFile() const /*override*/;

    // vIndex: 15
    virtual ::Option& _registerOption(::std::unique_ptr<::Option>) /*override*/;

    // vIndex: 41
    virtual void updateInputMode(::InputMode) /*override*/;

    // vIndex: 42
    virtual void setMainVolume(float) /*override*/;

    // vIndex: 43
    virtual float getMainVolume() const /*override*/;

    // vIndex: 44
    virtual void setMusicVolume(float) /*override*/;

    // vIndex: 45
    virtual float getMusicVolume() const /*override*/;

    // vIndex: 46
    virtual void setSoundVolume(float) /*override*/;

    // vIndex: 47
    virtual float getSoundVolume() const /*override*/;

    // vIndex: 48
    virtual void setTTSVolume(float) /*override*/;

    // vIndex: 49
    virtual float getTTSVolume() const /*override*/;

    // vIndex: 50
    virtual float getChatMessageDuration() const /*override*/;

    // vIndex: 51
    virtual float getToastNotificationDuration() const /*override*/;

    // vIndex: 52
    virtual void setSensitivity(float, ::InputMode) /*override*/;

    // vIndex: 53
    virtual float getSensitivity(::InputMode) const /*override*/;

    // vIndex: 54
    virtual void setSpyglassDamping(float, ::InputMode) /*override*/;

    // vIndex: 55
    virtual float getSpyglassDamping(::InputMode) const /*override*/;

    // vIndex: 56
    virtual void setDwellBeforeDrag(float) /*override*/;

    // vIndex: 57
    virtual float getDwellBeforeDrag() const /*override*/;

    // vIndex: 58
    virtual void setStackSplittingTrigger(float) /*override*/;

    // vIndex: 59
    virtual float getStackSplittingTrigger() const /*override*/;

    // vIndex: 60
    virtual float getGameSensitivity(::InputMode) const /*override*/;

    // vIndex: 63
    virtual bool getInvertYMouse(::InputMode) const /*override*/;

    // vIndex: 67
    virtual float getParticleViewDistance() const /*override*/;

    // vIndex: 68
    virtual bool getBobView() const /*override*/;

    // vIndex: 69
    virtual bool getCameraShake() const /*override*/;

    // vIndex: 70
    virtual bool getHideEndFlash() const /*override*/;

    // vIndex: 71
    virtual void setResetPlayerAlignment(bool) /*override*/;

    // vIndex: 72
    virtual bool getResetPlayerAlignment() const /*override*/;

    // vIndex: 11
    virtual ::GraphicsMode getGraphicsMode() const /*override*/;

    // vIndex: 73
    virtual bool getTransparentLeaves() const /*override*/;

    // vIndex: 74
    virtual bool getFancyBubbles() const /*override*/;

    // vIndex: 75
    virtual bool getSmoothLighting() const /*override*/;

    // vIndex: 76
    virtual bool getGuiAccessibilityScaling() const /*override*/;

    // vIndex: 81
    virtual bool getUseMouseForDigging() const /*override*/;

    // vIndex: 82
    virtual bool isLeftHanded() const /*override*/;

    // vIndex: 83
    virtual bool isHotbarOnlyTouch() const /*override*/;

    // vIndex: 84
    virtual bool getDestroyVibration(::InputMode) const /*override*/;

    // vIndex: 85
    virtual bool getSplitVibration(::InputMode) const /*override*/;

    // vIndex: 86
    virtual bool getAutoJump(::InputMode) const /*override*/;

    // vIndex: 87
    virtual void setFullscreen(bool) /*override*/;

    // vIndex: 88
    virtual bool getFullscreen() const /*override*/;

    // vIndex: 89
    virtual void toggleFullscreen() /*override*/;

    // vIndex: 95
    virtual void setDifficulty(int) /*override*/;

    // vIndex: 96
    virtual void setHideGUI(bool) /*override*/;

    // vIndex: 97
    virtual bool getHideHud() const /*override*/;

    // vIndex: 98
    virtual bool getHideHand() const /*override*/;

    // vIndex: 99
    virtual void setHideToolTips(bool) /*override*/;

    // vIndex: 100
    virtual bool getHideToolTips() const /*override*/;

    // vIndex: 101
    virtual void setHidePaperDoll(bool) /*override*/;

    // vIndex: 102
    virtual bool getHidePaperDoll() const /*override*/;

    // vIndex: 103
    virtual void setIngamePlayerNames(bool) /*override*/;

    // vIndex: 104
    virtual bool getIngamePlayerNames() const /*override*/;

    // vIndex: 105
    virtual void setSplitscreenIngamePlayerNames(bool) /*override*/;

    // vIndex: 106
    virtual bool getSplitscreenIngamePlayerNames() const /*override*/;

    // vIndex: 107
    virtual void setInterfaceOpacity(float) /*override*/;

    // vIndex: 108
    virtual float getInterfaceOpacity() const /*override*/;

    // vIndex: 109
    virtual void setSplitscreenInterfaceOpacity(float) /*override*/;

    // vIndex: 110
    virtual float getSplitscreenInterfaceOpacity() const /*override*/;

    // vIndex: 111
    virtual void setShowAutoSaveIcon(bool) /*override*/;

    // vIndex: 112
    virtual bool getShowAutoSaveIcon() const /*override*/;

    // vIndex: 113
    virtual void setSplitscreenDirection(int) /*override*/;

    // vIndex: 114
    virtual ::SplitScreenDirection getSplitscreenDirection() const /*override*/;

    // vIndex: 115
    virtual void setHideScreens(bool) /*override*/;

    // vIndex: 116
    virtual bool getHideScreens() const /*override*/;

    // vIndex: 117
    virtual void setHideItemInHand(bool) /*override*/;

    // vIndex: 118
    virtual bool getHideItemInHand() const /*override*/;

    // vIndex: 119
    virtual bool getScreenAnimations() const /*override*/;

    // vIndex: 12
    virtual ::UIProfile getUIProfile() const /*override*/;

    // vIndex: 122
    virtual void setForceUseUnsortedPolys(bool) /*override*/;

    // vIndex: 123
    virtual bool getForceUseUnsortedPolys() const /*override*/;

    // vIndex: 124
    virtual void setRenderDebug(::DebugHudOptions) /*override*/;

    // vIndex: 125
    virtual ::DebugHudOptions getRenderDebug() const /*override*/;

    // vIndex: 126
    virtual bool getRemoteImguiEnabled() const /*override*/;

    // vIndex: 127
    virtual void setRemoteImguiEnabled(bool) /*override*/;

    // vIndex: 128
    virtual float getGamma() const /*override*/;

    // vIndex: 129
    virtual void setMSAA(int) /*override*/;

    // vIndex: 130
    virtual void setTexelAA(bool) /*override*/;

    // vIndex: 131
    virtual void setFixedCamera(bool) /*override*/;

    // vIndex: 132
    virtual bool getFixedCamera() const /*override*/;

    // vIndex: 133
    virtual void setSkinId(::std::string const&) /*override*/;

    // vIndex: 134
    virtual ::std::string const& getSkinId() const /*override*/;

    // vIndex: 135
    virtual void setLastCustomSkinId(::std::string const&) /*override*/;

    // vIndex: 136
    virtual ::std::string const& getLastCustomSkinId() const /*override*/;

    // vIndex: 139
    virtual bool getFovToggle() const /*override*/;

    // vIndex: 140
    virtual void setServerVisible(bool) /*override*/;

    // vIndex: 141
    virtual bool getServerVisible() const /*override*/;

    // vIndex: 142
    virtual void setSplitControls(bool) /*override*/;

    // vIndex: 143
    virtual bool getSplitControls() const /*override*/;

    // vIndex: 144
    virtual bool getSwapJumpAndSneak() const /*override*/;

    // vIndex: 145
    virtual bool getFancySkies() const /*override*/;

    // vIndex: 146
    virtual void setRenderClouds(bool) /*override*/;

    // vIndex: 147
    virtual bool getRenderClouds() const /*override*/;

    // vIndex: 148
    virtual bool getDevAutoLoadLevel() const /*override*/;

    // vIndex: 149
    virtual bool getDevAssertionsDebugBreak() const /*override*/;

    // vIndex: 150
    virtual bool getDevAssertionsShowDialog() const /*override*/;

    // vIndex: 152
    virtual bool getDevShowDisplayLoggedError() const /*override*/;

    // vIndex: 151
    virtual bool getDevShowDisplayLoggedError(::DisplayLoggedErrorType) const /*override*/;

    // vIndex: 153
    virtual void setDevShowDevConsoleButton(bool) /*override*/;

    // vIndex: 154
    virtual bool getDevShowDevConsoleButton() const /*override*/;

    // vIndex: 155
    virtual bool getDevIgnoreUserInput() const /*override*/;

    // vIndex: 156
    virtual bool getDevDisplayTreatmentPanel() const /*override*/;

    // vIndex: 157
    virtual void setDevDisplayTreatmentPanel(bool) /*override*/;

    // vIndex: 158
    virtual void setDevShowMinecraftTCUIReplacement(bool) /*override*/;

    // vIndex: 159
    virtual bool getDevShowMinecraftTCUIReplacement() const /*override*/;

    // vIndex: 160
    virtual bool getDevCreateRealmWithoutPurchase() const /*override*/;

    // vIndex: 161
    virtual bool getDevDisableConnectedStoragePush() const /*override*/;

    // vIndex: 162
    virtual bool getDevDisableConnectedStoragePull() const /*override*/;

    // vIndex: 163
    virtual void setDevFindMobs(bool) /*override*/;

    // vIndex: 164
    virtual bool getDevFindMobs() const /*override*/;

    // vIndex: 165
    virtual void setDevRenderBoundingBoxes(bool) /*override*/;

    // vIndex: 2
    virtual bool getDevRenderBoundingBoxes() const /*override*/;

    // vIndex: 166
    virtual void setDevRenderPaths(bool) /*override*/;

    // vIndex: 3
    virtual bool getDevRenderPaths() const /*override*/;

    // vIndex: 167
    virtual void setDevRenderMobInfoState(bool) /*override*/;

    // vIndex: 4
    virtual bool getDevRenderMobInfoState() const /*override*/;

    // vIndex: 168
    virtual void setDevRenderGoalState(bool) /*override*/;

    // vIndex: 6
    virtual bool getDevRenderGoalState() const /*override*/;

    // vIndex: 169
    virtual void setDevRenderSchedulerInfo(bool) /*override*/;

    // vIndex: 5
    virtual bool getDevRenderSchedulerInfo() const /*override*/;

    // vIndex: 170
    virtual void setDevRenderCoordinateSystems(bool) /*override*/;

    // vIndex: 171
    virtual bool getDevRenderCoordinateSystems() const /*override*/;

    // vIndex: 172
    virtual bool getDevResetClientId() const /*override*/;

    // vIndex: 173
    virtual void setDevLogFlushImmediate(bool) /*override*/;

    // vIndex: 174
    virtual bool getDevLogFlushImmediate() const /*override*/;

    // vIndex: 175
    virtual void setDevLogTimestamp(bool) /*override*/;

    // vIndex: 176
    virtual bool getDevLogTimestamp() const /*override*/;

    // vIndex: 177
    virtual void setDevLogTrace(bool) /*override*/;

    // vIndex: 178
    virtual bool getDevLogTrace() const /*override*/;

    // vIndex: 179
    virtual void setDevLogArea(bool) /*override*/;

    // vIndex: 180
    virtual bool getDevLogArea() const /*override*/;

    // vIndex: 181
    virtual void setDevLogPriority(bool) /*override*/;

    // vIndex: 182
    virtual bool getDevLogPriority() const /*override*/;

    // vIndex: 183
    virtual void setDevLogThread(bool) /*override*/;

    // vIndex: 184
    virtual bool getDevLogThread() const /*override*/;

    // vIndex: 185
    virtual void setDevLogAppend(bool) /*override*/;

    // vIndex: 186
    virtual bool getDevLogAppend() const /*override*/;

    // vIndex: 187
    virtual void setDevLogProcessId(bool) /*override*/;

    // vIndex: 188
    virtual bool getDevLogProcessId() const /*override*/;

    // vIndex: 189
    virtual void setDevLogThreadId(bool) /*override*/;

    // vIndex: 190
    virtual bool getDevLogThreadId() const /*override*/;

    // vIndex: 191
    virtual void setDevLogMessageId(bool) /*override*/;

    // vIndex: 192
    virtual bool getDevLogMessageId() const /*override*/;

    // vIndex: 193
    virtual void setDevLogSilentLogging(bool) /*override*/;

    // vIndex: 194
    virtual bool getDevLogSilentLogging() const /*override*/;

    // vIndex: 195
    virtual void setDevLogPriorityFilter(::std::string const&) /*override*/;

    // vIndex: 196
    virtual ::std::string const& getDevLogPriorityFilter() const /*override*/;

    // vIndex: 197
    virtual void setDevLogAreaFilter(::std::string const&) /*override*/;

    // vIndex: 198
    virtual ::std::string const& getDevLogAreaFilter() const /*override*/;

    // vIndex: 199
    virtual void setDevGameEventRetentionTicks(ushort) /*override*/;

    // vIndex: 8
    virtual ushort getDevGameEventRetentionTicks() const /*override*/;

    // vIndex: 200
    virtual void setDevDeepDarkDebugRender(bool) /*override*/;

    // vIndex: 7
    virtual bool getDevDeepDarkDebugRender() const /*override*/;

    // vIndex: 201
    virtual bool isLogCategoryEnabled(::BedrockLog::LogCategory) const /*override*/;

    // vIndex: 202
    virtual bool getDevEnableProfilerOutput() /*override*/;

    // vIndex: 203
    virtual bool getDevAddUsersSilently() const /*override*/;

    // vIndex: 204
    virtual int getDevBenchmarkModeTime() /*override*/;

    // vIndex: 205
    virtual bool getDevDisableClientBlobCache() const /*override*/;

    // vIndex: 206
    virtual bool getDevClientBlobCacheOnLocalServer() const /*override*/;

    // vIndex: 207
    virtual void setLogFlushDelay(int) /*override*/;

    // vIndex: 208
    virtual int getLogFlushDelay() /*override*/;

    // vIndex: 209
    virtual int getAutomationParallelSlices() const /*override*/;

    // vIndex: 210
    virtual int getAutomationParallelCurrentSlice() const /*override*/;

    // vIndex: 211
    virtual bool getIsAutomationRun() const /*override*/;

    // vIndex: 212
    virtual bool getShouldQuitAppAfterTesting() const /*override*/;

    // vIndex: 213
    virtual bool shouldUploadTestArtifacts() const /*override*/;

    // vIndex: 214
    virtual bool hasAutomationTestRunTimedOut() const /*override*/;

    // vIndex: 215
    virtual bool hasAutomationTestRunReachedCrashLimit() const /*override*/;

    // vIndex: 216
    virtual bool shouldAppendDebugLogTimestamp() const /*override*/;

    // vIndex: 217
    virtual ::std::string getAutomationServerIp() const /*override*/;

    // vIndex: 218
    virtual ::std::string getAutomationServerPort() const /*override*/;

    // vIndex: 219
    virtual ::std::string getAutomationArtifactUploadSas() const /*override*/;

    // vIndex: 220
    virtual ::std::string getAutomationArtifactUploadUrl() const /*override*/;

    // vIndex: 221
    virtual ::std::string getAutomationRelativeBlobpath() const /*override*/;

    // vIndex: 222
    virtual ::std::string getAutomationFunctionalTestTags() const /*override*/;

    // vIndex: 223
    virtual ::std::string getAutomationServerTestTags() const /*override*/;

    // vIndex: 224
    virtual ::std::string getAutomationUnitTestTags() const /*override*/;

    // vIndex: 225
    virtual ::std::string getAutomationFunctionalBrokenTestTags() const /*override*/;

    // vIndex: 226
    virtual ::std::string getAutomationServerBrokenTestTags() const /*override*/;

    // vIndex: 227
    virtual ::std::string getAutomationUnitBrokenTestTags() const /*override*/;

    // vIndex: 228
    virtual ::std::string getAutomationTestBuildID() const /*override*/;

    // vIndex: 229
    virtual ::std::string getAutomationUploadToken() const /*override*/;

    // vIndex: 230
    virtual ::std::string getAutomationEnabledFeatures() const /*override*/;

    // vIndex: 231
    virtual ::std::string getAutomationEnabledExperiments() const /*override*/;

    // vIndex: 232
    virtual bool getAutomationShouldGroupServerTests() const /*override*/;

    // vIndex: 233
    virtual bool getAutomationUnrandomTestsEnabled() const /*override*/;

    // vIndex: 234
    virtual bool getAutomationRunEntireServerTestGroup() const /*override*/;

    // vIndex: 235
    virtual bool getAutomationRunServerTestAfterEachTest() const /*override*/;

    // vIndex: 236
    virtual ::std::string const& getTestBranchName() const /*override*/;

    // vIndex: 237
    virtual bool getFunctionalTestBlockInput() const /*override*/;

    // vIndex: 238
    virtual bool shouldBlockUserInput() const /*override*/;

    // vIndex: 239
    virtual bool hasSetSafeZone() const /*override*/;

    // vIndex: 240
    virtual bool getAutomationDisableTreatmentPackDownloads() const /*override*/;

    // vIndex: 241
    virtual bool getAutomationProfilerCaptureEnabled() const /*override*/;

    // vIndex: 242
    virtual bool getAutomationProfilerFlipEnabled() const /*override*/;

    // vIndex: 243
    virtual int getAutomationRepeatCount() const /*override*/;

    // vIndex: 244
    virtual int getAutomationSoakTestRunDurationMinutes() const /*override*/;

    // vIndex: 245
    virtual bool getAutomationRerunFailuresOnly() const /*override*/;

    // vIndex: 246
    virtual int getAutomationUnitPerTestcaseTimeout() const /*override*/;

    // vIndex: 247
    virtual int getAutomationFunctionalPerTestcaseTimeout() const /*override*/;

    // vIndex: 248
    virtual int getAutomationServerPerTestcaseTimeout() const /*override*/;

    // vIndex: 249
    virtual void setAutomationFunctionalBrokenTestTags(::std::string const&) /*override*/;

    // vIndex: 250
    virtual void setAutomationUnitBrokenTestTags(::std::string const&) /*override*/;

    // vIndex: 251
    virtual void setAutomationUploadToken(::std::string const&) /*override*/;

    // vIndex: 252
    virtual bool getDevAchievmentsAlwaysEnabled() /*override*/;

    // vIndex: 253
    virtual bool shouldServerTestsLogWorlds() const /*override*/;

    // vIndex: 254
    virtual bool shouldServerTestsAssertOnLevelDiff() const /*override*/;

    // vIndex: 255
    virtual ::std::string getAutomationMultiplayerSessionName() const /*override*/;

    // vIndex: 256
    virtual int getAutomationMultiplayerDeviceIndex() const /*override*/;

    // vIndex: 257
    virtual ::std::vector<::std::string> getAutomationMultiplayerUserAccounts() const /*override*/;

    // vIndex: 258
    virtual ::DevConnectionQuality getDevConnectionQuality() const /*override*/;

    // vIndex: 259
    virtual int getDevRenderAttachPos() const /*override*/;

    // vIndex: 260
    virtual void setMultiPlayerGame(bool) /*override*/;

    // vIndex: 261
    virtual bool getMultiPlayerGame() const /*override*/;

    // vIndex: 262
    virtual void setXboxLiveVisible(bool) /*override*/;

    // vIndex: 263
    virtual bool wasLoggedInLastSession() /*override*/;

    // vIndex: 264
    virtual void setHasEverLoggedIntoXbl(bool) /*override*/;

    // vIndex: 265
    virtual bool getHasEverLoggedIntoXbl() const /*override*/;

    // vIndex: 266
    virtual void setHasShownFirstLaunchWelcomeModal(bool) /*override*/;

    // vIndex: 267
    virtual bool getHasShownFirstLaunchWelcomeModal() const /*override*/;

    // vIndex: 268
    virtual void setHasShownFirstSocialWelcomeModal(bool) /*override*/;

    // vIndex: 269
    virtual bool getHasShownFirstSocialWelcomeModal() const /*override*/;

    // vIndex: 270
    virtual void setHasShownBannedModalAtStartup(bool) /*override*/;

    // vIndex: 271
    virtual bool getHasShownBannedModalAtStartup() const /*override*/;

    // vIndex: 272
    virtual void setAcknowledgedAutoSave(bool) /*override*/;

    // vIndex: 273
    virtual bool getAcknowledgedAutoSave() const /*override*/;

    // vIndex: 274
    virtual void setRealmsInviteShowFriendsOption(bool) /*override*/;

    // vIndex: 275
    virtual bool getRealmsInviteShowFriendsOption() const /*override*/;

    // vIndex: 276
    virtual void setNumberOfOwnedRealms(int) /*override*/;

    // vIndex: 277
    virtual int getNumberOfOwnedRealms() const /*override*/;

    // vIndex: 278
    virtual void setNumberOfFriendsRealms(int) /*override*/;

    // vIndex: 279
    virtual int getNumberOfFriendsRealms() const /*override*/;

    // vIndex: 280
    virtual void setCreateRealmUpsellCount(int) /*override*/;

    // vIndex: 281
    virtual int getCreateRealmUpsellCount() const /*override*/;

    // vIndex: 282
    virtual void setSaveAndQuitCount(int) /*override*/;

    // vIndex: 283
    virtual int getSaveAndQuitCount() const /*override*/;

    // vIndex: 284
    virtual void setIsRatingsPromptShown(bool) /*override*/;

    // vIndex: 285
    virtual bool getIsRatingsPromptShown() const /*override*/;

    // vIndex: 286
    virtual void setShowRealmsTrialButtonFromPlayScreen(bool) /*override*/;

    // vIndex: 287
    virtual bool getShowRealmsTrialButtonFromPlayScreen() const /*override*/;

    // vIndex: 288
    virtual ::AutoUpdateMode getAutoUpdateMode() const /*override*/;

    // vIndex: 289
    virtual void setCanUseCellularData(bool) /*override*/;

    // vIndex: 290
    virtual bool getCanUseCellularData() const /*override*/;

    // vIndex: 121
    virtual int getPlayerViewPerspective() const /*override*/;

    // vIndex: 291
    virtual void setRequireWebsocketEncryption(bool) /*override*/;

    // vIndex: 292
    virtual bool getRequireWebsocketEncryption() const /*override*/;

    // vIndex: 293
    virtual void setWebsocketsEnabled(bool) /*override*/;

    // vIndex: 294
    virtual bool getWebsocketsEnabled() const /*override*/;

    // vIndex: 295
    virtual void setUseIPv6Only(bool) /*override*/;

    // vIndex: 296
    virtual bool getUseIPv6Only() const /*override*/;

    // vIndex: 297
    virtual void setUseRetailXboxSandbox(bool const) /*override*/;

    // vIndex: 298
    virtual bool getUseRetailXboxSandbox() const /*override*/;

    // vIndex: 299
    virtual void setXboxLiveSandbox(::XboxSandboxEnvironment) /*override*/;

    // vIndex: 300
    virtual ::std::string const& getXboxLiveSandbox() const /*override*/;

    // vIndex: 301
    virtual void setRealmsEnvironment(::RealmsEnvironment) /*override*/;

    // vIndex: 302
    virtual ::RealmsEnvironment getRealmsEnvironment() const /*override*/;

    // vIndex: 303
    virtual void setRealmsEndpoint(::std::string const&) /*override*/;

    // vIndex: 304
    virtual ::std::string const& getRealmsEndpoint() const /*override*/;

    // vIndex: 305
    virtual ::std::string const& getRealmsV2Endpoint() const /*override*/;

    // vIndex: 306
    virtual void setRealmsEndpointPayment(::std::string const&) /*override*/;

    // vIndex: 307
    virtual ::std::string const& getRealmsEndpointPayment() const /*override*/;

    // vIndex: 308
    virtual void setRealmsRelyingParty(::std::string const&) /*override*/;

    // vIndex: 309
    virtual ::std::string const& getRealmsRelyingParty() const /*override*/;

    // vIndex: 310
    virtual void setRealmsRelyingPartyPayment(::std::string const&) /*override*/;

    // vIndex: 311
    virtual ::std::string const& getRealmsRelyingPartyPayment() const /*override*/;

    // vIndex: 312
    virtual void setStoreHasPurchasedCoins(bool) /*override*/;

    // vIndex: 313
    virtual bool getStoreHasPurchasedCoins() const /*override*/;

    // vIndex: 314
    virtual void setShowUnfulfilledPurchaseModal(bool) /*override*/;

    // vIndex: 315
    virtual bool getShowUnfulfilledPurchaseModal() const /*override*/;

    // vIndex: 316
    virtual void setSwitchCoinDebug(bool) /*override*/;

    // vIndex: 317
    virtual bool getSwitchCoinDebug() const /*override*/;

    // vIndex: 323
    virtual void setEduHasLoggedIn(bool) /*override*/;

    // vIndex: 324
    virtual bool getEduHasLoggedIn() const /*override*/;

    // vIndex: 325
    virtual void setShownPlatformNetworkConnectConfirmation(bool) /*override*/;

    // vIndex: 326
    virtual bool getShownPlatformNetworkConnectConfirmation() const /*override*/;

    // vIndex: 327
    virtual void setShownPlatformPremiumUpsell(bool) /*override*/;

    // vIndex: 328
    virtual bool getShownPlatformPremiumUpsell() const /*override*/;

    // vIndex: 329
    virtual void setAppLaunchedCount(int) /*override*/;

    // vIndex: 330
    virtual int getAppLaunchedCount() const /*override*/;

    // vIndex: 331
    virtual void setEcoMode(bool) /*override*/;

    // vIndex: 332
    virtual bool getEcoMode() const /*override*/;

    // vIndex: 333
    virtual void setEduCloudBackupToggle(bool) /*override*/;

    // vIndex: 334
    virtual bool getEduCloudBackupToggle() const /*override*/;

    // vIndex: 335
    virtual void setUseFontOverrides(bool) /*override*/;

    // vIndex: 336
    virtual bool getUseFontOverrides() const /*override*/;

    // vIndex: 337
    virtual ::NewInteractionModel getEffectiveTouchScheme() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
