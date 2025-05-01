#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ContextConfig; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptDataStoreActionBarContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk83c0ae;
    ::ll::UntypedStorage<8, 8>  mUnk972917;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataStoreActionBarContainer& operator=(ScriptDataStoreActionBarContainer const&);
    ScriptDataStoreActionBarContainer(ScriptDataStoreActionBarContainer const&);
    ScriptDataStoreActionBarContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string getItemPayload(::std::string id) const;

    MCNAPI ::std::optional<::std::variant<float, bool, ::std::string>>
    getItemProperty(::std::string id, ::std::string property) const;

    MCNAPI bool hasItemPayload(::std::string id) const;

    MCNAPI bool hasItemProperty(::std::string id, ::std::string property) const;

    MCNAPI ::Scripting::Result<void>
    registerItem(::Scripting::ContextConfig const& contextConfig, ::std::string id, ::std::string const& payload);

    MCNAPI ::Scripting::Result<void> unregisterItem(::std::string id);

    MCNAPI ::Scripting::Result<void> updateRegisteredItem(::std::string id, ::std::string const& payload);

    MCNAPI ::Scripting::Result<void>
    updateRegisteredItemProperty(::std::string id, ::std::string const& payload, ::std::string const& prop);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptDataStoreActionBarContainer>
    bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
