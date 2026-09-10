#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IClientInstance;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class DeviceDisplayInformationQuery : public ::OreUI::QueryBase<::OreUI::DeviceDisplayInformationQuery>,
                                      public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mSplitScreenToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mGuiScaleChangedToken;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::AppPlatform>>     mAppPlatform;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IClientInstance>> mClient;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                    mDisplayWidth;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                    mDisplayHeight;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                    mGuiScaleModifier;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                    mGuiScaleBase;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<float>>                  mPixelsPerMillimeter;
    // NOLINTEND

public:
    // prevent constructor by default
    DeviceDisplayInformationQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onResizeEnd() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    DeviceDisplayInformationQuery(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);

    MCAPI void _updateProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onResizeEnd();
    // NOLINTEND
};

} // namespace OreUI
