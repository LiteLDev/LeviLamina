#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

class ScriptObjectFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke9046f;
    ::ll::UntypedStorage<8, 8>  mUnk56883d;
    ::ll::UntypedStorage<8, 8>  mUnkc05a72;
    ::ll::UntypedStorage<1, 1>  mUnkce6804;
    ::ll::UntypedStorage<8, 16> mUnk1387ba;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptObjectFactory& operator=(ScriptObjectFactory const&);
    ScriptObjectFactory(ScriptObjectFactory const&);
    ScriptObjectFactory();
};

} // namespace Scripting
