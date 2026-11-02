#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "ll/api/data/IntrusiveList.h"

namespace Bedrock::Intrusive {

template <typename T0 = void>
class list_base_hook : public ::ll::data::IntrusiveListNode<T0> {};

} // namespace Bedrock::Intrusive
