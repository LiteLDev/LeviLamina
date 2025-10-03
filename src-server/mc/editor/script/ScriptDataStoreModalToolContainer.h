#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct ContextConfig; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptDataStoreModalToolContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf88096;
    ::ll::UntypedStorage<8, 8>  mUnk16164e;
    ::ll::UntypedStorage<8, 32> mUnk12984e;
    ::ll::UntypedStorage<1, 1>  mUnk517e55;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataStoreModalToolContainer& operator=(ScriptDataStoreModalToolContainer const&);
    ScriptDataStoreModalToolContainer(ScriptDataStoreModalToolContainer const&);
    ScriptDataStoreModalToolContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::std::string> getSelectedTool() const;

    MCNAPI ::std::string getToolPayload(::std::string id) const;

    MCNAPI ::std::optional<::std::variant<float, bool, ::std::string>>
    getToolProperty(::std::string id, ::std::string property) const;

    MCNAPI bool hasToolPayload(::std::string id) const;

    MCNAPI bool hasToolProperty(::std::string id, ::std::string property) const;

    MCNAPI ::Scripting::Result_deprecated<void>
    registerTool(::Scripting::ContextConfig const& contextConfig, ::std::string id, ::std::string const& payload);

    MCNAPI ::Scripting::Result_deprecated<void> unregisterTool(::std::string id);

    MCNAPI ::Scripting::Result_deprecated<void> updateRegisteredTool(::std::string id, ::std::string const& payload);

    MCNAPI ::Scripting::Result_deprecated<void>
    updateRegisteredToolProperty(::std::string id, ::std::string const& payload, ::std::string const& prop);

    MCNAPI ::Scripting::Result_deprecated<void> updateSelectedTool(::std::optional<::std::string> toolId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND
};

} // namespace Editor::ScriptModule
