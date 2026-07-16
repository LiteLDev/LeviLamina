#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPersistenceGroupItem
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptPersistenceGroupItem> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5e0188;
    ::ll::UntypedStorage<8, 16> mUnk46e305;
    ::ll::UntypedStorage<8, 16> mUnkaa573d;
    ::ll::UntypedStorage<8, 8>  mUnk2fac81;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPersistenceGroupItem& operator=(ScriptPersistenceGroupItem const&);
    ScriptPersistenceGroupItem(ScriptPersistenceGroupItem const&);
    ScriptPersistenceGroupItem();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
