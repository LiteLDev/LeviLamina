#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/oreui/input/InputMethod.h"
#include "mc/client/social/MultiplayerServiceIdentifier.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/file/StorageAreaStateListener.h"
#include "mc/deps/core/platform/FileStorageDirectory.h"
#include "mc/deps/core/platform/OperationMode.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IAppPlatform;
class IClientInstance;
class IContentManager;
namespace OreUI { class IStorageInfoUpdater; }
// clang-format on

namespace OreUI {

class DeviceInformationFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::DeviceInformationFacet>,
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
    ::ll::TypedStorage<4, 4, int>                                                    mDefaultNetworkMaxPlayers;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                mStorageUpdateTime;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::IStorageInfoUpdater>>        mStorageInfoUpdater;
    ::ll::TypedStorage<4, 4, ::FileStorageDirectory>                                 mStorageType;
    ::ll::TypedStorage<4, 12, ::OreUI::FacetTaskTracker<::std::monostate>>           mChangeStorageTask;
    ::ll::TypedStorage<8, 24, ::std::vector<::Social::MultiplayerServiceIdentifier>> mActiveServices;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                       mDeleteContentSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceInformationFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeviceInformationFacet() /*override*/ = default;

    virtual bool update() /*override*/;

    virtual void onOperationModeChanged(::OperationMode operationMode) /*override*/;

    virtual void onLowDiskSpace(bool const) /*override*/;

    virtual void onOutOfDiskSpace(bool const) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DeviceInformationFacet(
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::IClientInstance>()> getClientInstance,
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&                   appPlatform,
        ::IContentManager&                                                  contentManager,
        ::std::unique_ptr<::OreUI::IStorageInfoUpdater>                     storageInfoUpdater
    );
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
        ::IContentManager&                                                  contentManager,
        ::std::unique_ptr<::OreUI::IStorageInfoUpdater>                     storageInfoUpdater
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
