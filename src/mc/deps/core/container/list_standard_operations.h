#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "ll/api/data/IntrusiveList.h"

namespace Bedrock::Intrusive {

template <typename HookT, typename TraitsT = HookT>
class list_standard_operations : public ::ll::data::IntrusiveListOperations<HookT, TraitsT> {};

} // namespace Bedrock::Intrusive
