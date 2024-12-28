#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/runtime/Result.h"

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
    MCAPI ::std::optional<::std::string> getSelectedTool() const;

    MCAPI ::std::string getToolPayload(::std::string id) const;

    MCAPI ::std::optional<::std::variant<float, bool, ::std::string>>
    getToolProperty(::std::string id, ::std::string property) const;

    MCAPI bool hasToolPayload(::std::string id) const;

    MCAPI bool hasToolProperty(::std::string id, ::std::string property) const;

    MCAPI ::Scripting::Result<void>
    registerTool(::Scripting::ContextConfig const& contextConfig, ::std::string id, ::std::string const& payload);

    MCAPI ::Scripting::Result<void> unregisterTool(::std::string id);

    MCAPI ::Scripting::Result<void> updateRegisteredTool(::std::string id, ::std::string const& payload);

    MCAPI ::Scripting::Result<void>
    updateRegisteredToolProperty(::std::string id, ::std::string const& payload, ::std::string const& prop);

    MCAPI ::Scripting::Result<void> updateSelectedTool(::std::optional<::std::string> toolId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND
};

} // namespace Editor::ScriptModule
