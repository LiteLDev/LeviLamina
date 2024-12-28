#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/KeyboardType.h"
#include "mc/client/options/AutoUpdateMode.h"
#include "mc/client/options/DebugHudOptions.h"
#include "mc/client/options/GraphicsMode.h"
#include "mc/client/options/RealmsEnvironment.h"
#include "mc/client/options/SplitScreenDirection.h"
#include "mc/client/options/UIProfile.h"
#include "mc/client/options/VRStickyMining.h"
#include "mc/client/options/XboxSandboxEnvironment.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/VRControllerType.h"
#include "mc/deps/minecraft_renderer/renderer/RenderingProfile.h"
#include "mc/deviceinfo/DeviceMemoryTier.h"
#include "mc/diagnostics/bedrock_log/LogCategory.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/network/DevConnectionQuality.h"
#include "mc/options/option_types/OptionID.h"
#include "mc/options/option_types/OptionResetFlags.h"

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

class IOptions : public ::std::enable_shared_from_this<::IOptions> {
public:
    // IOptions inner types define
    enum class SaveRequestMode : int {
        None           = 0,
        Save           = 1,
        ForceCloudSave = 2,
    };

public:
    // prevent constructor by default
    IOptions& operator=(IOptions const&);
    IOptions(IOptions const&);
    IOptions();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IOptions();

    // vIndex: 1
    virtual ::Option& _registerOption(::std::unique_ptr<::Option>) = 0;

    // vIndex: 2
    virtual void load(::Core::PathBuffer<::std::string>) = 0;

    // vIndex: 3
    virtual void tickSaveTimer() = 0;

    // vIndex: 4
    virtual void notifySaveAllowed() = 0;

    // vIndex: 5
    virtual void saveIfNeeded() = 0;

    // vIndex: 6
    virtual ::OptionSaveDeferral requestSaveDeferral() = 0;

    // vIndex: 7
    virtual void reset(::OptionResetFlags, ::InputMode) = 0;

    // vIndex: 8
    virtual bool getPrimaryUserStatus() const = 0;

    // vIndex: 9
    virtual void setClientInstanceCoordinator(::Bedrock::NonOwnerPointer<::ClientInstanceEventCoordinator> const&) = 0;

    // vIndex: 10
    virtual void onScreenSizeChanged(int, int) = 0;

    // vIndex: 11
    virtual bool isValidOption(::OptionID) const = 0;

    // vIndex: 13
    virtual ::gsl::not_null<::Option*> get(::OptionID) = 0;

    // vIndex: 12
    virtual ::gsl::not_null<::Option const*> get(::OptionID) const = 0;

    // vIndex: 15
    virtual ::std::optional<::Option*> getIfValid(::OptionID) = 0;

    // vIndex: 14
    virtual ::std::optional<::Option const*> getIfValid(::OptionID) const = 0;

    // vIndex: 16
    virtual void getTelemetryOptions(::std::vector<::OptionID>&) = 0;

    // vIndex: 17
    virtual void refreshRenderDistanceLevels() = 0;

    // vIndex: 18
    virtual bool isLoadInProgress() = 0;

    // vIndex: 19
    virtual void addObserver(::OptionsObserver&) = 0;

    // vIndex: 20
    virtual void loadOptionsFromString(::std::string) = 0;

    // vIndex: 21
    virtual void elevateSaveRequestMode(::IOptions::SaveRequestMode) = 0;

    // vIndex: 23
    virtual ::ChatOptions const& getChatOptions() const = 0;

    // vIndex: 22
    virtual ::ChatOptions& getChatOptions() = 0;

    // vIndex: 24
    virtual ::std::array<::std::unique_ptr<::Option>, 767> const& getAllRegisteredOptions() = 0;

    // vIndex: 25
    virtual void forEachOption(::std::function<void(::Option*)>) = 0;

    // vIndex: 26
    virtual bool consumeDevOptionsDirty() = 0;

    // vIndex: 27
    virtual void dumpOptionsToLogFile() const = 0;

    // vIndex: 28
    virtual void setUseVROptions(bool) = 0;

    // vIndex: 29
    virtual bool getUseVROptions() const = 0;

    // vIndex: 30
    virtual void updateInputMode(::InputMode) = 0;

    // vIndex: 31
    virtual void setMainVolume(float) = 0;

    // vIndex: 32
    virtual float getMainVolume() const = 0;

    // vIndex: 33
    virtual void setMusicVolume(float) = 0;

    // vIndex: 34
    virtual float getMusicVolume() const = 0;

    // vIndex: 35
    virtual void setSoundVolume(float) = 0;

    // vIndex: 36
    virtual float getSoundVolume() const = 0;

    // vIndex: 37
    virtual void setTTSVolume(float) = 0;

    // vIndex: 38
    virtual float getTTSVolume() const = 0;

    // vIndex: 39
    virtual float getChatMessageDuration() const = 0;

    // vIndex: 40
    virtual float getToastNotificationDuration() const = 0;

    // vIndex: 41
    virtual void setSensitivity(float, ::InputMode) = 0;

    // vIndex: 42
    virtual float getSensitivity(::InputMode) const = 0;

    // vIndex: 43
    virtual void setSpyglassDamping(float, ::InputMode) = 0;

    // vIndex: 44
    virtual float getSpyglassDamping(::InputMode) const = 0;

    // vIndex: 45
    virtual void setDwellBeforeDrag(float) = 0;

    // vIndex: 46
    virtual float getDwellBeforeDrag() const = 0;

    // vIndex: 47
    virtual void setStackSplittingTrigger(float) = 0;

    // vIndex: 48
    virtual float getStackSplittingTrigger() const = 0;

    // vIndex: 49
    virtual float getGameSensitivity(::InputMode) const = 0;

    // vIndex: 50
    virtual void setFileStorageLocation(::FileStorageDirectory, ::std::function<void(bool)>) = 0;

    // vIndex: 51
    virtual ::FileStorageDirectory getFileStorageLocation() const = 0;

    // vIndex: 52
    virtual float getVRMouseUISensitivity() const = 0;

    // vIndex: 53
    virtual bool getInvertYMouse(::InputMode) const = 0;

    // vIndex: 54
    virtual int getViewDistanceChunks() const = 0;

    // vIndex: 55
    virtual int getDefaultViewDistanceChunks(bool, ::GraphicsMode) const = 0;

    // vIndex: 56
    virtual int getMaxViewDistanceChunks() const = 0;

    // vIndex: 57
    virtual int getMaxViewDistanceChunksRaw() const = 0;

    // vIndex: 58
    virtual float getParticleViewDistance() const = 0;

    // vIndex: 59
    virtual bool getBobView() const = 0;

    // vIndex: 60
    virtual bool getCameraShake() const = 0;

    // vIndex: 61
    virtual bool getStereoRendering() const = 0;

    // vIndex: 62
    virtual void setResetPlayerAlignment(bool) = 0;

    // vIndex: 63
    virtual bool getResetPlayerAlignment() const = 0;

    // vIndex: 64
    virtual bool getVRUsesNormalHitEffect() const = 0;

    // vIndex: 65
    virtual bool getVRUsesRedFlashForHitEffect() const = 0;

    // vIndex: 66
    virtual bool getVRRightStickPitchAssist() const = 0;

    // vIndex: 67
    virtual bool getVRRightStickDeadBand() const = 0;

    // vIndex: 68
    virtual bool getVRRightStickGazeAdjust() const = 0;

    // vIndex: 69
    virtual bool getVRGazePitchBoost() const = 0;

    // vIndex: 70
    virtual bool getVRHudDrifts() const = 0;

    // vIndex: 71
    virtual bool getVRLivingRoomCursorCentered() const = 0;

    // vIndex: 72
    virtual bool getVRJoystickAim() const = 0;

    // vIndex: 73
    virtual bool getVRLinearJump() const = 0;

    // vIndex: 74
    virtual bool getVRLinearMotion() const = 0;

    // vIndex: 75
    virtual void setVRLivingRoomMode(bool) = 0;

    // vIndex: 76
    virtual bool getVRLivingRoomMode() const = 0;

    // vIndex: 77
    virtual ::VRStickyMining getVRStickyMining() const = 0;

    // vIndex: 78
    virtual bool getVRTapTurn() = 0;

    // vIndex: 79
    virtual float getVRTapTurningSensitivity() = 0;

    // vIndex: 80
    virtual float getVRRollTurningSensitivity() = 0;

    // vIndex: 81
    virtual bool getVRRollTurning() = 0;

    // vIndex: 82
    virtual bool getVR180Turning() = 0;

    // vIndex: 83
    virtual bool getVRMirrorTexture() = 0;

    // vIndex: 84
    virtual bool getVRHandControlsItem() const = 0;

    // vIndex: 85
    virtual bool getVRHandControlsHUD() const = 0;

    // vIndex: 86
    virtual bool getVRHandPointer() const = 0;

    // vIndex: 87
    virtual bool getVRHandsVisible() const = 0;

    // vIndex: 88
    virtual ::mce::RenderingProfile getRenderingProfile() const = 0;

    // vIndex: 89
    virtual bool getTransparentLeaves() const = 0;

    // vIndex: 90
    virtual bool getFancyBubbles() const = 0;

    // vIndex: 91
    virtual bool getSmoothLighting() const = 0;

    // vIndex: 92
    virtual bool getGuiAccessibilityScaling() const = 0;

    // vIndex: 93
    virtual bool getRayTracing() const = 0;

    // vIndex: 94
    virtual bool getDeferred() const = 0;

    // vIndex: 95
    virtual ::GraphicsMode getGraphicsMode() const = 0;

    // vIndex: 96
    virtual bool getUseMouseForDigging() const = 0;

    // vIndex: 97
    virtual bool isLeftHanded() const = 0;

    // vIndex: 98
    virtual bool isHotbarOnlyTouch() const = 0;

    // vIndex: 99
    virtual bool getDestroyVibration(::InputMode) const = 0;

    // vIndex: 100
    virtual bool getSplitVibration(::InputMode) const = 0;

    // vIndex: 101
    virtual bool getAutoJump(::InputMode) const = 0;

    // vIndex: 102
    virtual void setFullscreen(bool) = 0;

    // vIndex: 103
    virtual bool getFullscreen() const = 0;

    // vIndex: 104
    virtual void toggleFullscreen() = 0;

    // vIndex: 105
    virtual ::GamePadRemappingLayout& getGamePadRemappingByType(::VRControllerType) = 0;

    // vIndex: 106
    virtual ::std::shared_ptr<::KeyboardRemappingLayout> getCurrentKeyboardRemapping() const = 0;

    // vIndex: 107
    virtual ::std::shared_ptr<::KeyboardRemappingLayout> getKeyboardRemappingByType(::KeyboardType) const = 0;

    // vIndex: 108
    virtual ::GamePadRemappingLayout& getMotionControllerRemapping() = 0;

    // vIndex: 109
    virtual void setLanguage(::std::string const&) = 0;

    // vIndex: 110
    virtual ::std::string getLanguage() const = 0;

    // vIndex: 111
    virtual void setDifficulty(int) = 0;

    // vIndex: 112
    virtual void setHideGUI(bool) = 0;

    // vIndex: 113
    virtual bool getHideHud() const = 0;

    // vIndex: 114
    virtual bool getHideHand() const = 0;

    // vIndex: 115
    virtual void setHideToolTips(bool) = 0;

    // vIndex: 116
    virtual bool getHideToolTips() const = 0;

    // vIndex: 117
    virtual void setHidePaperDoll(bool) = 0;

    // vIndex: 118
    virtual bool getHidePaperDoll() const = 0;

    // vIndex: 119
    virtual void setIngamePlayerNames(bool) = 0;

    // vIndex: 120
    virtual bool getIngamePlayerNames() const = 0;

    // vIndex: 121
    virtual void setSplitscreenIngamePlayerNames(bool) = 0;

    // vIndex: 122
    virtual bool getSplitscreenIngamePlayerNames() const = 0;

    // vIndex: 123
    virtual void setInterfaceOpacity(float) = 0;

    // vIndex: 124
    virtual float getInterfaceOpacity() const = 0;

    // vIndex: 125
    virtual void setSplitscreenInterfaceOpacity(float) = 0;

    // vIndex: 126
    virtual float getSplitscreenInterfaceOpacity() const = 0;

    // vIndex: 127
    virtual void setShowAutoSaveIcon(bool) = 0;

    // vIndex: 128
    virtual bool getShowAutoSaveIcon() const = 0;

    // vIndex: 129
    virtual void setSplitscreenDirection(int) = 0;

    // vIndex: 130
    virtual ::SplitScreenDirection getSplitscreenDirection() const = 0;

    // vIndex: 131
    virtual void setHideScreens(bool) = 0;

    // vIndex: 132
    virtual bool getHideScreens() const = 0;

    // vIndex: 133
    virtual void setHideItemInHand(bool) = 0;

    // vIndex: 134
    virtual bool getHideItemInHand() const = 0;

    // vIndex: 135
    virtual bool getScreenAnimations() const = 0;

    // vIndex: 136
    virtual void setPlayerViewPerspective(int) = 0;

    // vIndex: 137
    virtual int getPlayerViewPerspective() const = 0;

    // vIndex: 138
    virtual ::UIProfile getUIProfile() const = 0;

    // vIndex: 139
    virtual void setForceUseUnsortedPolys(bool) = 0;

    // vIndex: 140
    virtual bool getForceUseUnsortedPolys() const = 0;

    // vIndex: 141
    virtual void setRenderDebug(::DebugHudOptions) = 0;

    // vIndex: 142
    virtual ::DebugHudOptions getRenderDebug() const = 0;

    // vIndex: 143
    virtual bool getRemoteImguiEnabled() const = 0;

    // vIndex: 144
    virtual void setRemoteImguiEnabled(bool) = 0;

    // vIndex: 145
    virtual float getGamma() const = 0;

    // vIndex: 146
    virtual void setMSAA(int) = 0;

    // vIndex: 147
    virtual void setVRMSAA(int) = 0;

    // vIndex: 148
    virtual void setTexelAA(bool) = 0;

    // vIndex: 149
    virtual void setFixedCamera(bool) = 0;

    // vIndex: 150
    virtual bool getFixedCamera() const = 0;

    // vIndex: 151
    virtual void setOverrideUsername(::std::string const&) = 0;

    // vIndex: 152
    virtual bool hasOverrideUsername() const = 0;

    // vIndex: 153
    virtual ::std::string const& getDisplayedUsername() const = 0;

    // vIndex: 154
    virtual void setSkinId(::std::string const&) = 0;

    // vIndex: 155
    virtual ::std::string const& getSkinId() const = 0;

    // vIndex: 156
    virtual void setLastCustomSkinId(::std::string const&) = 0;

    // vIndex: 157
    virtual ::std::string const& getLastCustomSkinId() const = 0;

    // vIndex: 158
    virtual void setRecentSkinIds(::std::vector<::std::string> const&) = 0;

    // vIndex: 159
    virtual ::std::vector<::std::string> const& getRecentSkinIds() = 0;

    // vIndex: 160
    virtual bool getFovToggle() const = 0;

    // vIndex: 161
    virtual void setServerVisible(bool) = 0;

    // vIndex: 162
    virtual bool getServerVisible() const = 0;

    // vIndex: 163
    virtual void setSplitControls(bool) = 0;

    // vIndex: 164
    virtual bool getSplitControls() const = 0;

    // vIndex: 165
    virtual bool getSwapJumpAndSneak() const = 0;

    // vIndex: 166
    virtual bool getFancySkies() const = 0;

    // vIndex: 167
    virtual void setRenderClouds(bool) = 0;

    // vIndex: 168
    virtual bool getRenderClouds() const = 0;

    // vIndex: 169
    virtual bool getDevAutoLoadLevel() const = 0;

    // vIndex: 170
    virtual bool getDevAssertionsDebugBreak() const = 0;

    // vIndex: 171
    virtual bool getDevAssertionsShowDialog() const = 0;

    // vIndex: 172
    virtual void setDevShowDevConsoleButton(bool) = 0;

    // vIndex: 173
    virtual bool getDevShowDevConsoleButton() const = 0;

    // vIndex: 174
    virtual bool getDevIgnoreUserInput() const = 0;

    // vIndex: 175
    virtual bool getDevDisplayTreatmentPanel() const = 0;

    // vIndex: 176
    virtual void setDevDisplayTreatmentPanel(bool) = 0;

    // vIndex: 177
    virtual void setDevShowMinecraftTCUIReplacement(bool) = 0;

    // vIndex: 178
    virtual bool getDevShowMinecraftTCUIReplacement() const = 0;

    // vIndex: 179
    virtual bool getDevCreateRealmWithoutPurchase() const = 0;

    // vIndex: 180
    virtual bool getDevDisableConnectedStoragePush() const = 0;

    // vIndex: 181
    virtual bool getDevDisableConnectedStoragePull() const = 0;

    // vIndex: 182
    virtual void setDevFindMobs(bool) = 0;

    // vIndex: 183
    virtual bool getDevFindMobs() const = 0;

    // vIndex: 184
    virtual void setDevRenderBoundingBoxes(bool) = 0;

    // vIndex: 185
    virtual bool getDevRenderBoundingBoxes() const = 0;

    // vIndex: 186
    virtual void setDevRenderPaths(bool) = 0;

    // vIndex: 187
    virtual bool getDevRenderPaths() const = 0;

    // vIndex: 188
    virtual void setDevRenderMobInfoState(bool) = 0;

    // vIndex: 189
    virtual bool getDevRenderMobInfoState() const = 0;

    // vIndex: 190
    virtual void setDevRenderGoalState(bool) = 0;

    // vIndex: 191
    virtual bool getDevRenderGoalState() const = 0;

    // vIndex: 192
    virtual void setDevRenderSchedulerInfo(bool) = 0;

    // vIndex: 193
    virtual bool getDevRenderSchedulerInfo() const = 0;

    // vIndex: 194
    virtual void setDevRenderCoordinateSystems(bool) = 0;

    // vIndex: 195
    virtual bool getDevRenderCoordinateSystems() const = 0;

    // vIndex: 196
    virtual bool getDevResetClientId() const = 0;

    // vIndex: 197
    virtual void setDevLogFlushImmediate(bool) = 0;

    // vIndex: 198
    virtual bool getDevLogFlushImmediate() const = 0;

    // vIndex: 199
    virtual void setDevLogTimestamp(bool) = 0;

    // vIndex: 200
    virtual bool getDevLogTimestamp() const = 0;

    // vIndex: 201
    virtual void setDevLogTrace(bool) = 0;

    // vIndex: 202
    virtual bool getDevLogTrace() const = 0;

    // vIndex: 203
    virtual void setDevLogArea(bool) = 0;

    // vIndex: 204
    virtual bool getDevLogArea() const = 0;

    // vIndex: 205
    virtual void setDevLogPriority(bool) = 0;

    // vIndex: 206
    virtual bool getDevLogPriority() const = 0;

    // vIndex: 207
    virtual void setDevLogThread(bool) = 0;

    // vIndex: 208
    virtual bool getDevLogThread() const = 0;

    // vIndex: 209
    virtual void setDevLogAppend(bool) = 0;

    // vIndex: 210
    virtual bool getDevLogAppend() const = 0;

    // vIndex: 211
    virtual void setDevLogProcessId(bool) = 0;

    // vIndex: 212
    virtual bool getDevLogProcessId() const = 0;

    // vIndex: 213
    virtual void setDevLogThreadId(bool) = 0;

    // vIndex: 214
    virtual bool getDevLogThreadId() const = 0;

    // vIndex: 215
    virtual void setDevLogMessageId(bool) = 0;

    // vIndex: 216
    virtual bool getDevLogMessageId() const = 0;

    // vIndex: 217
    virtual void setDevLogSilentLogging(bool) = 0;

    // vIndex: 218
    virtual bool getDevLogSilentLogging() const = 0;

    // vIndex: 219
    virtual void setDevLogPriorityFilter(::std::string const&) = 0;

    // vIndex: 220
    virtual ::std::string const& getDevLogPriorityFilter() const = 0;

    // vIndex: 221
    virtual void setDevLogAreaFilter(::std::string const&) = 0;

    // vIndex: 222
    virtual ::std::string const& getDevLogAreaFilter() const = 0;

    // vIndex: 223
    virtual void setDevGameEventRetentionTicks(ushort) = 0;

    // vIndex: 224
    virtual ushort getDevGameEventRetentionTicks() const = 0;

    // vIndex: 225
    virtual void setDevDeepDarkDebugRender(bool) = 0;

    // vIndex: 226
    virtual bool getDevDeepDarkDebugRender() const = 0;

    // vIndex: 227
    virtual bool isLogCategoryEnabled(::BedrockLog::LogCategory) const = 0;

    // vIndex: 228
    virtual bool getDevEnableProfilerOutput() = 0;

    // vIndex: 229
    virtual bool getDevAddUsersSilently() const = 0;

    // vIndex: 230
    virtual int getDevBenchmarkModeTime() = 0;

    // vIndex: 231
    virtual bool getDevDisableClientBlobCache() const = 0;

    // vIndex: 232
    virtual bool getDevClientBlobCacheOnLocalServer() const = 0;

    // vIndex: 233
    virtual void setLogFlushDelay(int) = 0;

    // vIndex: 234
    virtual int getLogFlushDelay() = 0;

    // vIndex: 235
    virtual int getAutomationParallelSlices() const = 0;

    // vIndex: 236
    virtual int getAutomationParallelCurrentSlice() const = 0;

    // vIndex: 237
    virtual void setIsRunningInAppCenter(bool const) = 0;

    // vIndex: 238
    virtual bool getIsAutomationRun() const = 0;

    // vIndex: 239
    virtual bool getShouldQuitAppAfterTesting() const = 0;

    // vIndex: 240
    virtual bool shouldUploadTestArtifacts() const = 0;

    // vIndex: 241
    virtual bool hasAutomationTestRunTimedOut() const = 0;

    // vIndex: 242
    virtual bool hasAutomationTestRunReachedCrashLimit() const = 0;

    // vIndex: 243
    virtual bool shouldAppendDebugLogTimestamp() const = 0;

    // vIndex: 244
    virtual ::std::string getAutomationServerIp() const = 0;

    // vIndex: 245
    virtual ::std::string getAutomationServerPort() const = 0;

    // vIndex: 246
    virtual ::std::string getAutomationArtifactUploadSas() const = 0;

    // vIndex: 247
    virtual ::std::string getAutomationArtifactUploadUrl() const = 0;

    // vIndex: 248
    virtual ::std::string getAutomationRelativeBlobpath() const = 0;

    // vIndex: 249
    virtual ::std::string getAutomationFunctionalTestTags() const = 0;

    // vIndex: 250
    virtual ::std::string getAutomationServerTestTags() const = 0;

    // vIndex: 251
    virtual ::std::string getAutomationUnitTestTags() const = 0;

    // vIndex: 252
    virtual ::std::string getAutomationFunctionalBrokenTestTags() const = 0;

    // vIndex: 253
    virtual ::std::string getAutomationServerBrokenTestTags() const = 0;

    // vIndex: 254
    virtual ::std::string getAutomationUnitBrokenTestTags() const = 0;

    // vIndex: 255
    virtual ::std::string getAutomationTestBuildID() const = 0;

    // vIndex: 256
    virtual ::std::string getAutomationUploadToken() const = 0;

    // vIndex: 257
    virtual ::std::string getAutomationEnabledFeatures() const = 0;

    // vIndex: 258
    virtual ::std::string getAutomationEnabledExperiments() const = 0;

    // vIndex: 259
    virtual bool getAutomationShouldGroupServerTests() const = 0;

    // vIndex: 260
    virtual bool getAutomationUnrandomTestsEnabled() const = 0;

    // vIndex: 261
    virtual bool getAutomationRunEntireServerTestGroup() const = 0;

    // vIndex: 262
    virtual bool getAutomationRunServerTestAfterEachTest() const = 0;

    // vIndex: 263
    virtual ::std::string const& getTestBranchName() const = 0;

    // vIndex: 264
    virtual bool getFunctionalTestBlockInput() const = 0;

    // vIndex: 265
    virtual bool shouldBlockUserInput() const = 0;

    // vIndex: 266
    virtual bool hasSetSafeZone() const = 0;

    // vIndex: 267
    virtual bool getAutomationDisableTreatmentPackDownloads() const = 0;

    // vIndex: 268
    virtual bool getAutomationProfilerCaptureEnabled() const = 0;

    // vIndex: 269
    virtual int getAutomationRepeatCount() const = 0;

    // vIndex: 270
    virtual int getAutomationSoakTestRunDurationMinutes() const = 0;

    // vIndex: 271
    virtual bool getAutomationRerunFailuresOnly() const = 0;

    // vIndex: 272
    virtual int getAutomationUnitPerTestcaseTimeout() const = 0;

    // vIndex: 273
    virtual int getAutomationFunctionalPerTestcaseTimeout() const = 0;

    // vIndex: 274
    virtual int getAutomationServerPerTestcaseTimeout() const = 0;

    // vIndex: 275
    virtual void setAutomationFunctionalBrokenTestTags(::std::string const&) = 0;

    // vIndex: 276
    virtual void setAutomationUnitBrokenTestTags(::std::string const&) = 0;

    // vIndex: 277
    virtual void setAutomationUploadToken(::std::string const&) = 0;

    // vIndex: 278
    virtual bool getDevAchievmentsAlwaysEnabled() = 0;

    // vIndex: 279
    virtual bool shouldServerTestsLogWorlds() const = 0;

    // vIndex: 280
    virtual bool shouldServerTestsAssertOnLevelDiff() const = 0;

    // vIndex: 281
    virtual ::std::string getAutomationMultiplayerSessionName() const = 0;

    // vIndex: 282
    virtual int getAutomationMultiplayerDeviceIndex() const = 0;

    // vIndex: 283
    virtual ::DevConnectionQuality getDevConnectionQuality() const = 0;

    // vIndex: 284
    virtual int getDevRenderAttachPos() const = 0;

    // vIndex: 285
    virtual void setMultiPlayerGame(bool) = 0;

    // vIndex: 286
    virtual bool getMultiPlayerGame() const = 0;

    // vIndex: 287
    virtual void setXboxLiveVisible(bool) = 0;

    // vIndex: 288
    virtual bool getHMDPositionDisplacement() const = 0;

    // vIndex: 289
    virtual bool getVRHeadSteering() const = 0;

    // vIndex: 290
    virtual bool getStutterTurn() const = 0;

    // vIndex: 291
    virtual float getStutterAngle() const = 0;

    // vIndex: 292
    virtual bool getStutterTurnSound() const = 0;

    // vIndex: 293
    virtual bool getStutterConstantTimeMode() const = 0;

    // vIndex: 294
    virtual int getVRRightStickPitchAssistSteppings() const = 0;

    // vIndex: 295
    virtual int getVRRightStickPitchMaxAngle() const = 0;

    // vIndex: 296
    virtual void setVRLivingRoomHintTime(int) = 0;

    // vIndex: 297
    virtual int getVRLivingRoomHintTime() = 0;

    // vIndex: 298
    virtual bool wasLoggedInLastSession() = 0;

    // vIndex: 299
    virtual void setHasEverLoggedIntoXbl(bool) = 0;

    // vIndex: 300
    virtual bool getHasEverLoggedIntoXbl() const = 0;

    // vIndex: 301
    virtual void setHasChosenNotToSignInToXbl(bool) = 0;

    // vIndex: 302
    virtual bool getHasChosenNotToSignInToXbl() const = 0;

    // vIndex: 303
    virtual void setAcknowledgedAutoSave(bool) = 0;

    // vIndex: 304
    virtual bool getAcknowledgedAutoSave() const = 0;

    // vIndex: 305
    virtual void setRealmsInviteShowFriendsOption(bool) = 0;

    // vIndex: 306
    virtual bool getRealmsInviteShowFriendsOption() const = 0;

    // vIndex: 307
    virtual void setNumberOfOwnedRealms(int) = 0;

    // vIndex: 308
    virtual int getNumberOfOwnedRealms() const = 0;

    // vIndex: 309
    virtual void setNumberOfFriendsRealms(int) = 0;

    // vIndex: 310
    virtual int getNumberOfFriendsRealms() const = 0;

    // vIndex: 311
    virtual void setCreateRealmUpsellCount(int) = 0;

    // vIndex: 312
    virtual int getCreateRealmUpsellCount() const = 0;

    // vIndex: 313
    virtual void setSaveAndQuitCount(int) = 0;

    // vIndex: 314
    virtual int getSaveAndQuitCount() const = 0;

    // vIndex: 315
    virtual void setIsRatingsPromptShown(bool) = 0;

    // vIndex: 316
    virtual bool getIsRatingsPromptShown() const = 0;

    // vIndex: 317
    virtual void setShowRealmsTrialButtonFromPlayScreen(bool) = 0;

    // vIndex: 318
    virtual bool getShowRealmsTrialButtonFromPlayScreen() const = 0;

    // vIndex: 319
    virtual ::AutoUpdateMode getAutoUpdateMode() const = 0;

    // vIndex: 320
    virtual void setCanUseCellularData(bool) = 0;

    // vIndex: 321
    virtual bool getCanUseCellularData() const = 0;

    // vIndex: 322
    virtual void setRequireWebsocketEncryption(bool) = 0;

    // vIndex: 323
    virtual bool getRequireWebsocketEncryption() const = 0;

    // vIndex: 324
    virtual void setUseIPv6Only(bool) = 0;

    // vIndex: 325
    virtual bool getUseIPv6Only() const = 0;

    // vIndex: 326
    virtual void setUseRetailXboxSandbox(bool const) = 0;

    // vIndex: 327
    virtual bool getUseRetailXboxSandbox() const = 0;

    // vIndex: 328
    virtual void setXboxLiveSandbox(::XboxSandboxEnvironment) = 0;

    // vIndex: 329
    virtual ::std::string const& getXboxLiveSandbox() const = 0;

    // vIndex: 330
    virtual void setRealmsEnvironment(::RealmsEnvironment) = 0;

    // vIndex: 331
    virtual ::RealmsEnvironment getRealmsEnvironment() const = 0;

    // vIndex: 332
    virtual void setRealmsEndpoint(::std::string const&) = 0;

    // vIndex: 333
    virtual ::std::string const& getRealmsEndpoint() const = 0;

    // vIndex: 334
    virtual ::std::string const& getRealmsV2Endpoint() const = 0;

    // vIndex: 335
    virtual void setRealmsEndpointPayment(::std::string const&) = 0;

    // vIndex: 336
    virtual ::std::string const& getRealmsEndpointPayment() const = 0;

    // vIndex: 337
    virtual void setRealmsRelyingParty(::std::string const&) = 0;

    // vIndex: 338
    virtual ::std::string const& getRealmsRelyingParty() const = 0;

    // vIndex: 339
    virtual void setRealmsRelyingPartyPayment(::std::string const&) = 0;

    // vIndex: 340
    virtual ::std::string const& getRealmsRelyingPartyPayment() const = 0;

    // vIndex: 341
    virtual void setStoreHasPurchasedCoins(bool) = 0;

    // vIndex: 342
    virtual bool getStoreHasPurchasedCoins() const = 0;

    // vIndex: 343
    virtual void setShowUnfulfilledPurchaseModal(bool) = 0;

    // vIndex: 344
    virtual bool getShowUnfulfilledPurchaseModal() const = 0;

    // vIndex: 345
    virtual void setSwitchCoinDebug(bool) = 0;

    // vIndex: 346
    virtual bool getSwitchCoinDebug() const = 0;

    // vIndex: 347
    virtual float getDefaultPlatformSafeZoneX() const = 0;

    // vIndex: 348
    virtual float getDefaultPlatformSafeZoneY() const = 0;

    // vIndex: 349
    virtual bool getServerboundClientDiagnosticsEnabled() const = 0;

    // vIndex: 350
    virtual ::ScriptDebuggerSettings getScriptDebuggerSettings() const = 0;

    // vIndex: 351
    virtual ::Scripting::WatchdogSettings getScriptWatchdogSettings() const = 0;

    // vIndex: 352
    virtual void setEduHasLoggedIn(bool) = 0;

    // vIndex: 353
    virtual bool getEduHasLoggedIn() const = 0;

    // vIndex: 354
    virtual void setShownPlatformNetworkConnectConfirmation(bool) = 0;

    // vIndex: 355
    virtual bool getShownPlatformNetworkConnectConfirmation() const = 0;

    // vIndex: 356
    virtual void setShownPlatformPremiumUpsell(bool) = 0;

    // vIndex: 357
    virtual bool getShownPlatformPremiumUpsell() const = 0;

    // vIndex: 358
    virtual void setAppLaunchedCount(int) = 0;

    // vIndex: 359
    virtual int getAppLaunchedCount() const = 0;

    // vIndex: 360
    virtual void setEcoMode(bool) = 0;

    // vIndex: 361
    virtual bool getEcoMode() const = 0;

    // vIndex: 362
    virtual void setEduCloudBackupToggle(bool) = 0;

    // vIndex: 363
    virtual bool getEduCloudBackupToggle() const = 0;

    // vIndex: 364
    virtual void setUseFontOverrides(bool) = 0;

    // vIndex: 365
    virtual bool getUseFontOverrides() const = 0;

    // vIndex: 366
    virtual void setEduCloudResumableUpload(bool) = 0;

    // vIndex: 367
    virtual bool getEduCloudResumableUpload() const = 0;

    // vIndex: 368
    virtual ::NewInteractionModel getEffectiveTouchScheme() const = 0;

    // vIndex: 369
    virtual void setSaveDeferralCount(int) = 0;

    // vIndex: 370
    virtual int getSaveDeferralCount() const = 0;

    // vIndex: 371
    virtual ::std::optional<::DeviceMemoryTier> getScriptingMemoryTierOverride() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
