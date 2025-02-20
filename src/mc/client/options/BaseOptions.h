#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/options/AutoUpdateMode.h"
#include "mc/client/options/DebugHudOptions.h"
#include "mc/client/options/GraphicsMode.h"
#include "mc/client/options/IOptions.h"
#include "mc/client/options/RealmsEnvironment.h"
#include "mc/client/options/SplitScreenDirection.h"
#include "mc/client/options/UIProfile.h"
#include "mc/client/options/VRStickyMining.h"
#include "mc/client/options/XboxSandboxEnvironment.h"
#include "mc/client/store/DisplayLoggedErrorType.h"
#include "mc/deps/input/InputMode.h"
#include "mc/diagnostics/bedrock_log/LogCategory.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/DevConnectionQuality.h"
#include "mc/options/option_types/OptionID.h"

// auto generated forward declare list
// clang-format off
class Option;
// clang-format on

class BaseOptions : public ::IOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 6264> mUnk3b472d;
    ::ll::UntypedStorage<8, 16>   mUnk8e592b;
    ::ll::UntypedStorage<1, 1>    mUnk4523d5;
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
    virtual ::std::array<::std::unique_ptr<::Option>, 783> const& getAllRegisteredOptions() /*override*/;

    // vIndex: 25
    virtual void forEachOption(::std::function<void(::Option*)>) /*override*/;

    // vIndex: 26
    virtual bool consumeDevOptionsDirty() /*override*/;

    // vIndex: 27
    virtual void dumpOptionsToLogFile() const /*override*/;

    // vIndex: 1
    virtual ::Option& _registerOption(::std::unique_ptr<::Option>) /*override*/;

    // vIndex: 28
    virtual void setUseVROptions(bool) /*override*/;

    // vIndex: 29
    virtual bool getUseVROptions() const /*override*/;

    // vIndex: 30
    virtual void updateInputMode(::InputMode) /*override*/;

    // vIndex: 31
    virtual void setMainVolume(float) /*override*/;

    // vIndex: 32
    virtual float getMainVolume() const /*override*/;

    // vIndex: 33
    virtual void setMusicVolume(float) /*override*/;

    // vIndex: 34
    virtual float getMusicVolume() const /*override*/;

    // vIndex: 35
    virtual void setSoundVolume(float) /*override*/;

    // vIndex: 36
    virtual float getSoundVolume() const /*override*/;

    // vIndex: 37
    virtual void setTTSVolume(float) /*override*/;

    // vIndex: 38
    virtual float getTTSVolume() const /*override*/;

    // vIndex: 39
    virtual float getChatMessageDuration() const /*override*/;

    // vIndex: 40
    virtual float getToastNotificationDuration() const /*override*/;

    // vIndex: 41
    virtual void setSensitivity(float, ::InputMode) /*override*/;

    // vIndex: 42
    virtual float getSensitivity(::InputMode) const /*override*/;

    // vIndex: 43
    virtual void setSpyglassDamping(float, ::InputMode) /*override*/;

    // vIndex: 44
    virtual float getSpyglassDamping(::InputMode) const /*override*/;

    // vIndex: 45
    virtual void setDwellBeforeDrag(float) /*override*/;

    // vIndex: 46
    virtual float getDwellBeforeDrag() const /*override*/;

    // vIndex: 47
    virtual void setStackSplittingTrigger(float) /*override*/;

    // vIndex: 48
    virtual float getStackSplittingTrigger() const /*override*/;

    // vIndex: 49
    virtual float getGameSensitivity(::InputMode) const /*override*/;

    // vIndex: 52
    virtual float getVRMouseUISensitivity() const /*override*/;

    // vIndex: 53
    virtual bool getInvertYMouse(::InputMode) const /*override*/;

    // vIndex: 58
    virtual float getParticleViewDistance() const /*override*/;

    // vIndex: 59
    virtual bool getBobView() const /*override*/;

    // vIndex: 60
    virtual bool getCameraShake() const /*override*/;

    // vIndex: 61
    virtual bool getStereoRendering() const /*override*/;

    // vIndex: 62
    virtual void setResetPlayerAlignment(bool) /*override*/;

    // vIndex: 63
    virtual bool getResetPlayerAlignment() const /*override*/;

    // vIndex: 64
    virtual bool getVRUsesNormalHitEffect() const /*override*/;

    // vIndex: 65
    virtual bool getVRUsesRedFlashForHitEffect() const /*override*/;

    // vIndex: 66
    virtual bool getVRRightStickPitchAssist() const /*override*/;

    // vIndex: 67
    virtual bool getVRRightStickDeadBand() const /*override*/;

    // vIndex: 68
    virtual bool getVRRightStickGazeAdjust() const /*override*/;

    // vIndex: 69
    virtual bool getVRGazePitchBoost() const /*override*/;

    // vIndex: 70
    virtual bool getVRHudDrifts() const /*override*/;

    // vIndex: 71
    virtual bool getVRLivingRoomCursorCentered() const /*override*/;

    // vIndex: 72
    virtual bool getVRJoystickAim() const /*override*/;

    // vIndex: 73
    virtual bool getVRLinearJump() const /*override*/;

    // vIndex: 74
    virtual bool getVRLinearMotion() const /*override*/;

    // vIndex: 75
    virtual void setVRLivingRoomMode(bool) /*override*/;

    // vIndex: 76
    virtual bool getVRLivingRoomMode() const /*override*/;

    // vIndex: 77
    virtual ::VRStickyMining getVRStickyMining() const /*override*/;

    // vIndex: 78
    virtual bool getVRTapTurn() /*override*/;

    // vIndex: 79
    virtual float getVRTapTurningSensitivity() /*override*/;

    // vIndex: 80
    virtual float getVRRollTurningSensitivity() /*override*/;

    // vIndex: 81
    virtual bool getVRRollTurning() /*override*/;

    // vIndex: 82
    virtual bool getVR180Turning() /*override*/;

    // vIndex: 84
    virtual bool getVRHandControlsItem() const /*override*/;

    // vIndex: 85
    virtual bool getVRHandControlsHUD() const /*override*/;

    // vIndex: 86
    virtual bool getVRHandPointer() const /*override*/;

    // vIndex: 87
    virtual bool getVRHandsVisible() const /*override*/;

    // vIndex: 88
    virtual ::GraphicsMode getGraphicsMode() const /*override*/;

    // vIndex: 89
    virtual bool getTransparentLeaves() const /*override*/;

    // vIndex: 90
    virtual bool getFancyBubbles() const /*override*/;

    // vIndex: 91
    virtual bool getSmoothLighting() const /*override*/;

    // vIndex: 92
    virtual bool getGuiAccessibilityScaling() const /*override*/;

    // vIndex: 96
    virtual bool getUseMouseForDigging() const /*override*/;

    // vIndex: 97
    virtual bool isLeftHanded() const /*override*/;

    // vIndex: 98
    virtual bool isHotbarOnlyTouch() const /*override*/;

    // vIndex: 99
    virtual bool getDestroyVibration(::InputMode) const /*override*/;

    // vIndex: 100
    virtual bool getSplitVibration(::InputMode) const /*override*/;

    // vIndex: 101
    virtual bool getAutoJump(::InputMode) const /*override*/;

    // vIndex: 102
    virtual void setFullscreen(bool) /*override*/;

    // vIndex: 103
    virtual bool getFullscreen() const /*override*/;

    // vIndex: 104
    virtual void toggleFullscreen() /*override*/;

    // vIndex: 111
    virtual void setDifficulty(int) /*override*/;

    // vIndex: 112
    virtual void setHideGUI(bool) /*override*/;

    // vIndex: 113
    virtual bool getHideHud() const /*override*/;

    // vIndex: 114
    virtual bool getHideHand() const /*override*/;

    // vIndex: 115
    virtual void setHideToolTips(bool) /*override*/;

    // vIndex: 116
    virtual bool getHideToolTips() const /*override*/;

    // vIndex: 117
    virtual void setHidePaperDoll(bool) /*override*/;

    // vIndex: 118
    virtual bool getHidePaperDoll() const /*override*/;

    // vIndex: 119
    virtual void setIngamePlayerNames(bool) /*override*/;

    // vIndex: 120
    virtual bool getIngamePlayerNames() const /*override*/;

    // vIndex: 121
    virtual void setSplitscreenIngamePlayerNames(bool) /*override*/;

    // vIndex: 122
    virtual bool getSplitscreenIngamePlayerNames() const /*override*/;

    // vIndex: 123
    virtual void setInterfaceOpacity(float) /*override*/;

    // vIndex: 124
    virtual float getInterfaceOpacity() const /*override*/;

    // vIndex: 125
    virtual void setSplitscreenInterfaceOpacity(float) /*override*/;

    // vIndex: 126
    virtual float getSplitscreenInterfaceOpacity() const /*override*/;

    // vIndex: 127
    virtual void setShowAutoSaveIcon(bool) /*override*/;

    // vIndex: 128
    virtual bool getShowAutoSaveIcon() const /*override*/;

    // vIndex: 129
    virtual void setSplitscreenDirection(int) /*override*/;

    // vIndex: 130
    virtual ::SplitScreenDirection getSplitscreenDirection() const /*override*/;

    // vIndex: 131
    virtual void setHideScreens(bool) /*override*/;

    // vIndex: 132
    virtual bool getHideScreens() const /*override*/;

    // vIndex: 133
    virtual void setHideItemInHand(bool) /*override*/;

    // vIndex: 134
    virtual bool getHideItemInHand() const /*override*/;

    // vIndex: 135
    virtual bool getScreenAnimations() const /*override*/;

    // vIndex: 138
    virtual ::UIProfile getUIProfile() const /*override*/;

    // vIndex: 139
    virtual void setForceUseUnsortedPolys(bool) /*override*/;

    // vIndex: 140
    virtual bool getForceUseUnsortedPolys() const /*override*/;

    // vIndex: 141
    virtual void setRenderDebug(::DebugHudOptions) /*override*/;

    // vIndex: 142
    virtual ::DebugHudOptions getRenderDebug() const /*override*/;

    // vIndex: 143
    virtual bool getRemoteImguiEnabled() const /*override*/;

    // vIndex: 144
    virtual void setRemoteImguiEnabled(bool) /*override*/;

    // vIndex: 145
    virtual float getGamma() const /*override*/;

    // vIndex: 146
    virtual void setMSAA(int) /*override*/;

    // vIndex: 147
    virtual void setVRMSAA(int) /*override*/;

    // vIndex: 148
    virtual void setTexelAA(bool) /*override*/;

    // vIndex: 149
    virtual void setFixedCamera(bool) /*override*/;

    // vIndex: 150
    virtual bool getFixedCamera() const /*override*/;

    // vIndex: 154
    virtual void setSkinId(::std::string const&) /*override*/;

    // vIndex: 155
    virtual ::std::string const& getSkinId() const /*override*/;

    // vIndex: 156
    virtual void setLastCustomSkinId(::std::string const&) /*override*/;

    // vIndex: 157
    virtual ::std::string const& getLastCustomSkinId() const /*override*/;

    // vIndex: 160
    virtual bool getFovToggle() const /*override*/;

    // vIndex: 161
    virtual void setServerVisible(bool) /*override*/;

    // vIndex: 162
    virtual bool getServerVisible() const /*override*/;

    // vIndex: 163
    virtual void setSplitControls(bool) /*override*/;

    // vIndex: 164
    virtual bool getSplitControls() const /*override*/;

    // vIndex: 165
    virtual bool getSwapJumpAndSneak() const /*override*/;

    // vIndex: 166
    virtual bool getFancySkies() const /*override*/;

    // vIndex: 167
    virtual void setRenderClouds(bool) /*override*/;

    // vIndex: 168
    virtual bool getRenderClouds() const /*override*/;

    // vIndex: 169
    virtual bool getDevAutoLoadLevel() const /*override*/;

    // vIndex: 170
    virtual bool getDevAssertionsDebugBreak() const /*override*/;

    // vIndex: 171
    virtual bool getDevAssertionsShowDialog() const /*override*/;

    // vIndex: 173
    virtual bool getDevShowDisplayLoggedError() const /*override*/;

    // vIndex: 172
    virtual bool getDevShowDisplayLoggedError(::DisplayLoggedErrorType) const /*override*/;

    // vIndex: 174
    virtual void setDevShowDevConsoleButton(bool) /*override*/;

    // vIndex: 175
    virtual bool getDevShowDevConsoleButton() const /*override*/;

    // vIndex: 176
    virtual bool getDevIgnoreUserInput() const /*override*/;

    // vIndex: 177
    virtual bool getDevDisplayTreatmentPanel() const /*override*/;

    // vIndex: 178
    virtual void setDevDisplayTreatmentPanel(bool) /*override*/;

    // vIndex: 179
    virtual void setDevShowMinecraftTCUIReplacement(bool) /*override*/;

    // vIndex: 180
    virtual bool getDevShowMinecraftTCUIReplacement() const /*override*/;

    // vIndex: 181
    virtual bool getDevCreateRealmWithoutPurchase() const /*override*/;

    // vIndex: 182
    virtual bool getDevDisableConnectedStoragePush() const /*override*/;

    // vIndex: 183
    virtual bool getDevDisableConnectedStoragePull() const /*override*/;

    // vIndex: 184
    virtual void setDevFindMobs(bool) /*override*/;

    // vIndex: 185
    virtual bool getDevFindMobs() const /*override*/;

    // vIndex: 186
    virtual void setDevRenderBoundingBoxes(bool) /*override*/;

    // vIndex: 187
    virtual bool getDevRenderBoundingBoxes() const /*override*/;

    // vIndex: 188
    virtual void setDevRenderPaths(bool) /*override*/;

    // vIndex: 189
    virtual bool getDevRenderPaths() const /*override*/;

    // vIndex: 190
    virtual void setDevRenderMobInfoState(bool) /*override*/;

    // vIndex: 191
    virtual bool getDevRenderMobInfoState() const /*override*/;

    // vIndex: 192
    virtual void setDevRenderGoalState(bool) /*override*/;

    // vIndex: 193
    virtual bool getDevRenderGoalState() const /*override*/;

    // vIndex: 194
    virtual void setDevRenderSchedulerInfo(bool) /*override*/;

    // vIndex: 195
    virtual bool getDevRenderSchedulerInfo() const /*override*/;

    // vIndex: 196
    virtual void setDevRenderCoordinateSystems(bool) /*override*/;

    // vIndex: 197
    virtual bool getDevRenderCoordinateSystems() const /*override*/;

    // vIndex: 198
    virtual bool getDevResetClientId() const /*override*/;

    // vIndex: 199
    virtual void setDevLogFlushImmediate(bool) /*override*/;

    // vIndex: 200
    virtual bool getDevLogFlushImmediate() const /*override*/;

    // vIndex: 201
    virtual void setDevLogTimestamp(bool) /*override*/;

    // vIndex: 202
    virtual bool getDevLogTimestamp() const /*override*/;

    // vIndex: 203
    virtual void setDevLogTrace(bool) /*override*/;

    // vIndex: 204
    virtual bool getDevLogTrace() const /*override*/;

    // vIndex: 205
    virtual void setDevLogArea(bool) /*override*/;

    // vIndex: 206
    virtual bool getDevLogArea() const /*override*/;

    // vIndex: 207
    virtual void setDevLogPriority(bool) /*override*/;

    // vIndex: 208
    virtual bool getDevLogPriority() const /*override*/;

    // vIndex: 209
    virtual void setDevLogThread(bool) /*override*/;

    // vIndex: 210
    virtual bool getDevLogThread() const /*override*/;

    // vIndex: 211
    virtual void setDevLogAppend(bool) /*override*/;

    // vIndex: 212
    virtual bool getDevLogAppend() const /*override*/;

    // vIndex: 213
    virtual void setDevLogProcessId(bool) /*override*/;

    // vIndex: 214
    virtual bool getDevLogProcessId() const /*override*/;

    // vIndex: 215
    virtual void setDevLogThreadId(bool) /*override*/;

    // vIndex: 216
    virtual bool getDevLogThreadId() const /*override*/;

    // vIndex: 217
    virtual void setDevLogMessageId(bool) /*override*/;

    // vIndex: 218
    virtual bool getDevLogMessageId() const /*override*/;

    // vIndex: 219
    virtual void setDevLogSilentLogging(bool) /*override*/;

    // vIndex: 220
    virtual bool getDevLogSilentLogging() const /*override*/;

    // vIndex: 221
    virtual void setDevLogPriorityFilter(::std::string const&) /*override*/;

    // vIndex: 222
    virtual ::std::string const& getDevLogPriorityFilter() const /*override*/;

    // vIndex: 223
    virtual void setDevLogAreaFilter(::std::string const&) /*override*/;

    // vIndex: 224
    virtual ::std::string const& getDevLogAreaFilter() const /*override*/;

    // vIndex: 225
    virtual void setDevGameEventRetentionTicks(ushort) /*override*/;

    // vIndex: 226
    virtual ushort getDevGameEventRetentionTicks() const /*override*/;

    // vIndex: 227
    virtual void setDevDeepDarkDebugRender(bool) /*override*/;

    // vIndex: 228
    virtual bool getDevDeepDarkDebugRender() const /*override*/;

    // vIndex: 229
    virtual bool isLogCategoryEnabled(::BedrockLog::LogCategory) const /*override*/;

    // vIndex: 230
    virtual bool getDevEnableProfilerOutput() /*override*/;

    // vIndex: 231
    virtual bool getDevAddUsersSilently() const /*override*/;

    // vIndex: 232
    virtual int getDevBenchmarkModeTime() /*override*/;

    // vIndex: 233
    virtual bool getDevDisableClientBlobCache() const /*override*/;

    // vIndex: 234
    virtual bool getDevClientBlobCacheOnLocalServer() const /*override*/;

    // vIndex: 235
    virtual void setLogFlushDelay(int) /*override*/;

    // vIndex: 236
    virtual int getLogFlushDelay() /*override*/;

    // vIndex: 237
    virtual int getAutomationParallelSlices() const /*override*/;

    // vIndex: 238
    virtual int getAutomationParallelCurrentSlice() const /*override*/;

    // vIndex: 239
    virtual bool getIsAutomationRun() const /*override*/;

    // vIndex: 240
    virtual bool getShouldQuitAppAfterTesting() const /*override*/;

    // vIndex: 241
    virtual bool shouldUploadTestArtifacts() const /*override*/;

    // vIndex: 242
    virtual bool hasAutomationTestRunTimedOut() const /*override*/;

    // vIndex: 243
    virtual bool hasAutomationTestRunReachedCrashLimit() const /*override*/;

    // vIndex: 244
    virtual bool shouldAppendDebugLogTimestamp() const /*override*/;

    // vIndex: 245
    virtual ::std::string getAutomationServerIp() const /*override*/;

    // vIndex: 246
    virtual ::std::string getAutomationServerPort() const /*override*/;

    // vIndex: 247
    virtual ::std::string getAutomationArtifactUploadSas() const /*override*/;

    // vIndex: 248
    virtual ::std::string getAutomationArtifactUploadUrl() const /*override*/;

    // vIndex: 249
    virtual ::std::string getAutomationRelativeBlobpath() const /*override*/;

    // vIndex: 250
    virtual ::std::string getAutomationFunctionalTestTags() const /*override*/;

    // vIndex: 251
    virtual ::std::string getAutomationServerTestTags() const /*override*/;

    // vIndex: 252
    virtual ::std::string getAutomationUnitTestTags() const /*override*/;

    // vIndex: 253
    virtual ::std::string getAutomationFunctionalBrokenTestTags() const /*override*/;

    // vIndex: 254
    virtual ::std::string getAutomationServerBrokenTestTags() const /*override*/;

    // vIndex: 255
    virtual ::std::string getAutomationUnitBrokenTestTags() const /*override*/;

    // vIndex: 256
    virtual ::std::string getAutomationTestBuildID() const /*override*/;

    // vIndex: 257
    virtual ::std::string getAutomationUploadToken() const /*override*/;

    // vIndex: 258
    virtual ::std::string getAutomationEnabledFeatures() const /*override*/;

    // vIndex: 259
    virtual ::std::string getAutomationEnabledExperiments() const /*override*/;

    // vIndex: 260
    virtual bool getAutomationShouldGroupServerTests() const /*override*/;

    // vIndex: 261
    virtual bool getAutomationUnrandomTestsEnabled() const /*override*/;

    // vIndex: 262
    virtual bool getAutomationRunEntireServerTestGroup() const /*override*/;

    // vIndex: 263
    virtual bool getAutomationRunServerTestAfterEachTest() const /*override*/;

    // vIndex: 264
    virtual ::std::string const& getTestBranchName() const /*override*/;

    // vIndex: 265
    virtual bool getFunctionalTestBlockInput() const /*override*/;

    // vIndex: 266
    virtual bool shouldBlockUserInput() const /*override*/;

    // vIndex: 267
    virtual bool hasSetSafeZone() const /*override*/;

    // vIndex: 268
    virtual bool getAutomationDisableTreatmentPackDownloads() const /*override*/;

    // vIndex: 269
    virtual bool getAutomationProfilerCaptureEnabled() const /*override*/;

    // vIndex: 270
    virtual bool getAutomationProfilerFlipEnabled() const /*override*/;

    // vIndex: 271
    virtual int getAutomationRepeatCount() const /*override*/;

    // vIndex: 272
    virtual int getAutomationSoakTestRunDurationMinutes() const /*override*/;

    // vIndex: 273
    virtual bool getAutomationRerunFailuresOnly() const /*override*/;

    // vIndex: 274
    virtual int getAutomationUnitPerTestcaseTimeout() const /*override*/;

    // vIndex: 275
    virtual int getAutomationFunctionalPerTestcaseTimeout() const /*override*/;

    // vIndex: 276
    virtual int getAutomationServerPerTestcaseTimeout() const /*override*/;

    // vIndex: 277
    virtual void setAutomationFunctionalBrokenTestTags(::std::string const&) /*override*/;

    // vIndex: 278
    virtual void setAutomationUnitBrokenTestTags(::std::string const&) /*override*/;

    // vIndex: 279
    virtual void setAutomationUploadToken(::std::string const&) /*override*/;

    // vIndex: 280
    virtual bool getDevAchievmentsAlwaysEnabled() /*override*/;

    // vIndex: 281
    virtual bool shouldServerTestsLogWorlds() const /*override*/;

    // vIndex: 282
    virtual bool shouldServerTestsAssertOnLevelDiff() const /*override*/;

    // vIndex: 283
    virtual ::std::string getAutomationMultiplayerSessionName() const /*override*/;

    // vIndex: 284
    virtual int getAutomationMultiplayerDeviceIndex() const /*override*/;

    // vIndex: 285
    virtual ::DevConnectionQuality getDevConnectionQuality() const /*override*/;

    // vIndex: 286
    virtual int getDevRenderAttachPos() const /*override*/;

    // vIndex: 287
    virtual void setMultiPlayerGame(bool) /*override*/;

    // vIndex: 288
    virtual bool getMultiPlayerGame() const /*override*/;

    // vIndex: 289
    virtual void setXboxLiveVisible(bool) /*override*/;

    // vIndex: 290
    virtual bool getHMDPositionDisplacement() const /*override*/;

    // vIndex: 291
    virtual bool getVRHeadSteering() const /*override*/;

    // vIndex: 292
    virtual bool getStutterTurn() const /*override*/;

    // vIndex: 293
    virtual float getStutterAngle() const /*override*/;

    // vIndex: 294
    virtual bool getStutterTurnSound() const /*override*/;

    // vIndex: 295
    virtual bool getStutterConstantTimeMode() const /*override*/;

    // vIndex: 296
    virtual int getVRRightStickPitchAssistSteppings() const /*override*/;

    // vIndex: 297
    virtual int getVRRightStickPitchMaxAngle() const /*override*/;

    // vIndex: 298
    virtual void setVRLivingRoomHintTime(int) /*override*/;

    // vIndex: 299
    virtual int getVRLivingRoomHintTime() /*override*/;

    // vIndex: 300
    virtual bool wasLoggedInLastSession() /*override*/;

    // vIndex: 301
    virtual void setHasEverLoggedIntoXbl(bool) /*override*/;

    // vIndex: 302
    virtual bool getHasEverLoggedIntoXbl() const /*override*/;

    // vIndex: 303
    virtual void setHasChosenNotToSignInToXbl(bool) /*override*/;

    // vIndex: 304
    virtual bool getHasChosenNotToSignInToXbl() const /*override*/;

    // vIndex: 305
    virtual void setAcknowledgedAutoSave(bool) /*override*/;

    // vIndex: 306
    virtual bool getAcknowledgedAutoSave() const /*override*/;

    // vIndex: 307
    virtual void setRealmsInviteShowFriendsOption(bool) /*override*/;

    // vIndex: 308
    virtual bool getRealmsInviteShowFriendsOption() const /*override*/;

    // vIndex: 309
    virtual void setNumberOfOwnedRealms(int) /*override*/;

    // vIndex: 310
    virtual int getNumberOfOwnedRealms() const /*override*/;

    // vIndex: 311
    virtual void setNumberOfFriendsRealms(int) /*override*/;

    // vIndex: 312
    virtual int getNumberOfFriendsRealms() const /*override*/;

    // vIndex: 313
    virtual void setCreateRealmUpsellCount(int) /*override*/;

    // vIndex: 314
    virtual int getCreateRealmUpsellCount() const /*override*/;

    // vIndex: 315
    virtual void setSaveAndQuitCount(int) /*override*/;

    // vIndex: 316
    virtual int getSaveAndQuitCount() const /*override*/;

    // vIndex: 317
    virtual void setIsRatingsPromptShown(bool) /*override*/;

    // vIndex: 318
    virtual bool getIsRatingsPromptShown() const /*override*/;

    // vIndex: 319
    virtual void setShowRealmsTrialButtonFromPlayScreen(bool) /*override*/;

    // vIndex: 320
    virtual bool getShowRealmsTrialButtonFromPlayScreen() const /*override*/;

    // vIndex: 321
    virtual ::AutoUpdateMode getAutoUpdateMode() const /*override*/;

    // vIndex: 322
    virtual void setCanUseCellularData(bool) /*override*/;

    // vIndex: 323
    virtual bool getCanUseCellularData() const /*override*/;

    // vIndex: 137
    virtual int getPlayerViewPerspective() const /*override*/;

    // vIndex: 324
    virtual void setRequireWebsocketEncryption(bool) /*override*/;

    // vIndex: 325
    virtual bool getRequireWebsocketEncryption() const /*override*/;

    // vIndex: 326
    virtual void setWebsocketsEnabled(bool) /*override*/;

    // vIndex: 327
    virtual bool getWebsocketsEnabled() const /*override*/;

    // vIndex: 328
    virtual void setUseIPv6Only(bool) /*override*/;

    // vIndex: 329
    virtual bool getUseIPv6Only() const /*override*/;

    // vIndex: 330
    virtual void setUseRetailXboxSandbox(bool const) /*override*/;

    // vIndex: 331
    virtual bool getUseRetailXboxSandbox() const /*override*/;

    // vIndex: 332
    virtual void setXboxLiveSandbox(::XboxSandboxEnvironment) /*override*/;

    // vIndex: 333
    virtual ::std::string const& getXboxLiveSandbox() const /*override*/;

    // vIndex: 334
    virtual void setRealmsEnvironment(::RealmsEnvironment) /*override*/;

    // vIndex: 335
    virtual ::RealmsEnvironment getRealmsEnvironment() const /*override*/;

    // vIndex: 336
    virtual void setRealmsEndpoint(::std::string const&) /*override*/;

    // vIndex: 337
    virtual ::std::string const& getRealmsEndpoint() const /*override*/;

    // vIndex: 338
    virtual ::std::string const& getRealmsV2Endpoint() const /*override*/;

    // vIndex: 339
    virtual void setRealmsEndpointPayment(::std::string const&) /*override*/;

    // vIndex: 340
    virtual ::std::string const& getRealmsEndpointPayment() const /*override*/;

    // vIndex: 341
    virtual void setRealmsRelyingParty(::std::string const&) /*override*/;

    // vIndex: 342
    virtual ::std::string const& getRealmsRelyingParty() const /*override*/;

    // vIndex: 343
    virtual void setRealmsRelyingPartyPayment(::std::string const&) /*override*/;

    // vIndex: 344
    virtual ::std::string const& getRealmsRelyingPartyPayment() const /*override*/;

    // vIndex: 345
    virtual void setStoreHasPurchasedCoins(bool) /*override*/;

    // vIndex: 346
    virtual bool getStoreHasPurchasedCoins() const /*override*/;

    // vIndex: 347
    virtual void setShowUnfulfilledPurchaseModal(bool) /*override*/;

    // vIndex: 348
    virtual bool getShowUnfulfilledPurchaseModal() const /*override*/;

    // vIndex: 349
    virtual void setSwitchCoinDebug(bool) /*override*/;

    // vIndex: 350
    virtual bool getSwitchCoinDebug() const /*override*/;

    // vIndex: 356
    virtual void setEduHasLoggedIn(bool) /*override*/;

    // vIndex: 357
    virtual bool getEduHasLoggedIn() const /*override*/;

    // vIndex: 358
    virtual void setShownPlatformNetworkConnectConfirmation(bool) /*override*/;

    // vIndex: 359
    virtual bool getShownPlatformNetworkConnectConfirmation() const /*override*/;

    // vIndex: 360
    virtual void setShownPlatformPremiumUpsell(bool) /*override*/;

    // vIndex: 361
    virtual bool getShownPlatformPremiumUpsell() const /*override*/;

    // vIndex: 362
    virtual void setAppLaunchedCount(int) /*override*/;

    // vIndex: 363
    virtual int getAppLaunchedCount() const /*override*/;

    // vIndex: 364
    virtual void setEcoMode(bool) /*override*/;

    // vIndex: 365
    virtual bool getEcoMode() const /*override*/;

    // vIndex: 366
    virtual void setEduCloudBackupToggle(bool) /*override*/;

    // vIndex: 367
    virtual bool getEduCloudBackupToggle() const /*override*/;

    // vIndex: 368
    virtual void setUseFontOverrides(bool) /*override*/;

    // vIndex: 369
    virtual bool getUseFontOverrides() const /*override*/;

    // vIndex: 370
    virtual ::NewInteractionModel getEffectiveTouchScheme() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
