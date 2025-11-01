#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPersistenceGroupItem : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptPersistenceGroupItem> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5e0188;
    ::ll::UntypedStorage<8, 16> mUnk46e305;
    ::ll::UntypedStorage<8, 16> mUnkaa573d;
    ::ll::UntypedStorage<8, 8> mUnk2fac81;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPersistenceGroupItem& operator=(ScriptPersistenceGroupItem const&);
    ScriptPersistenceGroupItem(ScriptPersistenceGroupItem const&);
    ScriptPersistenceGroupItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Error _getInvalidGroupItemError() const;

    MCNAPI ::Scripting::Result_deprecated<void> commit();

    MCNAPI ::Scripting::Result_deprecated<::std::string const> fetchItemJSON();

    MCNAPI ::Scripting::Result_deprecated<::std::string const> key() const;

    MCNAPI ::Scripting::Result_deprecated<void> setValue(::std::string const& value);

    MCNAPI ::Scripting::Result_deprecated<::std::string const> value() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

};

}
