#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/binding/FacetTaskState.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/binding/facets/core/InputMethod.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/file/StorageAreaStateListener.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"
#include "mc/deps/core/platform/OperationMode.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAppPlatform;
class IClientInstance;
namespace OreUI { class IStorageInfoUpdater; }
// clang-format on

namespace OreUI {

class DeviceInformationFacet : public ::OreUI::FacetBase<::OreUI::DeviceInformationFacet>,
                               public ::Core::StorageAreaStateListener,
                               public ::AppPlatformListener {
public:
    // DeviceInformationFacet inner types define
    enum class Platform : uchar {
        IOS            = 0,
        Google         = 1,
        AmazonHandheld = 2,
        UwpGdkPc       = 3,
        Xbox           = 4,
        NxHandheld     = 5,
        Ps4            = 6,
        Win32          = 7,
        MacOS          = 8,
        NxConsole      = 9,
        Ps5            = 10,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                                 mIsDirty;
    ::ll::TypedStorage<8, 64, ::std::function<::Bedrock::NotNullNonOwnerPtr<::IClientInstance>()>> mGetClientInstance;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IAppPlatform const>>                    mAppPlatform;
    ::ll::TypedStorage<1, 1, ::OreUI::DeviceInformationFacet::Platform>                            mPlatform;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::InputMethod>>                                 mInputMethods;
    ::ll::TypedStorage<1, 1, bool>                                                                 mIsLowMemoryDevice;
    ::ll::TypedStorage<4, 4, float>                                                                mPixelsPerMillimeter;
    ::ll::TypedStorage<8, 8, uint64>                                                               mStorageSize;
    ::ll::TypedStorage<8, 8, uint64>                                                               mStorageUsed;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mStorageAvailableSize;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsStorageFull;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsStorageLow;
    ::ll::TypedStorage<1, 1, bool>                                                   mSupportsSizeQuery;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsOnline;
    ::ll::TypedStorage<1, 1, bool>                                                   mCellularDataFee;
    ::ll::TypedStorage<1, 1, bool>                                                   mSupportsManualAddedServers;
    ::ll::TypedStorage<1, 1, bool>                                                   mIsLANAllowed;
    ::ll::TypedStorage<4, 4, int>                                                    mDisplayWidth;
    ::ll::TypedStorage<4, 4, int>                                                    mDisplayHeight;
    ::ll::TypedStorage<4, 4, int>                                                    mGuiScale;
    ::ll::TypedStorage<4, 4, int>                                                    mGuiScaleModifier;
    ::ll::TypedStorage<4, 4, int>                                                    mGuiScaleBase;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                mStorageUpdateTime;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::IStorageInfoUpdater>>        mStorageInfoUpdater;
    ::ll::TypedStorage<4, 4, ::FileStorageDirectory>                                 mStorageType;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::std::monostate>>           mChangeStorageTask;
    ::ll::TypedStorage<8, 24, ::std::vector<::Social::MultiplayerServiceIdentifier>> mActiveServices;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceInformationFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeviceInformationFacet() /*override*/;

    virtual bool update() /*override*/;

    virtual void onOperationModeChanged(::OperationMode operationMode) /*override*/;

    virtual void onLowDiskSpace(bool const bSet) /*override*/;

    virtual void onOutOfDiskSpace(bool const bSet) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DeviceInformationFacet(
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::IClientInstance>()> getClientInstance,
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&                   appPlatform,
        ::std::unique_ptr<::OreUI::IStorageInfoUpdater>                     storageInfoUpdater
    );

    MCAPI void _checkCellularDataFee();

    MCAPI void _fillInputMethods();

    MCAPI void _fillStorageInfo();

    MCAPI void changeStorage();

    MCFOLD ::std::vector<::Social::MultiplayerServiceIdentifier> const& getActiveMultiplayerServiceIds() const;

    MCFOLD ::OreUI::FacetTaskState getChangeStorageProgress() const;

    MCAPI int getDisplayHeight() const;

    MCAPI int getDisplayWidth() const;

    MCFOLD int getGuiScaleBase() const;

    MCFOLD int getGuiScaleModifier() const;

    MCAPI ::std::vector<::OreUI::InputMethod> const& getInputMethods() const;

    MCAPI bool getIsLowMemoryDevice() const;

    MCAPI float getPixelsPerMillimeter() const;

    MCFOLD ::OreUI::DeviceInformationFacet::Platform getPlatform() const;

    MCFOLD ::std::string const& getStorageAvailableSize() const;

    MCAPI uint64 getStorageSize() const;

    MCFOLD ::FileStorageDirectory getStorageType() const;

    MCFOLD uint64 getStorageUsed() const;

    MCAPI bool getSupportsSizeQuery() const;

    MCAPI bool isLANAllowed() const;

    MCAPI bool isOnline() const;

    MCAPI bool isStorageFull() const;

    MCAPI bool isStorageLow() const;

    MCAPI bool onlyCellularAvailable() const;

    MCAPI bool showCellularDataFee() const;

    MCAPI bool supportsManualAddedServers() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::IClientInstance>()> getClientInstance,
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&                   appPlatform,
        ::std::unique_ptr<::OreUI::IStorageInfoUpdater>                     storageInfoUpdater
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();

    MCAPI void $onOperationModeChanged(::OperationMode operationMode);

    MCFOLD void $onLowDiskSpace(bool const bSet);

    MCFOLD void $onOutOfDiskSpace(bool const bSet);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForFacetBase();

    MCNAPI static void** $vftableForAppPlatformListener();

    MCNAPI static void** $vftableForStorageAreaStateListener();
    // NOLINTEND
};

} // namespace OreUI
