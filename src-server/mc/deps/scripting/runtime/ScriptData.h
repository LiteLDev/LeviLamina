#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ScriptData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> name;
    ::ll::TypedStorage<8, 32, ::std::string> data;
    // NOLINTEND

};

}
