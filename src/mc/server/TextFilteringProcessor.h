#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/server/safety/TextFilteringEvent.h"

// auto generated forward declare list
// clang-format off
class BlockCommandOrigin;
class CallbackToken;
class Player;
namespace Safety { struct TextFilterResult; }
// clang-format on

class TextFilteringProcessor : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TextFilteringProcessor() /*override*/ = default;

    virtual ::CallbackToken processAnonymousMessages(
        ::TextProcessingEventOrigin,
        ::std::vector<::std::string> const&,
        ::std::function<void(
            ::std::vector<::std::string> const&,
            ::std::vector<::std::string> const&,
            ::std::vector<::Safety::TextFilteringEvent> const&
        )>
    ) = 0;

    virtual ::CallbackToken processMessages(
        ::Player const&,
        ::TextProcessingEventOrigin,
        ::std::vector<::std::string> const&,
        ::std::function<void(
            ::std::vector<::std::string> const&,
            ::std::vector<::std::string> const&,
            ::std::vector<::Safety::TextFilteringEvent> const&
        )>
    ) = 0;

    virtual ::CallbackToken processMessages(
        ::BlockCommandOrigin const&,
        ::TextProcessingEventOrigin,
        ::std::vector<::std::string> const&,
        ::std::function<void(
            ::std::vector<::std::string> const&,
            ::std::vector<::std::string> const&,
            ::std::vector<::Safety::TextFilteringEvent> const&
        )>
    ) = 0;

    virtual ::Bedrock::Threading::Async<::Safety::TextFilterResult>
    processAnonymousMessagesAsync(::TextProcessingEventOrigin, ::std::vector<::std::string> const&) = 0;

    virtual ::Bedrock::Threading::Async<::Safety::TextFilterResult>
    processMessagesAsync(::Player const&, ::TextProcessingEventOrigin, ::std::vector<::std::string> const&) = 0;

    virtual void onStartShutdown() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
