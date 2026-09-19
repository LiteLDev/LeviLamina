#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/minecraft/threading/EnableFIFOQueueForMainThread.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class ITTSEventManager;
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI {

class ScreenReaderQuery : public ::OreUI::QueryBase<::OreUI::ScreenReaderQuery>,
                          public ::Bedrock::Threading::EnableFIFOQueueForMainThread {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ITTSEventManager>> mTTSEventManager;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>      mIsChatTextToSpeechEnabled;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>      mIsUITextToSpeechEnabled;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>      mIsIdle;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mChatTextToSpeechSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mUITextToSpeechSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenReaderQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScreenReaderQuery(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double);
    // NOLINTEND
};

} // namespace OreUI
