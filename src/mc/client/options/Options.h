#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/input/KeyboardType.h"
#include "mc/client/options/BaseOptions.h"
#include "mc/client/options/IOptions.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/VRControllerType.h"
#include "mc/deviceinfo/DeviceMemoryTier.h"
#include "mc/options/GraphicsMode.h"
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

class Options : public ::BaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf5f65e;
    ::ll::UntypedStorage<8, 32> mUnk904fa0;
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
    ::ll::UntypedStorage<4, 4>  mUnk23ba8d;
    ::ll::UntypedStorage<4, 4>  mUnk8f9ddd;
    ::ll::UntypedStorage<4, 4>  mUnkf45021;
    ::ll::UntypedStorage<4, 4>  mUnkfb7113;
    ::ll::UntypedStorage<4, 4>  mUnk8a28e3;
    ::ll::UntypedStorage<8, 24> mUnkdc670b;
    ::ll::UntypedStorage<8, 24> mUnk33bec3;
    ::ll::UntypedStorage<8, 24> mUnk727e15;
    ::ll::UntypedStorage<8, 24> mUnked4d9d;
    ::ll::UntypedStorage<4, 4>  mUnk15219e;
    ::ll::UntypedStorage<8, 24> mUnk11e2d9;
    ::ll::UntypedStorage<8, 32> mUnkdbbaf4;
    ::ll::UntypedStorage<8, 8>  mUnk28ffbf;
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
    // NOLINTEND

public:
    // prevent constructor by default
    Options& operator=(Options const&);
    Options(Options const&);
    Options();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Options() /*override*/ = default;

    // vIndex: 2
    virtual void load(::Core::PathBuffer<::std::string>) /*override*/;

    // vIndex: 3
    virtual void tickSaveTimer() /*override*/;

    // vIndex: 4
    virtual void notifySaveAllowed() /*override*/;

    // vIndex: 5
    virtual void saveIfNeeded() /*override*/;

    // vIndex: 6
    virtual ::OptionSaveDeferral requestSaveDeferral() /*override*/;

    // vIndex: 7
    virtual void reset(::OptionResetFlags, ::InputMode) /*override*/;

    // vIndex: 8
    virtual bool getPrimaryUserStatus() const /*override*/;

    // vIndex: 9
    virtual void
    setClientInstanceCoordinator(::Bedrock::NonOwnerPointer<::ClientInstanceEventCoordinator> const&) /*override*/;

    // vIndex: 51
    virtual ::FileStorageDirectory getFileStorageLocation() const /*override*/;

    // vIndex: 50
    virtual void setFileStorageLocation(::FileStorageDirectory, ::std::function<void(bool)>) /*override*/;

    // vIndex: 10
    virtual void onScreenSizeChanged(int, int) /*override*/;

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

    // vIndex: 16
    virtual void getTelemetryOptions(::std::vector<::OptionID>&) /*override*/;

    // vIndex: 17
    virtual void refreshRenderDistanceLevels() /*override*/;

    // vIndex: 18
    virtual bool isLoadInProgress() /*override*/;

    // vIndex: 19
    virtual void addObserver(::OptionsObserver&) /*override*/;

    // vIndex: 20
    virtual void loadOptionsFromString(::std::string) /*override*/;

    // vIndex: 21
    virtual void elevateSaveRequestMode(::IOptions::SaveRequestMode) /*override*/;

    // vIndex: 23
    virtual ::ChatOptions const& getChatOptions() const /*override*/;

    // vIndex: 22
    virtual ::ChatOptions& getChatOptions() /*override*/;

    // vIndex: 24
    virtual ::std::array<::std::unique_ptr<::Option>, 788> const& getAllRegisteredOptions() /*override*/;

    // vIndex: 25
    virtual void forEachOption(::std::function<void(::Option*)>) /*override*/;

    // vIndex: 54
    virtual int getViewDistanceChunks() const /*override*/;

    // vIndex: 55
    virtual int getDefaultViewDistanceChunks(bool, ::GraphicsMode) const /*override*/;

    // vIndex: 56
    virtual int getMaxViewDistanceChunks() const /*override*/;

    // vIndex: 57
    virtual int getMaxViewDistanceChunksRaw() const /*override*/;

    // vIndex: 83
    virtual bool getVRMirrorTexture() /*override*/;

    // vIndex: 93
    virtual bool getRayTracing() const /*override*/;

    // vIndex: 94
    virtual bool getDeferred() const /*override*/;

    // vIndex: 105
    virtual ::GamePadRemappingLayout& getGamePadRemappingByType(::VRControllerType) /*override*/;

    // vIndex: 106
    virtual ::std::shared_ptr<::KeyboardRemappingLayout> getCurrentKeyboardRemapping() const /*override*/;

    // vIndex: 107
    virtual ::std::shared_ptr<::KeyboardRemappingLayout> getKeyboardRemappingByType(::KeyboardType) const /*override*/;

    // vIndex: 108
    virtual ::GamePadRemappingLayout& getMotionControllerRemapping() /*override*/;

    // vIndex: 109
    virtual void setLanguage(::std::string const&) /*override*/;

    // vIndex: 110
    virtual ::std::string getLanguage() const /*override*/;

    // vIndex: 136
    virtual void setPlayerViewPerspective(int) /*override*/;

    // vIndex: 151
    virtual void setOverrideUsername(::std::string const&) /*override*/;

    // vIndex: 152
    virtual bool hasOverrideUsername() const /*override*/;

    // vIndex: 153
    virtual ::std::string const& getDisplayedUsername() const /*override*/;

    // vIndex: 158
    virtual void setRecentSkinIds(::std::vector<::std::string> const&) /*override*/;

    // vIndex: 159
    virtual ::std::vector<::std::string> const& getRecentSkinIds() /*override*/;

    // vIndex: 351
    virtual float getDefaultPlatformSafeZoneX() const /*override*/;

    // vIndex: 352
    virtual float getDefaultPlatformSafeZoneY() const /*override*/;

    // vIndex: 353
    virtual bool getServerboundClientDiagnosticsEnabled() const /*override*/;

    // vIndex: 354
    virtual ::ScriptDebuggerSettings getScriptDebuggerSettings() const /*override*/;

    // vIndex: 355
    virtual ::Scripting::WatchdogSettings getScriptWatchdogSettings() const /*override*/;

    // vIndex: 88
    virtual ::GraphicsMode getGraphicsMode() const /*override*/;

    // vIndex: 95
    virtual int getGraphicsQualityPresetMode() const /*override*/;

    // vIndex: 371
    virtual void setSaveDeferralCount(int) /*override*/;

    // vIndex: 372
    virtual int getSaveDeferralCount() const /*override*/;

    // vIndex: 373
    virtual ::std::optional<::DeviceMemoryTier> getScriptingMemoryTierOverride() const /*override*/;
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
