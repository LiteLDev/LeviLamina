#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

enum class RetrievedHandleType : int {
    TypedObject = 0,
    WeakTypedObject = 1,
    StrongTypedObject = 2,
};

}
