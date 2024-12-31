#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/UIRenderMode.h"
#include "mc/client/input/VROutputMode.h"
#include "mc/client/options/VRHUDPosition.h"
#include "mc/deps/core/threading/IAsyncResult.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"

// auto generated forward declare list
// clang-format off
class FrameUpdateContext;
class GamePadRemappingLayout;
class IClientInstance;
class Matrix;
class Options;
class RectangleArea;
class ScreenContext;
class Vec3;
struct SoundSystemGUID;
namespace MFC { struct VrConfiguration; }
namespace mce { class RenderGraph; }
namespace mce::framebuilder { struct LivingRoomDescription; }
// clang-format on

class HolographicPlatform {
public:
    // HolographicPlatform inner types declare
    // clang-format off
    struct HoloCursorWorldParams;
    struct HoloFrameOfReferenceSetupData;
    struct LUID;
    // clang-format on

    // HolographicPlatform inner types define
    enum class MCLocation : int {
        Pose            = 0,
        FocusScreen     = 1,
        Holoviewer      = 2,
        Reality         = 3,
        Logo            = 4,
        EnvironmentScan = 5,
    };

    enum class GestureMode : int {
        Disabled   = 0,
        Pan        = 1,
        Rotate     = 2,
        Tilt       = 3,
        Pivot      = 4,
        Zoom       = 5,
        GazeOffset = 6,
        Joystick   = 7,
        Abstract   = 8,
    };

    enum class HolographicFeatures : int {
        // bitfield representation
        LivingRoomFeature             = 1 << 0,
        HoloViewerFeature             = 1 << 1,
        HoloScreenFeature             = 1 << 2,
        VirtualRealityFeature         = 1 << 3,
        RealityModeFeature            = 1 << 4,
        TransitionInsideBlocksEnabled = 1 << 5,
        HeadInsideBlocksEnabled       = 1 << 6,
        GazeOverridesMouse            = 1 << 7,
        MouseEnabled                  = 1 << 8,
        PauseMenuOnFocusLostDisabled  = 1 << 9,
        FilePickingSupported          = 1 << 10,
        ImagePickingSupported         = 1 << 11,
        RollTurningSupported          = 1 << 12,
        IsRecenterable                = 1 << 13,
        HandControllersEnabled        = 1 << 14,
    };

    enum class AimFromSpace : int {
        Gaze      = 0,
        LeftHand  = 1,
        RightHand = 2,
    };

    struct HoloFrameOfReferenceSetupData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnka23ba1;
        ::ll::UntypedStorage<4, 4>  mUnkf092f8;
        ::ll::UntypedStorage<4, 4>  mUnk2b4803;
        ::ll::UntypedStorage<4, 4>  mUnk935d93;
        ::ll::UntypedStorage<4, 4>  mUnkc48e22;
        ::ll::UntypedStorage<4, 4>  mUnkd74206;
        ::ll::UntypedStorage<4, 4>  mUnk984576;
        ::ll::UntypedStorage<4, 4>  mUnk96796b;
        ::ll::UntypedStorage<4, 4>  mUnk27e4eb;
        ::ll::UntypedStorage<4, 64> mUnk9183e7;
        ::ll::UntypedStorage<4, 4>  mUnk57c047;
        ::ll::UntypedStorage<4, 64> mUnk3d92a4;
        ::ll::UntypedStorage<4, 64> mUnke9c941;
        ::ll::UntypedStorage<4, 64> mUnk7d6453;
        ::ll::UntypedStorage<1, 1>  mUnkd2fc50;
        ::ll::UntypedStorage<1, 1>  mUnk1916f9;
        ::ll::UntypedStorage<1, 1>  mUnk6ffc13;
        ::ll::UntypedStorage<1, 1>  mUnkeedcc0;
        ::ll::UntypedStorage<4, 64> mUnk6edd28;
        ::ll::UntypedStorage<4, 64> mUnk69e00e;
        ::ll::UntypedStorage<4, 4>  mUnk1d63c0;
        ::ll::UntypedStorage<4, 64> mUnk13e731;
        // NOLINTEND

    public:
        // prevent constructor by default
        HoloFrameOfReferenceSetupData& operator=(HoloFrameOfReferenceSetupData const&);
        HoloFrameOfReferenceSetupData(HoloFrameOfReferenceSetupData const&);
        HoloFrameOfReferenceSetupData();
    };

    struct HoloCursorWorldParams {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 112> mUnka8e3c9;
        ::ll::UntypedStorage<4, 4>   mUnka8e37d;
        ::ll::UntypedStorage<4, 12>  mUnk6b84c7;
        ::ll::UntypedStorage<4, 12>  mUnk150e80;
        ::ll::UntypedStorage<4, 12>  mUnk93a961;
        ::ll::UntypedStorage<4, 12>  mUnk68b7f7;
        ::ll::UntypedStorage<4, 4>   mUnk2195c7;
        ::ll::UntypedStorage<4, 4>   mUnkac2c32;
        ::ll::UntypedStorage<1, 1>   mUnk37e6c9;
        ::ll::UntypedStorage<1, 1>   mUnka9ed32;
        ::ll::UntypedStorage<1, 1>   mUnk99ffca;
        // NOLINTEND

    public:
        // prevent constructor by default
        HoloCursorWorldParams& operator=(HoloCursorWorldParams const&);
        HoloCursorWorldParams(HoloCursorWorldParams const&);
        HoloCursorWorldParams();
    };

    struct LUID {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk8f0b90;
        ::ll::UntypedStorage<4, 4> mUnk2bdd46;
        // NOLINTEND

    public:
        // prevent constructor by default
        LUID& operator=(LUID const&);
        LUID(LUID const&);
        LUID();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 504> mUnkc67137;
    ::ll::UntypedStorage<4, 12>  mUnk93f5ad;
    ::ll::UntypedStorage<4, 12>  mUnkdbe3e8;
    ::ll::UntypedStorage<8, 80>  mUnkccaa2b;
    ::ll::UntypedStorage<8, 64>  mUnkcd6077;
    ::ll::UntypedStorage<8, 24>  mUnkeca73e;
    ::ll::UntypedStorage<1, 1>   mUnk187024;
    ::ll::UntypedStorage<1, 1>   mUnk5861d6;
    ::ll::UntypedStorage<1, 1>   mUnk38b225;
    ::ll::UntypedStorage<1, 1>   mUnk499adc;
    ::ll::UntypedStorage<4, 64>  mUnk74ee0b;
    ::ll::UntypedStorage<4, 4>   mUnk73d5a5;
    ::ll::UntypedStorage<4, 4>   mUnke192e0;
    ::ll::UntypedStorage<4, 4>   mUnk766cff;
    ::ll::UntypedStorage<4, 4>   mUnkc35900;
    ::ll::UntypedStorage<4, 4>   mUnkef119e;
    ::ll::UntypedStorage<1, 1>   mUnk471572;
    ::ll::UntypedStorage<1, 1>   mUnk94aa21;
    ::ll::UntypedStorage<8, 32>  mUnk74af99;
    ::ll::UntypedStorage<4, 4>   mUnkf0550e;
    ::ll::UntypedStorage<4, 12>  mUnk452a4e;
    ::ll::UntypedStorage<4, 4>   mUnk8b58c5;
    ::ll::UntypedStorage<1, 1>   mUnk6bc70d;
    ::ll::UntypedStorage<4, 4>   mUnk6cc47d;
    ::ll::UntypedStorage<4, 4>   mUnk938b91;
    ::ll::UntypedStorage<4, 4>   mUnk85d90d;
    ::ll::UntypedStorage<4, 4>   mUnkf745a7;
    ::ll::UntypedStorage<4, 4>   mUnkc1ed0b;
    ::ll::UntypedStorage<4, 4>   mUnk4bab4b;
    ::ll::UntypedStorage<4, 4>   mUnk143bb2;
    ::ll::UntypedStorage<1, 1>   mUnk917345;
    ::ll::UntypedStorage<1, 1>   mUnk20b7f7;
    ::ll::UntypedStorage<1, 1>   mUnk198d16;
    // NOLINTEND

public:
    // prevent constructor by default
    HolographicPlatform& operator=(HolographicPlatform const&);
    HolographicPlatform(HolographicPlatform const&);
    HolographicPlatform();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HolographicPlatform() = default;

    // vIndex: 1
    virtual void init(::std::shared_ptr<::Options>);

    // vIndex: 2
    virtual void preInitUpdate();

    // vIndex: 3
    virtual void update(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&);

    // vIndex: 4
    virtual void postRenderUpdate(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&);

    // vIndex: 5
    virtual void getSoundSystemOutputDevice(::SoundSystemGUID&);

    // vIndex: 6
    virtual void onAppFocusLost();

    // vIndex: 7
    virtual void onAppFocusGained();

    // vIndex: 8
    virtual void onAppSuspended();

    // vIndex: 9
    virtual void onAppResumed();

    // vIndex: 10
    virtual void onHMDFocusGained();

    // vIndex: 11
    virtual void onHMDFocusLost();

    // vIndex: 12
    virtual void onInitialResourcesLoaded();

    // vIndex: 13
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> waitForOutputMode(::VROutputMode);

    // vIndex: 14
    virtual bool useVRInputMode() const;

    // vIndex: 15
    virtual int getWorkerFramerate();

    // vIndex: 16
    virtual bool allowVRFrameExperience();

    // vIndex: 17
    virtual bool allowSplitScreen();

    // vIndex: 18
    virtual bool supportsLoadingScreen();

    // vIndex: 19
    virtual bool pauseIsDesired();

    // vIndex: 20
    virtual bool allowThirdPersonView();

    // vIndex: 21
    virtual bool useSinglePassStereo();

    // vIndex: 22
    virtual bool drawCubemapInMono();

    // vIndex: 23
    virtual bool isVRMode() const;

    // vIndex: 24
    virtual bool isARMode() const;

    // vIndex: 25
    virtual bool isRenderingIn2D() const;

    // vIndex: 26
    virtual bool isSessionVisible() const;

    // vIndex: 27
    virtual bool needsPostRenderUpdate() const;

    // vIndex: 28
    virtual bool deviceHasPositionalTracking();

    // vIndex: 29
    virtual bool deviceNeedsToBeRemovedForXblSignin();

    // vIndex: 30
    virtual bool deviceNeedsToBeRemovedForSkinPicker();

    // vIndex: 31
    virtual bool deviceNeedsToBeRemovedForFilePicker();

    // vIndex: 32
    virtual ::VRHUDPosition getDefaultVRHUDPosition() const;

    // vIndex: 33
    virtual void setUndockHandler(::std::function<void()>);

    // vIndex: 34
    virtual int numRequiredControllers();

    // vIndex: 35
    virtual ::std::string getPlatformRecalibrationMessage() const;

    // vIndex: 36
    virtual ::std::string getPlatformRecalibrationMessageTTS(::GamePadRemappingLayout const&) const;

    // vIndex: 37
    virtual ::std::string getPlatformAlignmentPrompt(::InputMode) const;

    // vIndex: 38
    virtual ::std::string getPlatformAlignmentPromptTTS(::GamePadRemappingLayout const&, ::InputMode) const;

    // vIndex: 39
    virtual bool forceControllerUsage() const;

    // vIndex: 40
    virtual bool separateEyePasses() const;

    // vIndex: 41
    virtual void createRenderGraph(::mce::RenderGraph&, ::IClientInstance&);

    // vIndex: 42
    virtual bool isGazeDevicePresent();

    // vIndex: 43
    virtual bool isGestureDevicePresent();

    // vIndex: 44
    virtual bool useAlternateTouchInput();

    // vIndex: 45
    virtual void resetBaseFrameOfReference(float, bool);

    // vIndex: 46
    virtual ::HolographicPlatform::LUID getHoloDeviceAdapterLUID();

    // vIndex: 47
    virtual void captureRenderDevice();

    // vIndex: 48
    virtual bool isLocated();

    // vIndex: 49
    virtual bool isPrimaryHandHeld();

    // vIndex: 50
    virtual bool isSecondaryHandHeld();

    // vIndex: 52
    virtual void setScreenLocation(::Vec3 const&, ::Vec3 const*, float);

    // vIndex: 51
    virtual void setScreenLocation(::Matrix const&);

    // vIndex: 53
    virtual void setHeadlockedUITransform(::Matrix const&, float const);

    // vIndex: 54
    virtual void setScreenLocationOffset(::Vec3 const&);

    // vIndex: 55
    virtual void resetScreenLocationOffset();

    // vIndex: 57
    virtual void setHoloviewerLocation(::Vec3 const&, ::Vec3 const*, float, bool);

    // vIndex: 56
    virtual void setHoloviewerLocation(::Matrix const&);

    // vIndex: 58
    virtual void setRealityAnchorLocation(::Matrix const&);

    // vIndex: 59
    virtual float getViewableScreenSize(float);

    // vIndex: 60
    virtual void defaultLSRPlane(::HolographicPlatform::MCLocation);

    // vIndex: 61
    virtual void updateLSRPlane(::HolographicPlatform::MCLocation, ::Vec3 const&);

    // vIndex: 62
    virtual void getLastLSRPlanePosAndNormPS(::Vec3&, ::Vec3&);

    // vIndex: 63
    virtual float getSRCastDistance();

    // vIndex: 64
    virtual bool startEnvironmentScanning();

    // vIndex: 65
    virtual void stopEnvironmentScanning();

    // vIndex: 66
    virtual void resetEnvironmentScan();

    // vIndex: 67
    virtual void renderSRData(float, float);

    // vIndex: 68
    virtual bool hideCursorOnFocusLost(::IClientInstance&) const;

    // vIndex: 69
    virtual bool getGazeCastResultPS(::Vec3&, ::Vec3&, ::Vec3&);

    // vIndex: 70
    virtual bool getStereoEnabled();

    // vIndex: 71
    virtual void setStereoEnabled(bool);

    // vIndex: 72
    virtual void delayForNextFingerPress(int);

    // vIndex: 73
    virtual float getPreferredUIAspectRatio();

    // vIndex: 74
    virtual float getPreferredLivingRoomLevelAspectRation();

    // vIndex: 75
    virtual float getVRFOV() const;

    // vIndex: 76
    virtual float getDefaultIngameUIDistance();

    // vIndex: 77
    virtual bool shouldCompressHUDWidth() const;

    // vIndex: 78
    virtual void getUIScreenWidthHeightScale(uint&, uint&, float&);

    // vIndex: 79
    virtual void getLivingRoomLevelTextureWidthHeight(uint&, uint&, float&);

    // vIndex: 80
    virtual void getItemInHandOffset(::Vec3&);

    // vIndex: 81
    virtual ::std::string const getLivingRoomHintText(::std::string const&) const;

    // vIndex: 82
    virtual ::UIRenderMode getUIRenderMode();

    // vIndex: 83
    virtual ::UIRenderMode getVRHUDRenderMode();

    // vIndex: 84
    virtual float getHudAlphaBlendFactor() const;

    // vIndex: 85
    virtual bool getVRLowFrequencyHUD();

    // vIndex: 86
    virtual char const* getHandMaterial() const;

    // vIndex: 87
    virtual bool wantsToStealMouse();

    // vIndex: 88
    virtual bool drawHolographicBordersForUI();

    // vIndex: 89
    virtual float getDefaultHalfHoloScreenWidth();

    // vIndex: 90
    virtual float getDefaultHalfHoloHUDWidth();

    // vIndex: 91
    virtual float getAmbientBoost(float);

    // vIndex: 92
    virtual bool clampToMinimumLight();

    // vIndex: 93
    virtual void setUIClipRect(::RectangleArea const&);

    // vIndex: 94
    virtual float getUIClipGrowPixels();

    // vIndex: 95
    virtual bool isFeatureEnabled(uint);

    // vIndex: 96
    virtual ::std::optional<::MFC::VrConfiguration> getVrConfiguration();

    // vIndex: 97
    virtual void frameUpdate(::FrameUpdateContext&);

    // vIndex: 98
    virtual ushort getLivingRoomViewSetId() const;

    // vIndex: 99
    virtual ::mce::framebuilder::LivingRoomDescription const* getLivingRoomDescription() const;

    // vIndex: 100
    virtual float getMinimumLivingRoomFrameDistance();

    // vIndex: 101
    virtual bool neverStealMouse();

    // vIndex: 102
    virtual bool present(::ScreenContext&);

    // vIndex: 103
    virtual bool isWaitingForPresent() const;

    // vIndex: 104
    virtual bool getAllowMirrorPresent();

    // vIndex: 105
    virtual bool permitRendering();

    // vIndex: 106
    virtual bool permitAudio();

    // vIndex: 107
    virtual void _prepPlatformSpecificTransforms();

    // vIndex: 108
    virtual bool _shouldRenderIn2D() const;
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
