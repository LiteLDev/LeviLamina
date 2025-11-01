#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptLootPool; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptLootTable {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkea5741;
    ::ll::UntypedStorage<8, 8> mUnk34004d;
    ::ll::UntypedStorage<8, 32> mUnk16f67d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLootTable& operator=(ScriptLootTable const&);
    ScriptLootTable(ScriptLootTable const&);
    ScriptLootTable();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string getPath() const;

    MCNAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptLootPool>> getPools();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

};

}
