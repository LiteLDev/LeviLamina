#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/quickjs/context/ParseContext.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { struct ModuleBinding; }
namespace Scripting { struct ModuleDependency; }
namespace Scripting::QuickJS { struct ParseContextData; }
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
    ::ll::UntypedStorage<8, 24>  mUnkb8e6ac;
    ::ll::UntypedStorage<8, 24>  mUnke6991c;
    ::ll::UntypedStorage<8, 8>   mUnka60b23;
    ::ll::UntypedStorage<8, 8>   mUnk92f52a;
    ::ll::UntypedStorage<8, 8>   mUnkfbe467;
    ::ll::UntypedStorage<8, 8>   mUnk988ba0;
    ::ll::UntypedStorage<8, 24>  mUnkefd5be;
    ::ll::UntypedStorage<8, 288> mUnka21b69;
    ::ll::UntypedStorage<1, 1>   mUnk863b7e;
    ::ll::UntypedStorage<8, 24>  mUnkc01688;
    ::ll::UntypedStorage<8, 64>  mUnk784d87;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextUserData& operator=(ContextUserData const&);
    ContextUserData(ContextUserData const&);
    ContextUserData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::ModuleBinding const*
    findSatisfyingModule(::Scripting::ModuleDependency const& moduleDependency) const;

    MCNAPI ::std::string generateParseContextErrorMessage() const;

    MCNAPI ::Scripting::LifetimeRegistry& getLifetimeRegistry();

    MCNAPI ::Scripting::QuickJS::ParseContextData const& peekParseContext() const;

    MCNAPI void popParseContext();

    MCNAPI void pushParseContext(
        ::Scripting::QuickJS::ParseContext       context,
        ::entt::meta_type const&                 type,
        ::std::variant<::std::string_view, uint> arg
    );

    MCNAPI void resetParseContextUntilVariant(bool removeVariant);

    MCNAPI ~ContextUserData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting::QuickJS
