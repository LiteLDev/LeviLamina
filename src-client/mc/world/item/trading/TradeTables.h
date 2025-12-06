#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/puv/puv_load_data/LoadResultWithTiming.h"

// auto generated forward declare list
// clang-format off
class Level;
struct IMinecraftEventing;
struct LinkedAssetValidator;
struct ResourcePackManager;
struct TradeTable;
namespace Core { class Path; }
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

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~TradeTableLoadData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
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
    MCAPI ::TradeTables::TradeTableLoadData _parseAndStoreTradeTable(
        ::Level&                                           level,
        ::ResourcePackManager*                             resourceLoader,
        ::Core::Path const&                                tradeTablePath,
        bool                                               usingUpcomingCreatorFeaturesExperiment,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );

    MCAPI ::TradeTable* fetchTable(::std::string const& path);

    MCAPI void reload(::Level& level, bool usingUpcomingCreatorFeaturesExperiment, ::IMinecraftEventing& eventing);

    MCAPI ~TradeTables();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
