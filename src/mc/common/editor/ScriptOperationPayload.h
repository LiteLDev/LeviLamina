#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Transactions {

class ScriptOperationPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8bc56c;
    ::ll::UntypedStorage<8, 64> mUnkb8a12b;
    ::ll::UntypedStorage<8, 64> mUnk20b27b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptOperationPayload& operator=(ScriptOperationPayload const&);
    ScriptOperationPayload(ScriptOperationPayload const&);
    ScriptOperationPayload();
};

} // namespace Editor::Transactions
