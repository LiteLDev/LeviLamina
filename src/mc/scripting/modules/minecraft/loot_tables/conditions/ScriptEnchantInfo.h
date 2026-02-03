#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/NumberRange.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEnchantInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::string const&>     mEnchantment;
    ::ll::TypedStorage<4, 8, ::Scripting::NumberRange> mLevelRange;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEnchantInfo& operator=(ScriptEnchantInfo const&);
    ScriptEnchantInfo(ScriptEnchantInfo const&);
    ScriptEnchantInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string getEnchantment() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
