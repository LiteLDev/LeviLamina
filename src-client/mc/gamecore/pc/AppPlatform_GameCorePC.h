#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/ClipboardFeatureFlags.h"
#include "mc/deps/application/OsVersion.h"
#include "mc/deps/core/debug/AssertDialogResponse.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/platform/PlatformType.h"
#include "mc/deps/core/platform/UIScalingRules.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/input/PointerType.h"
#include "mc/gamecore/AppPlatform_GameCore.h"

// auto generated forward declare list
// clang-format off
class FilePickerSettings;
class ImagePickingCallback;
class RectangleArea;
namespace Core { class Path; }
// clang-format on

class AppPlatform_GameCorePC : public ::AppPlatform_GameCore {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkbde1f9;
    ::ll::UntypedStorage<8, 8>  mUnkfbcc2c;
    ::ll::UntypedStorage<8, 8>  mUnkc2204d;
    ::ll::UntypedStorage<8, 8>  mUnka8c638;
    ::ll::UntypedStorage<1, 1>  mUnk587e2e;
    ::ll::UntypedStorage<1, 1>  mUnk15dc10;
    // NOLINTEND

public:
    // prevent constructor by default
    AppPlatform_GameCorePC& operator=(AppPlatform_GameCorePC const&);
    AppPlatform_GameCorePC(AppPlatform_GameCorePC const&);
    AppPlatform_GameCorePC();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AppPlatform_GameCorePC() /*override*/ = default;

    virtual void showKeyboard(
        ::std::string const&,
        int,
        bool,
        bool,
        bool,
        int const,
        ::glm::vec2 const&,
        float,
        ::InputMode
    ) /*override*/;

    virtual void hideKeyboard() /*override*/;

    virtual void updateTextEditBoxPosition(
        ::RectangleArea const& controlPosition,
        ::RectangleArea const& selectionPosition,
        float const            guiScale
    ) /*override*/;

    virtual float getKeyboardHeight() const /*override*/;

    virtual bool isMouseInsideClient() const /*override*/;

    virtual bool canScroll() const /*override*/;

    virtual bool isRemoteSession() const /*override*/;

    virtual bool isMouseClickLockEnabled() const /*override*/;

    virtual bool isMouseSonarEnabled() const /*override*/;

    virtual uint getMouseClickLockTime() const /*override*/;

    virtual void hideMousePointer() /*override*/;

    virtual void showMousePointer() /*override*/;

    virtual void setMousePointerType(::Bedrock::Input::PointerType) /*override*/;

    virtual void toggleSimulateTouchWithMouse() /*override*/;

    virtual int getDisplayWidth() /*override*/;

    virtual int getDisplayHeight() /*override*/;

    virtual void screenToClient(int&, int&) const /*override*/;

    virtual ::std::string getTextBoxBackend() const /*override*/;

    virtual void setTextBoxBackend(::std::string const&) /*override*/;

    virtual int getCaretPosition() const /*override*/;

    virtual void setCaretPosition(int) /*override*/;

    virtual ::ClipboardFeatureFlags getClipboardFeatures() const /*override*/;

    virtual void setClipboard(::std::string const&) const /*override*/;

    virtual ::std::wstring getClipboardText() const /*override*/;

    virtual bool allowSplitScreen() /*override*/;

    virtual bool allowsResourcePackDevelopment() const /*override*/;

    virtual bool supportsFilePicking() const /*override*/;

    virtual bool supportsShare() const /*override*/;

    virtual void share() const /*override*/;

    virtual void shareFile(::Core::Path const&, ::std::function<void(bool)>) /*override*/;

    virtual void pickImage(::std::shared_ptr<::ImagePickingCallback>) /*override*/;

    virtual void pickFile(::std::shared_ptr<::FilePickerSettings>) /*override*/;

    virtual auto getModalErrorMessageProc()
        -> ::AssertDialogResponse (*)(::std::string const&, ::std::string const&) /*override*/;

    virtual ::OsVersion getOSVersion() const /*override*/;

    virtual ::PlatformType getPlatformType() const /*override*/;

    virtual ::BuildPlatform getBuildPlatform() const /*override*/;

    virtual ::std::string getPlatformString() const /*override*/;

    virtual ::std::string getSubPlatformString() const /*override*/;

    virtual ::std::string getClientUpdateUrl() const /*override*/;

    virtual ::std::string getEdition() const /*override*/;

    virtual ::std::string getModelName() /*override*/;

    virtual bool devHotReloadRenderResources() const /*override*/;

    virtual bool delayOptionSaveUntilCloudSync() const /*override*/;

    virtual bool requiresXboxLiveSigninToPlay() const /*override*/;

    virtual bool requiresLiveGoldForMultiplayer() const /*override*/;

    virtual void onMinecraftGameInitComplete() /*override*/;

    virtual bool isHandheldDevice() const /*override*/;

    virtual bool getSimulateTouchWithMouse() const /*override*/;

    virtual float getDefaultSafeZoneScaleX() const /*override*/;

    virtual float getDefaultSafeZoneScaleY() const /*override*/;

    virtual float getDefaultSafeZoneScaleAll() const /*override*/;

    virtual float getDefaultScreenPositionX() const /*override*/;

    virtual float getDefaultScreenPositionY() const /*override*/;

    virtual void _initializeFileStorageAreas() /*override*/;

    virtual ::Core::PathBuffer<::std::string> _getUserFolderFromXUID(::std::string_view) /*override*/;

    virtual void _retrieveSavedWindowSize(::tagRECT&) /*override*/;

    virtual void _onInitialize() /*override*/;

    virtual bool isInvertScrollEnabled() const /*override*/;

    virtual ::UIScalingRules getPlatformUIScalingRules() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
