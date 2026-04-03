#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/ObservableValue.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/gui/oreui/input/InputMethod.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/file/StorageAreaStateListener.h"
#include "mc/deps/core/platform/OperationMode.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IClientInstance;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class DeviceInformationQuery : public ::OreUI::QueryBase<::OreUI::DeviceInformationQuery>,
                               public ::Core::StorageAreaStateListener,
                               public ::AppPlatformListener {
public:
    // DeviceInformationQuery inner types define
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
        Unknown        = 11,
    };

    using PlatformPtr = ::Bedrock::NonOwnerPointer<::AppPlatform>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IClientInstance>>                    mClient;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::AppPlatform>>                        mAppPlatform;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::DeviceInformationQuery::Platform>> mPlatform;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<
            ::OreUI::InputMethod,
            ::std::allocator<::OreUI::Detail::ObservableValue<::OreUI::InputMethod>>>>
        mInputMethods;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceInformationQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DeviceInformationQuery() /*override*/;

    virtual void onOperationModeChanged(::OperationMode operationMode) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DeviceInformationQuery(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);

    MCAPI void _updateInputMethods();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $onOperationModeChanged(::OperationMode operationMode);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForAppPlatformListener();

    MCNAPI static void** $vftableForStorageAreaStateListener();
    // NOLINTEND
};

} // namespace OreUI
