#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
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

    MCNAPI ::Scripting::Result_deprecated<void>
    registerItem(::Scripting::ContextConfig const& contextConfig, ::std::string id, ::std::string const& payload);

    MCNAPI ::Scripting::Result_deprecated<void> unregisterItem(::std::string id);

    MCNAPI ::Scripting::Result_deprecated<void> updateRegisteredItem(::std::string id, ::std::string const& payload);

    MCNAPI ::Scripting::Result_deprecated<void>
    updateRegisteredItemProperty(::std::string id, ::std::string const& payload, ::std::string const& prop);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
