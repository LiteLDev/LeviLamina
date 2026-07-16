#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class ITTSEventManager;
class Option;
// clang-format on

namespace OreUI {

class ScreenReaderFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::ScreenReaderFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ITTSEventManager>> mTTSEventManager;
    ::ll::TypedStorage<1, 1, bool>                                 mIsDirty;
    ::ll::TypedStorage<8, 8, ::Option*>                            mChatTextToSpeechOption;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mChatTextToSpeechOptionSubscription;
    ::ll::TypedStorage<1, 1, bool>                                 mIsChatTextToSpeechEnabled;
    ::ll::TypedStorage<8, 8, ::Option*>                            mUITextToSpeechOption;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>     mUITextToSpeechOptionSubscription;
    ::ll::TypedStorage<1, 1, bool>                                 mIsUITextToSpeechEnabled;
    ::ll::TypedStorage<1, 1, bool>                                 mIsIdle;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenReaderFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenReaderFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScreenReaderFacet(
        ::std::weak_ptr<::ITTSEventManager> ttsEventManager,
        ::gsl::not_null<::Option*>          chatTextToSpeechOption,
        ::gsl::not_null<::Option*>          uiTextToSpeechOption
    );

    MCAPI void _registerObservers();
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
        ::std::weak_ptr<::ITTSEventManager> ttsEventManager,
        ::gsl::not_null<::Option*>          chatTextToSpeechOption,
        ::gsl::not_null<::Option*>          uiTextToSpeechOption
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
