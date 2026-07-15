#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/puv_load_data/LoadResultWithTiming.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class Level;
struct TradeTable;
// clang-format on

class TradeTables {
public:
    // TradeTables inner types declare
    // clang-format off
    struct TradeTableLoadData;
    // clang-format on

    // TradeTables inner types define
    struct TradeTableLoadData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                       mPackName;
        ::ll::TypedStorage<8, 32, ::PuvLoadData::LoadResultWithTiming> mLoadTime;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::unique_ptr<::TradeTable>>> mTradeTables;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::TradeTable* fetchTable(::std::string const& path);

    MCAPI void reload(::Level& level, bool usingUpcomingCreatorFeaturesExperiment, ::IMinecraftEventing& eventing);
    // NOLINTEND
};
