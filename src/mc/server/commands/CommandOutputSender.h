#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
namespace Json { class Value; }
struct AutomationCmdOutput;
// clang-format on

class CommandOutputSender {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk9d00b4;
    ::ll::UntypedStorage<8, 8>  mUnkf1fd72;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandOutputSender& operator=(CommandOutputSender const&);
    CommandOutputSender(CommandOutputSender const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandOutputSender() = default;

    virtual void send(::CommandOrigin const& origin, ::CommandOutput const& output);

    virtual void registerOutputCallback(::std::function<void(::AutomationCmdOutput&)> const& callback);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C CommandOutputSender();

    MCNAPI_C void _sendToCodeBuilder(::CommandOrigin const& origin, ::CommandOutput const& commandOutput);

    MCNAPI_C ::Json::Value _toJson(::CommandOutput const& commandOutput) const;

    MCNAPI void
    sendToAdmins(::CommandOrigin const& origin, ::CommandOutput const& output, ::CommandPermissionLevel opPermLevel);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::std::string> translate(::std::vector<::std::string> const& in);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $send(::CommandOrigin const& origin, ::CommandOutput const& output);

    MCNAPI void $registerOutputCallback(::std::function<void(::AutomationCmdOutput&)> const& callback);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
