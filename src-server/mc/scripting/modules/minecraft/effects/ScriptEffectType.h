#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEffectType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka2fcd9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEffectType& operator=(ScriptEffectType const&);
    ScriptEffectType(ScriptEffectType const&);
    ScriptEffectType();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string getName_V1() const;

    MCNAPI ::std::string getName_V2() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

};

}
