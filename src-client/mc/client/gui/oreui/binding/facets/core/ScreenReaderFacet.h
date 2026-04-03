#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/util/ProfanityFilterContext.h"

// auto generated forward declare list
// clang-format off
class ITTSEventManager;
class Option;
namespace OreUI { struct ScreenReaderOptions; }
// clang-format on

namespace OreUI {

class ScreenReaderFacet : public ::OreUI::FacetBase<::OreUI::ScreenReaderFacet> {
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
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenReaderFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _registerObservers();

    MCAPI void clear();

    MCFOLD bool getIsChatTextToSpeechEnabled() const;

    MCAPI bool getIsIdle() const;

    MCFOLD bool getIsUITextToSpeechEnabled() const;

    MCAPI void read(
        ::std::string const&                textToRead,
        ::ProfanityFilterContext            profanityFilterContext,
        ::OreUI::ScreenReaderOptions const& options
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
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
