#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleParties {

class ScriptParty {
public:
    // ScriptParty inner types declare
    // clang-format off
    struct Key;
    // clang-format on

    // ScriptParty inner types define
    struct Key {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk24a2eb;
        // NOLINTEND

    public:
        // prevent constructor by default
        Key& operator=(Key const&);
        Key(Key const&);
        Key();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk12b29b;
    ::ll::UntypedStorage<8, 8>  mUnk4ca2c1;
    ::ll::UntypedStorage<8, 32> mUnkd4b8bf;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptParty& operator=(ScriptParty const&);
    ScriptParty(ScriptParty const&);
    ScriptParty();
};

} // namespace ScriptModuleParties
