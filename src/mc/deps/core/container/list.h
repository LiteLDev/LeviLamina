#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Intrusive {

template <typename T0, typename T1, typename T2>
class list {
public:
    // prevent constructor by default
    list& operator=(list const&);
    list(list const&);
    list();
};

}; // namespace Bedrock::Intrusive
