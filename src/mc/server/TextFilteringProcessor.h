#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/events/TextProcessingEventOrigin.h"
#include "mc/server/safety/TextFilteringEvent.h"

// auto generated forward declare list
// clang-format off
class BlockCommandOrigin;
class CallbackToken;
class IMinecraftEventing;
class Player;
// clang-format on

class TextFilteringProcessor : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    TextFilteringProcessor& operator=(TextFilteringProcessor const&);
    TextFilteringProcessor(TextFilteringProcessor const&);
    TextFilteringProcessor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TextFilteringProcessor() /*override*/;

    // vIndex: 1
    virtual ::CallbackToken
    processAnonymousMessages(::IMinecraftEventing*, ::TextProcessingEventOrigin, ::std::vector<::std::string> const&, ::std::function<void(::std::vector<::std::string> const&, ::std::vector<::Safety::TextFilteringEvent> const&)>) = 0;

    // vIndex: 3
    virtual ::CallbackToken
    processMessages(::Player const&, ::TextProcessingEventOrigin, ::std::vector<::std::string> const&, ::std::function<void(::std::vector<::std::string> const&, ::std::vector<::Safety::TextFilteringEvent> const&)>) = 0;

    // vIndex: 2
    virtual ::CallbackToken
    processMessages(::BlockCommandOrigin const&, ::IMinecraftEventing*, ::TextProcessingEventOrigin, ::std::vector<::std::string> const&, ::std::function<void(::std::vector<::std::string> const&, ::std::vector<::Safety::TextFilteringEvent> const&)>) = 0;

    // vIndex: 4
    virtual void onStartShutdown() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
