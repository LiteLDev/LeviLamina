#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEnchantInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkaf4ffa;
    ::ll::UntypedStorage<4, 8> mUnk57b72d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEnchantInfo& operator=(ScriptEnchantInfo const&);
    ScriptEnchantInfo(ScriptEnchantInfo const&);
    ScriptEnchantInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string getEnchantment() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

};

}
