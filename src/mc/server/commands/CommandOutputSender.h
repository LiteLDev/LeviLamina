#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Subject.h"
#include "mc/server/commands/CommandPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CommandOutput;
namespace CodeBuilder { class CommandOutputObserver; }
namespace Core { class SingleThreadedLock; }
namespace Json { class Value; }
class AutomationCmdOutput;
// clang-format on

class CommandOutputSender {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(::AutomationCmdOutput&)>> mEmplaceTestCommandOutputCallback;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<::Core::Subject<::CodeBuilder::CommandOutputObserver, ::Core::SingleThreadedLock>>>
        mCodeBuilderSubject;
    // NOLINTEND

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
#ifdef LL_PLAT_C
    MCAPI CommandOutputSender();

    MCAPI void _sendToCodeBuilder(::CommandOrigin const& origin, ::CommandOutput const& commandOutput);

    MCAPI ::Json::Value _toJson(::CommandOutput const& commandOutput) const;
#endif

    MCAPI void
    sendToAdmins(::CommandOrigin const& origin, ::CommandOutput const& output, ::CommandPermissionLevel opPermLevel);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCFOLD static ::std::vector<::std::string> translate(::std::vector<::std::string> const& in);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $send(::CommandOrigin const& origin, ::CommandOutput const& output);

    MCFOLD void $registerOutputCallback(::std::function<void(::AutomationCmdOutput&)> const& callback);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
