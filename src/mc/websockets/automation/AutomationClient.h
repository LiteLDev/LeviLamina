#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/codebuilder/IClient.h"
#include "mc/deps/application/UriListener.h"
#include "mc/world/level/LevelListener.h"

// auto generated forward declare list
// clang-format off
class IMinecraftApp;
namespace Automation { class AutomationSession; }
namespace CodeBuilder { struct AgentMessage; }
namespace CodeBuilder { struct ChatMessage; }
namespace CodeBuilder { struct CommandMessage; }
namespace CodeBuilder { struct ErrorMessage; }
namespace CodeBuilder { struct EventMessage; }
class ActivationUri;
// clang-format on

namespace Automation {

class AutomationClient : public ::CodeBuilder::IClient, public ::UriListener, public ::LevelListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkd8f49d;
    ::ll::UntypedStorage<8, 8>  mUnk133ab6;
    ::ll::UntypedStorage<8, 8>  mUnk9e65e2;
    ::ll::UntypedStorage<4, 4>  mUnkde21bd;
    ::ll::UntypedStorage<1, 1>  mUnkc2550d;
    ::ll::UntypedStorage<1, 1>  mUnkda283b;
    ::ll::UntypedStorage<4, 4>  mUnk94c7c4;
    ::ll::UntypedStorage<1, 1>  mUnk60f2b9;
    ::ll::UntypedStorage<8, 24> mUnka70ea8;
    ::ll::UntypedStorage<8, 16> mUnk731e86;
    ::ll::UntypedStorage<8, 64> mUnk95cff7;
    ::ll::UntypedStorage<8, 80> mUnk53c64c;
    ::ll::UntypedStorage<8, 16> mUnk3a88e5;
    // NOLINTEND

public:
    // prevent constructor by default
    AutomationClient& operator=(AutomationClient const&);
    AutomationClient(AutomationClient const&);
    AutomationClient();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AutomationClient() /*override*/ = default;

#ifdef LL_PLAT_S
    virtual void onUri(::ActivationUri const& uri) /*override*/;
#else // LL_PLAT_C
    virtual void onUri(::ActivationUri const&) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void send(::CodeBuilder::AgentMessage const& message) /*override*/;
#else // LL_PLAT_C
    virtual void send(::CodeBuilder::AgentMessage const&) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void send(::CodeBuilder::CommandMessage const& message) /*override*/;
#else // LL_PLAT_C
    virtual void send(::CodeBuilder::CommandMessage const&) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void send(::CodeBuilder::ErrorMessage const& message) /*override*/;
#else // LL_PLAT_C
    virtual void send(::CodeBuilder::ErrorMessage const&) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void send(::CodeBuilder::EventMessage const& message) /*override*/;
#else // LL_PLAT_C
    virtual void send(::CodeBuilder::EventMessage const&) /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual void send(::CodeBuilder::ChatMessage const& message) /*override*/;
#else // LL_PLAT_C
    virtual void send(::CodeBuilder::ChatMessage const&) /*override*/;
#endif

    virtual void tick() /*override*/;

    virtual void executeStartupUris() /*override*/;

    virtual void onLevelDestruction(::std::string const&) /*override*/;

    virtual void playerListChanged() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AutomationClient(::IMinecraftApp& minecraft);

    MCNAPI void _forEachSession(::std::function<bool(::Automation::AutomationSession&)> const& callback);

    MCNAPI ::std::shared_ptr<::Automation::AutomationSession> createSession();

    MCNAPI ::std::shared_ptr<::Automation::AutomationSession> getDefaultSession();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IMinecraftApp& minecraft);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void $onUri(::ActivationUri const& uri);

    MCNAPI void $send(::CodeBuilder::AgentMessage const& message);

    MCNAPI void $send(::CodeBuilder::CommandMessage const& message);

    MCNAPI void $send(::CodeBuilder::ErrorMessage const& message);

    MCNAPI void $send(::CodeBuilder::EventMessage const& message);

    MCNAPI void $send(::CodeBuilder::ChatMessage const& message);

    MCNAPI void $tick();

    MCNAPI void $executeStartupUris();

    MCNAPI void $onLevelDestruction(::std::string const&);

    MCNAPI void $playerListChanged();
#endif


    // NOLINTEND
};

} // namespace Automation
