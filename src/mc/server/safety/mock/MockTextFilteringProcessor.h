#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/server/TextFilteringProcessor.h"
#include "mc/server/safety/TextFilteringEvent.h"

// auto generated forward declare list
// clang-format off
class BlockCommandOrigin;
class CallbackToken;
class Player;
namespace Safety { struct TextFilterResult; }
// clang-format on

namespace Bedrock::Safety {

class MockTextFilteringProcessor : public ::TextFilteringProcessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 336, ::TaskGroup> mTaskGroup;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::CallbackToken(
            ::TextProcessingEventOrigin,
            ::std::vector<::std::string> const&,
            ::std::function<void(
                ::std::vector<::std::string> const&,
                ::std::vector<::std::string> const&,
                ::std::vector<::Safety::TextFilteringEvent> const&
            )>
        )>>
        mProcessAnonymouseMessageFunc;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::CallbackToken(
            ::Player const&,
            ::TextProcessingEventOrigin,
            ::std::vector<::std::string> const&,
            ::std::function<void(
                ::std::vector<::std::string> const&,
                ::std::vector<::std::string> const&,
                ::std::vector<::Safety::TextFilteringEvent> const&
            )>
        )>>
        mProcessMessagesWithPlayerFunc;
    ::ll::TypedStorage<
        8,
        64,
        ::std::function<::CallbackToken(
            ::BlockCommandOrigin const&,
            ::TextProcessingEventOrigin,
            ::std::vector<::std::string> const&,
            ::std::function<void(
                ::std::vector<::std::string> const&,
                ::std::vector<::std::string> const&,
                ::std::vector<::Safety::TextFilteringEvent> const&
            )>
        )>>
                                                       mProcessMessagesWithBlockOriginFunc;
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mOnStartShutdownFunc;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MockTextFilteringProcessor() /*override*/ = default;

    virtual ::CallbackToken processAnonymousMessages(
        ::TextProcessingEventOrigin,
        ::std::vector<::std::string> const&,
        ::std::function<void(
            ::std::vector<::std::string> const&,
            ::std::vector<::std::string> const&,
            ::std::vector<::Safety::TextFilteringEvent> const&
        )>
    ) /*override*/;

    virtual ::CallbackToken processMessages(
        ::Player const&,
        ::TextProcessingEventOrigin,
        ::std::vector<::std::string> const&,
        ::std::function<void(
            ::std::vector<::std::string> const&,
            ::std::vector<::std::string> const&,
            ::std::vector<::Safety::TextFilteringEvent> const&
        )>
    ) /*override*/;

    virtual ::CallbackToken processMessages(
        ::BlockCommandOrigin const&,
        ::TextProcessingEventOrigin,
        ::std::vector<::std::string> const&,
        ::std::function<void(
            ::std::vector<::std::string> const&,
            ::std::vector<::std::string> const&,
            ::std::vector<::Safety::TextFilteringEvent> const&
        )>
    ) /*override*/;

    virtual ::Bedrock::Threading::Async<::Safety::TextFilterResult>
    processAnonymousMessagesAsync(::TextProcessingEventOrigin, ::std::vector<::std::string> const&) /*override*/;

    virtual ::Bedrock::Threading::Async<::Safety::TextFilterResult> processMessagesAsync(
        ::Player const&,
        ::TextProcessingEventOrigin,
        ::std::vector<::std::string> const&
    ) /*override*/;

    virtual void onStartShutdown() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Safety
