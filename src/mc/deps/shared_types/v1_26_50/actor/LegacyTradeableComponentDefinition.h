#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_50 {

struct LegacyTradeableComponentDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mDisplayName;
    ::ll::TypedStorage<8, 32, ::std::string> mTradeTablePath;
    ::ll::TypedStorage<1, 1, bool>           mUseNewTradeScreen;
    ::ll::TypedStorage<1, 1, bool>           mPersistTrades;
    ::ll::TypedStorage<1, 1, bool>           mConvertTradesEconomy;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyTradeableComponentDefinition& operator=(LegacyTradeableComponentDefinition const&);
    LegacyTradeableComponentDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyTradeableComponentDefinition(::SharedTypes::v1_26_50::LegacyTradeableComponentDefinition const&);

    MCAPI ::SharedTypes::v1_26_50::LegacyTradeableComponentDefinition&
    operator=(::SharedTypes::v1_26_50::LegacyTradeableComponentDefinition&&);

    MCAPI bool operator==(::SharedTypes::v1_26_50::LegacyTradeableComponentDefinition const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static bool const& DEFAULT_CONVERT_TRADES_ECONOMY();

    MCAPI static bool const& DEFAULT_NEW_SCREEN();

    MCAPI static bool const& DEFAULT_PERSIST_TRADES();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_26_50::LegacyTradeableComponentDefinition const&);
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_50
