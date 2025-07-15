#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/debug/SentryBreadcrumbLevel.h"

// auto generated forward declare list
// clang-format off
struct SentryEnvelopePayload;
namespace ScriptModuleDiagnostics { class IScriptSentryRequestSender; }
namespace ScriptModuleDiagnostics { struct ScriptSentrySessionParameters; }
namespace Scripting { struct BaseError; }
// clang-format on

namespace ScriptModuleDiagnostics {

class ScriptSentrySession {
public:
    // ScriptSentrySession inner types declare
    // clang-format off
    struct Breadcrumb;
    // clang-format on

    // ScriptSentrySession inner types define
    struct Breadcrumb {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnkd92796;
        ::ll::UntypedStorage<8, 40> mUnk92d1e6;
        ::ll::UntypedStorage<8, 32> mUnked89cb;
        ::ll::UntypedStorage<8, 8>  mUnk9e17e2;
        // NOLINTEND

    public:
        // prevent constructor by default
        Breadcrumb& operator=(Breadcrumb const&);
        Breadcrumb(Breadcrumb const&);
        Breadcrumb();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~Breadcrumb();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>    mUnk4920da;
    ::ll::UntypedStorage<8, 208>  mUnke6f10e;
    ::ll::UntypedStorage<8, 32>   mUnkb80081;
    ::ll::UntypedStorage<8, 24>   mUnk7e0f9d;
    ::ll::UntypedStorage<8, 64>   mUnk558d04;
    ::ll::UntypedStorage<8, 8>    mUnke07d17;
    ::ll::UntypedStorage<4, 4>    mUnk6feff8;
    ::ll::UntypedStorage<1, 1>    mUnk46ce59;
    ::ll::UntypedStorage<4, 5000> mUnk8af1c4;
    ::ll::UntypedStorage<4, 8>    mUnke5c723;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSentrySession& operator=(ScriptSentrySession const&);
    ScriptSentrySession(ScriptSentrySession const&);
    ScriptSentrySession();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSentrySession(
        ::std::unique_ptr<::ScriptModuleDiagnostics::IScriptSentryRequestSender> requestSender,
        ::ScriptModuleDiagnostics::ScriptSentrySessionParameters                 parameters
    );

    MCNAPI void _fillError(::SentryEnvelopePayload& result, ::Scripting::BaseError const& error);

    MCNAPI void _sendEvent(::SentryEnvelopePayload eventPayload) const;

    MCNAPI void
    addBreadcrumb(::SentryBreadcrumbLevel level, ::std::string message, ::std::optional<::std::string> category);

    MCNAPI ~ScriptSentrySession();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::ScriptModuleDiagnostics::IScriptSentryRequestSender> requestSender,
        ::ScriptModuleDiagnostics::ScriptSentrySessionParameters                 parameters
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics
