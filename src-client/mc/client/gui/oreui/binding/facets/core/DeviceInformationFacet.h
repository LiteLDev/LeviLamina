#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/input/InputMethod.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/platform/OperationMode.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAppPlatform;
class IClientInstance;
// clang-format on

namespace OreUI {

class DeviceInformationFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::DeviceInformationFacet>,
                               public ::AppPlatformListener {
public:
    // DeviceInformationFacet inner types define
    enum class Platform : uchar {
        IOS             = 0,
        Google          = 1,
        AmazonHandheld  = 2,
        UwpGdkPc        = 3,
        Xbox            = 4,
        NxHandheld      = 5,
        Ps4             = 6,
        Win32           = 7,
        MacOS           = 8,
        NxConsole       = 9,
        Ps5             = 10,
        Switch2Handheld = 11,
        Switch2Console  = 12,
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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DeviceInformationFacet(
        ::std::function<::Bedrock::NotNullNonOwnerPtr<::IClientInstance>()> getClientInstance,
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&                   appPlatform
    );

    MCFOLD ::std::vector<::OreUI::InputMethod> const& getInputMethods() const;

    MCFOLD bool getIsLowMemoryDevice() const;

    MCFOLD ::OreUI::DeviceInformationFacet::Platform getPlatform() const;
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
        ::Bedrock::NonOwnerPointer<::IAppPlatform> const&                   appPlatform
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();

    MCAPI void $onOperationModeChanged(::OperationMode operationMode);
    // NOLINTEND
};

} // namespace OreUI
