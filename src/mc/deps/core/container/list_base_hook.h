#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Intrusive {

template <typename T0>
class list_base_hook {
public:
    ::Bedrock::Intrusive::list_base_hook<T0>* mNext;
    ::Bedrock::Intrusive::list_base_hook<T0>* mPrev;
};

} // namespace Bedrock::Intrusive
