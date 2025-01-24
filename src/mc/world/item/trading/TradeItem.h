#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorFilterGroup;
class LootItemFunction;
// clang-format on

struct TradeItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                   itemId;
    ::ll::TypedStorage<4, 4, int>                                                   itemAux;
    ::ll::TypedStorage<4, 4, int>                                                   count_min;
    ::ll::TypedStorage<4, 4, int>                                                   count_max;
    ::ll::TypedStorage<4, 4, float>                                                 price_multiplier;
    ::ll::TypedStorage<8, 32, ::std::string>                                        originalName;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>                                   filter;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::LootItemFunction>>> functions;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeItem& operator=(TradeItem const&);
    TradeItem(TradeItem const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TradeItem(::TradeItem&&);

    MCAPI ::TradeItem& operator=(::TradeItem&&);

    MCAPI ~TradeItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TradeItem&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
