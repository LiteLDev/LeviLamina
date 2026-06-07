#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/quickjs/context/ParseContext.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IPrinter; }
namespace Scripting { class ScriptObjectFactory; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct ContextId; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting::QuickJS { class ClassRegistry; }
namespace Scripting::QuickJS { class ObjectInspector; }
namespace Scripting::QuickJS { struct ParseContextData; }
namespace Scripting::QuickJS { struct ResolvedTypes; }
// clang-format on

namespace Scripting::QuickJS {

class ContextUserData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk91edc7;
    ::ll::UntypedStorage<8, 16>  mUnk557dca;
    ::ll::UntypedStorage<8, 8>   mUnke0c273;
    ::ll::UntypedStorage<8, 8>   mUnk84bd74;
    ::ll::UntypedStorage<8, 24>  mUnk70d806;
    ::ll::UntypedStorage<8, 24>  mUnk90985f;
    ::ll::UntypedStorage<8, 8>   mUnka60b23;
    ::ll::UntypedStorage<8, 8>   mUnk92f52a;
    ::ll::UntypedStorage<8, 8>   mUnkfbe467;
    ::ll::UntypedStorage<8, 8>   mUnkd5fe0f;
    ::ll::UntypedStorage<8, 24>  mUnk2b6a04;
    ::ll::UntypedStorage<8, 288> mUnka21b69;
    ::ll::UntypedStorage<1, 1>   mUnk863b7e;
    ::ll::UntypedStorage<8, 24>  mUnk771848;
    ::ll::UntypedStorage<8, 64>  mUnk3f377c;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextUserData& operator=(ContextUserData const&);
    ContextUserData(ContextUserData const&);
    ContextUserData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContextUserData(
        ::Scripting::ContextId                           contextId_,
        ::Scripting::WeakLifetimeScope                   scope_,
        ::Scripting::QuickJS::ClassRegistry&             classReg_,
        ::Scripting::QuickJS::ResolvedTypes&             resolvedTypes_,
        ::Scripting::ScriptObjectFactory&                objectFactory_,
        ::Scripting::QuickJS::ObjectInspector&           objectInspector_,
        ::Scripting::IPrinter*                           printer_,
        ::std::vector<::Scripting::ModuleBinding> const& modules,
        ::Scripting::ContextConfig                       contextConfig
    );

    MCNAPI ::std::string generateParseContextErrorMessage() const;

    MCNAPI ::std::optional<::std::string> getDebugIdForSourceFile(::std::string const& sourceFile) const;

    MCNAPI ::Scripting::QuickJS::ParseContextData const& peekParseContext() const;

    MCNAPI void popParseContext();

    MCNAPI void pushParseContext(
        ::Scripting::QuickJS::ParseContext       context,
        ::entt::meta_type const&                 type,
        ::std::variant<::std::string_view, uint> arg
    );

    MCNAPI void resetParseContextUntilVariant(bool removeVariant);

    MCNAPI void setDebugIdForSourceFile(::std::string const& sourceFile, ::std::string debugId);

    MCNAPI ~ContextUserData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Scripting::ContextId                           contextId_,
        ::Scripting::WeakLifetimeScope                   scope_,
        ::Scripting::QuickJS::ClassRegistry&             classReg_,
        ::Scripting::QuickJS::ResolvedTypes&             resolvedTypes_,
        ::Scripting::ScriptObjectFactory&                objectFactory_,
        ::Scripting::QuickJS::ObjectInspector&           objectInspector_,
        ::Scripting::IPrinter*                           printer_,
        ::std::vector<::Scripting::ModuleBinding> const& modules,
        ::Scripting::ContextConfig                       contextConfig
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
