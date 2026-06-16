#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandSelectorBase.h"
#include "mc/server/commands/CommandSelectorResults.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Player;
// clang-format on

template <typename T>
class CommandSelector : CommandSelectorBase {
public:
    CommandSelector() : CommandSelectorBase(std::is_same_v<T, Player>) {}
    MCAPI CommandSelectorResults<T> results(CommandOrigin const& a0) const;
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::CommandSelector<::Actor>>();
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::CommandSelector<::Player>>();
// clang-format on
