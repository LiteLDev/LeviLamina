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
namespace Bedrock { class Platform_GameCore; }
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
        ::std::string const& currentText,
        int                  maxLength,
        bool                 limitInput,
        bool                 numbersOnly,
        bool                 isMultiline,
        int const            controllerId,
        ::glm::vec2 const&   position,
        float                controlHeight,
        ::InputMode          inputMode
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

    virtual void setMousePointerType(::Bedrock::Input::PointerType pointerType) /*override*/;

    virtual void toggleSimulateTouchWithMouse() /*override*/;

    virtual int getDisplayWidth() /*override*/;

    virtual int getDisplayHeight() /*override*/;

    virtual void screenToClient(int& x, int& y) const /*override*/;

    virtual ::std::string getTextBoxBackend() const /*override*/;

    virtual void setTextBoxBackend(::std::string const& newText) /*override*/;

    virtual int getCaretPosition() const /*override*/;

    virtual void setCaretPosition(int position) /*override*/;

    virtual ::ClipboardFeatureFlags getClipboardFeatures() const /*override*/;

    virtual void setClipboard(::std::string const& value) const /*override*/;

    virtual ::std::wstring getClipboardText() const /*override*/;

    virtual bool allowSplitScreen() /*override*/;

    virtual bool allowsResourcePackDevelopment() const /*override*/;

    virtual bool supportsFilePicking() const /*override*/;

    virtual bool supportsShare() const /*override*/;

    virtual void share() const /*override*/;

    virtual void shareFile(::Core::Path const& path, ::std::function<void(bool)> onCompletionCallback) /*override*/;

    virtual void pickImage(::std::shared_ptr<::ImagePickingCallback> callback) /*override*/;

    virtual void pickFile(::std::shared_ptr<::FilePickerSettings> settings) /*override*/;

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

    virtual ::Core::PathBuffer<::std::string> _getUserFolderFromXUID(::std::string_view xuid) /*override*/;

    virtual void _retrieveSavedWindowSize(::tagRECT& size) /*override*/;

    virtual void _onInitialize() /*override*/;

    virtual bool isInvertScrollEnabled() const /*override*/;

    virtual ::UIScalingRules getPlatformUIScalingRules() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AppPlatform_GameCorePC(
        ::HWND__*                                      hWnd,
        ::std::string const&                           dataFolder,
        ::std::string_view                             appName,
        int                                            screenWidth,
        int                                            screenHeight,
        ::gsl::not_null<::Bedrock::Platform_GameCore*> platformGameCore
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::HWND__*                                      hWnd,
        ::std::string const&                           dataFolder,
        ::std::string_view                             appName,
        int                                            screenWidth,
        int                                            screenHeight,
        ::gsl::not_null<::Bedrock::Platform_GameCore*> platformGameCore
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $showKeyboard(
        ::std::string const& currentText,
        int                  maxLength,
        bool                 limitInput,
        bool                 numbersOnly,
        bool                 isMultiline,
        int const            controllerId,
        ::glm::vec2 const&   position,
        float                controlHeight,
        ::InputMode          inputMode
    );

    MCAPI void $hideKeyboard();

    MCAPI void $updateTextEditBoxPosition(
        ::RectangleArea const& controlPosition,
        ::RectangleArea const& selectionPosition,
        float const            guiScale
    );

    MCAPI float $getKeyboardHeight() const;

    MCAPI bool $isMouseInsideClient() const;

    MCAPI bool $canScroll() const;

    MCAPI bool $isRemoteSession() const;

    MCAPI bool $isMouseClickLockEnabled() const;

    MCAPI bool $isMouseSonarEnabled() const;

    MCAPI uint $getMouseClickLockTime() const;

    MCAPI void $hideMousePointer();

    MCAPI void $showMousePointer();

    MCAPI void $setMousePointerType(::Bedrock::Input::PointerType pointerType);

    MCAPI void $toggleSimulateTouchWithMouse();

    MCAPI int $getDisplayWidth();

    MCAPI int $getDisplayHeight();

    MCAPI void $screenToClient(int& x, int& y) const;

    MCAPI ::std::string $getTextBoxBackend() const;

    MCAPI void $setTextBoxBackend(::std::string const& newText);

    MCAPI int $getCaretPosition() const;

    MCAPI void $setCaretPosition(int position);

    MCFOLD ::ClipboardFeatureFlags $getClipboardFeatures() const;

    MCAPI void $setClipboard(::std::string const& value) const;

    MCAPI ::std::wstring $getClipboardText() const;

    MCFOLD bool $allowSplitScreen();

    MCFOLD bool $allowsResourcePackDevelopment() const;

    MCFOLD bool $supportsFilePicking() const;

    MCAPI bool $supportsShare() const;

    MCAPI void $share() const;

    MCAPI void $shareFile(::Core::Path const& path, ::std::function<void(bool)> onCompletionCallback);

    MCAPI void $pickImage(::std::shared_ptr<::ImagePickingCallback> callback);

    MCAPI void $pickFile(::std::shared_ptr<::FilePickerSettings> settings);

    MCFOLD auto $getModalErrorMessageProc() -> ::AssertDialogResponse (*)(::std::string const&, ::std::string const&);

    MCFOLD ::OsVersion $getOSVersion() const;

    MCFOLD ::PlatformType $getPlatformType() const;

    MCFOLD ::BuildPlatform $getBuildPlatform() const;

    MCAPI ::std::string $getPlatformString() const;

    MCAPI ::std::string $getSubPlatformString() const;

    MCAPI ::std::string $getClientUpdateUrl() const;

    MCAPI ::std::string $getEdition() const;

    MCAPI ::std::string $getModelName();

    MCFOLD bool $devHotReloadRenderResources() const;

    MCFOLD bool $delayOptionSaveUntilCloudSync() const;

    MCFOLD bool $requiresXboxLiveSigninToPlay() const;

    MCFOLD bool $requiresLiveGoldForMultiplayer() const;

    MCAPI void $onMinecraftGameInitComplete();

    MCAPI bool $isHandheldDevice() const;

    MCAPI bool $getSimulateTouchWithMouse() const;

    MCFOLD float $getDefaultSafeZoneScaleX() const;

    MCFOLD float $getDefaultSafeZoneScaleY() const;

    MCFOLD float $getDefaultSafeZoneScaleAll() const;

    MCFOLD float $getDefaultScreenPositionX() const;

    MCFOLD float $getDefaultScreenPositionY() const;

    MCAPI void $_initializeFileStorageAreas();

    MCAPI ::Core::PathBuffer<::std::string> $_getUserFolderFromXUID(::std::string_view xuid);

    MCAPI void $_retrieveSavedWindowSize(::tagRECT& size);

    MCAPI void $_onInitialize();

    MCAPI bool $isInvertScrollEnabled() const;

    MCFOLD ::UIScalingRules $getPlatformUIScalingRules() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForISecureStorageKeySystem();

    MCNAPI static void** $vftableForIAppPlatform();
    // NOLINTEND
};
