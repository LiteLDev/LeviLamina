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
// clang-format on

namespace Editor::Services {

class LoggingServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LoggingServiceProvider() = default;

    // vIndex: 1
    virtual void log(::std::string&&, ::Player*, ::Editor::LogLevel, ::std::vector<::HashedString>&&, ::Editor::LogChannel, ::std::string) = 0;

    // vIndex: 2
    virtual void flush() = 0;

    // vIndex: 3
    virtual ::std::vector<::Editor::LogMessage> const& getMessages() const = 0;

    // vIndex: 4
    virtual ::Scripting::Result_deprecated<::Bedrock::PubSub::Subscription> listenForLogMessage(::std::function<void(::Editor::LogMessage const&)>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
