#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_21_30 { struct TradeItem; }
// clang-format on

namespace SharedTypes::v1_21_30 {

struct TradeItemList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka875a8;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeItemList& operator=(TradeItemList const&);
    TradeItemList(TradeItemList const&);
    TradeItemList();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void fromTradeItem(::SharedTypes::v1_21_30::TradeItem item);

    MCAPI ~TradeItemList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
