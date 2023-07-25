#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Intrusive {

template <typename T0, typename T1, typename T2>
class list {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_INTRUSIVE_LIST
public:
    list& operator=(list const&) = delete;
    list(list const&)            = delete;
    list()                       = delete;
#endif

public:
};

}; // namespace Bedrock::Intrusive
