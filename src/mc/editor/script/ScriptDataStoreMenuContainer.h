#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result.h"

namespace Editor::ScriptModule {

class ScriptDataStoreMenuContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka60ff2;
    ::ll::UntypedStorage<8, 8>  mUnk1188df;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataStoreMenuContainer& operator=(ScriptDataStoreMenuContainer const&);
    ScriptDataStoreMenuContainer(ScriptDataStoreMenuContainer const&);
    ScriptDataStoreMenuContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> createItem(::std::string id, ::std::string const& payload);

    MCAPI ::Scripting::Result<void> destroyItem(::std::string id);

    MCAPI ::std::string getPayload(::std::string id) const;

    MCAPI ::std::optional<::std::variant<float, bool, ::std::string>>
    getProperty(::std::string id, ::std::string property) const;

    MCAPI bool hasPayload(::std::string id) const;

    MCAPI bool hasProperty(::std::string id, ::std::string property) const;

    MCAPI ::Scripting::Result<void> updateItem(::std::string id, ::std::string const& payload);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptDataStoreMenuContainer> bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
