#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Services { class DataStoreServiceProvider; }
namespace Scripting { class WeakLifetimeScope; }
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
    MCAPI ScriptDataStoreActionBarContainer(
        ::Editor::Services::DataStoreServiceProvider& dataStoreService,
        ::Scripting::WeakLifetimeScope const&         scope
    );

    MCAPI ::std::string getItemPayload(::std::string id) const;

    MCAPI ::std::optional<::std::variant<float, bool, ::std::string>>
    getItemProperty(::std::string id, ::std::string property) const;

    MCAPI bool hasItemPayload(::std::string id) const;

    MCAPI bool hasItemProperty(::std::string id, ::std::string property) const;

    MCAPI ::Scripting::Result<void>
    registerItem(::Scripting::ContextConfig const& contextConfig, ::std::string id, ::std::string const& payload);

    MCAPI ::Scripting::Result<void> unregisterItem(::std::string id);

    MCAPI ::Scripting::Result<void> updateRegisteredItem(::std::string id, ::std::string const& payload);

    MCAPI ::Scripting::Result<void>
    updateRegisteredItemProperty(::std::string id, ::std::string const& payload, ::std::string const& prop);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptDataStoreActionBarContainer>
    bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void*
    $ctor(::Editor::Services::DataStoreServiceProvider& dataStoreService, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace Editor::ScriptModule
