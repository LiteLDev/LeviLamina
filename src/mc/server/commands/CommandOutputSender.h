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
#ifdef LL_PLAT_S
    virtual ~CommandOutputSender() = default;
#else // LL_PLAT_C
    virtual ~CommandOutputSender();
#endif

    virtual void send(::CommandOrigin const& origin, ::CommandOutput const& output);

    virtual void registerOutputCallback(::std::function<void(::AutomationCmdOutput&)> const& callback);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Json::Value _toJson(::CommandOutput const& commandOutput) const;
#endif

    MCNAPI void
    sendToAdmins(::CommandOrigin const& origin, ::CommandOutput const& output, ::CommandPermissionLevel opPermLevel);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::std::string> translate(::std::vector<::std::string> const& in);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
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
