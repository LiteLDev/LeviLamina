#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IClientInstance;
// clang-format on

namespace OreUI::Experimental {

class DeviceDisplayInformationQuery
: public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::DeviceDisplayInformationQuery>,
  public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mSplitScreenToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mSplitScreenScaleToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mScaleToken;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::AppPlatform>>     mAppPlatform;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IClientInstance>> mClient;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<uint64>>   mDisplayWidth;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<uint64>>   mDisplayHeight;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<uint64>>   mGuiScaleModifier;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<uint64>>   mGuiScaleBase;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<float>>    mPixelsPerMillimeter;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void onResizeEnd() /*override*/;

    virtual ~DeviceDisplayInformationQuery() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI::Experimental
