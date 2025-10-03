#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

struct ScriptEventCommandMessageAfterEventIntermediateData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6778c6;
    ::ll::UntypedStorage<8, 32> mUnk7f474d;
    ::ll::UntypedStorage<8, 8>  mUnk56f0e9;
    ::ll::UntypedStorage<8, 16> mUnkff93dc;
    ::ll::UntypedStorage<8, 32> mUnk4f4c4c;
    ::ll::UntypedStorage<8, 16> mUnk698384;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEventCommandMessageAfterEventIntermediateData&
    operator=(ScriptEventCommandMessageAfterEventIntermediateData const&);
    ScriptEventCommandMessageAfterEventIntermediateData(ScriptEventCommandMessageAfterEventIntermediateData const&);
    ScriptEventCommandMessageAfterEventIntermediateData();
};

} // namespace ScriptModuleMinecraft
