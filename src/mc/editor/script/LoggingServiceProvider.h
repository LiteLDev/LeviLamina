#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/LogChannel.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/logging/LogLevel.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class Player;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor { class LogMessage; }
namespace Editor { struct LogContent; }
// clang-format on

namespace Editor::Services {

class LoggingServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LoggingServiceProvider() = default;

    virtual void
    log(::Editor::LogContent, ::Player*, ::Editor::LogLevel, ::std::vector<::HashedString>&&, ::Editor::LogChannel) = 0;

    virtual void flush() = 0;

    virtual ::std::vector<::Editor::LogMessage> const& getMessages() const = 0;

    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription>
        listenForLogMessage(::std::function<void(::Editor::LogMessage const&)>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
