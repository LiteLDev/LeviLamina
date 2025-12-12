#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/server/TextFilteringProcessor.h"
#include "mc/server/safety/TextFilteringEvent.h"

// auto generated forward declare list
// clang-format off
class BlockCommandOrigin;
class CallbackToken;
class IMinecraftEventing;
class Player;
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
            ::IMinecraftEventing*,
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
            ::IMinecraftEventing*,
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
        ::IMinecraftEventing*,
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
        ::IMinecraftEventing*,
        ::TextProcessingEventOrigin,
        ::std::vector<::std::string> const&,
        ::std::function<void(
            ::std::vector<::std::string> const&,
            ::std::vector<::std::string> const&,
            ::std::vector<::Safety::TextFilteringEvent> const&
        )>
    ) /*override*/;

    virtual void onStartShutdown() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Bedrock::Safety
