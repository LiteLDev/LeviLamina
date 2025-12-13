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
    ::ll::UntypedStorage<4, 4>  mUnk8f9ddd;
    ::ll::UntypedStorage<4, 4>  mUnkf45021;
    ::ll::UntypedStorage<8, 24> mUnkdc670b;
    ::ll::UntypedStorage<8, 24> mUnk727e15;
    ::ll::UntypedStorage<8, 24> mUnked4d9d;
    ::ll::UntypedStorage<4, 4>  mUnk15219e;
    ::ll::UntypedStorage<8, 24> mUnk11e2d9;
    ::ll::UntypedStorage<8, 8>  mUnk9db756;
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
    ::ll::UntypedStorage<4, 4>  mUnk6814ff;
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

    // vIndex: 16
    virtual void load(::Core::PathBuffer<::std::string>) /*override*/;

    // vIndex: 17
    virtual void tickSaveTimer() /*override*/;

    // vIndex: 18
    virtual void notifySaveAllowed() /*override*/;

    // vIndex: 19
    virtual void saveIfNeeded() /*override*/;

    // vIndex: 20
    virtual ::OptionSaveDeferral requestSaveDeferral() /*override*/;

    // vIndex: 21
    virtual void reset(::OptionResetFlags, ::InputMode) /*override*/;

    // vIndex: 22
    virtual bool getPrimaryUserStatus() const /*override*/;

    // vIndex: 23
    virtual void
    setClientInstanceCoordinator(::Bedrock::NonOwnerPointer<::ClientInstanceEventCoordinator> const&) /*override*/;

    // vIndex: 62
    virtual ::FileStorageDirectory getFileStorageLocation() const /*override*/;

    // vIndex: 61
    virtual void setFileStorageLocation(::FileStorageDirectory, ::std::function<void(bool)>) /*override*/;

    // vIndex: 24
    virtual void onScreenSizeChanged(int, int) /*override*/;

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

    // vIndex: 29
    virtual void getTelemetryOptions(::std::vector<::OptionID>&) /*override*/;

    // vIndex: 30
    virtual void refreshRenderDistanceLevels() /*override*/;

    // vIndex: 31
    virtual bool isLoadInProgress() /*override*/;

    // vIndex: 32
    virtual void addObserver(::OptionsObserver&) /*override*/;

    // vIndex: 33
    virtual void loadOptionsFromString(::std::string) /*override*/;

    // vIndex: 34
    virtual void elevateSaveRequestMode(::IOptions::SaveRequestMode) /*override*/;

    // vIndex: 36
    virtual ::ChatOptions const& getChatOptions() const /*override*/;

    // vIndex: 35
    virtual ::ChatOptions& getChatOptions() /*override*/;

    // vIndex: 37
    virtual ::std::array<::std::unique_ptr<::Option>, 772> const& getAllRegisteredOptions() /*override*/;

    // vIndex: 38
    virtual void forEachOption(::std::function<void(::Option*)>) /*override*/;

    // vIndex: 64
    virtual int getViewDistanceChunks() const /*override*/;

    // vIndex: 65
    virtual int getDefaultViewDistanceChunks(::GraphicsMode) const /*override*/;

    // vIndex: 10
    virtual int getMaxViewDistanceChunks() const /*override*/;

    // vIndex: 66
    virtual int getMaxViewDistanceChunksRaw() const /*override*/;

    // vIndex: 80
    virtual bool getRayTracing() const /*override*/;

    // vIndex: 81
    virtual bool getDeferred() const /*override*/;

    // vIndex: 93
    virtual ::GamePadRemappingLayout& getGamePadRemapping() /*override*/;

    // vIndex: 94
    virtual ::std::shared_ptr<::KeyboardRemappingLayout> getCurrentKeyboardRemapping() const /*override*/;

    // vIndex: 95
    virtual ::std::shared_ptr<::KeyboardRemappingLayout> getKeyboardRemappingByType(::KeyboardType) const /*override*/;

    // vIndex: 96
    virtual void setLanguage(::std::string const&) /*override*/;

    // vIndex: 97
    virtual ::std::string getLanguage() const /*override*/;

    // vIndex: 123
    virtual void setPlayerViewPerspective(int) /*override*/;

    // vIndex: 140
    virtual void setRecentSkinIds(::std::vector<::std::string> const&) /*override*/;

    // vIndex: 141
    virtual ::std::vector<::std::string> const& getRecentSkinIds() /*override*/;

    // vIndex: 323
    virtual float getDefaultPlatformSafeZoneX() const /*override*/;

    // vIndex: 324
    virtual float getDefaultPlatformSafeZoneY() const /*override*/;

    // vIndex: 325
    virtual bool getServerboundClientDiagnosticsEnabled() const /*override*/;

    // vIndex: 326
    virtual ::ScriptDebuggerSettings getScriptDebuggerSettings() const /*override*/;

    // vIndex: 327
    virtual ::Scripting::WatchdogSettings getScriptWatchdogSettings() const /*override*/;

    // vIndex: 11
    virtual ::GraphicsMode getGraphicsMode() const /*override*/;

    // vIndex: 82
    virtual int getGraphicsQualityPresetMode() const /*override*/;

    // vIndex: 83
    virtual int getDeferredTargetFrameRate() const /*override*/;

    // vIndex: 343
    virtual void setSaveDeferralCount(int) /*override*/;

    // vIndex: 344
    virtual int getSaveDeferralCount() const /*override*/;

    // vIndex: 9
    virtual ::std::optional<::DeviceMemoryTier> getScriptingMemoryTierOverride() const /*override*/;

    // vIndex: 345
    virtual void setForceVibrantVisualsDisabled(bool) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
