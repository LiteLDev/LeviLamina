#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

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
    MCNAPI ::Scripting::Result_deprecated<void> createItem(::std::string id, ::std::string const& payload);

    MCNAPI ::Scripting::Result_deprecated<void> destroyItem(::std::string id);

    MCNAPI ::std::string getPayload(::std::string id) const;

    MCNAPI ::std::optional<::std::variant<float, bool, ::std::string>>
    getProperty(::std::string id, ::std::string property) const;

    MCNAPI bool hasPayload(::std::string id) const;

    MCNAPI bool hasProperty(::std::string id, ::std::string property) const;

    MCNAPI ::Scripting::Result_deprecated<void> updateItem(::std::string id, ::std::string const& payload);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
