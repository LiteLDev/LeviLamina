#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandSelector.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

template <typename T0>
class WildcardCommandSelector : public CommandSelector<T0> {
public:
    using CommandSelector<T0>::CommandSelector;
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::WildcardCommandSelector<::Actor>>();
// clang-format on
