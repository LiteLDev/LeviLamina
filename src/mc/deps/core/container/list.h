#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "ll/api/data/IntrusiveList.h"
#include "mc/platform/container/list_base_hook.h"

namespace Bedrock::Intrusive {

template <
    typename ValueT,
    typename HookT   = ::Bedrock::Intrusive::list_base_hook<void>,
    typename TraitsT = ::Bedrock::Intrusive::list_base_hook<void>>
class list : public ::ll::data::IntrusiveList<ValueT, HookT, TraitsT> {};

} // namespace Bedrock::Intrusive
