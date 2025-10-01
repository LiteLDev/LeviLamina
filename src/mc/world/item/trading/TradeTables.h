#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
class Level;
class LinkedAssetValidator;
class ResourcePackManager;
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
        ::ll::UntypedStorage<8, 32> mUnkf6f6b4;
        ::ll::UntypedStorage<8, 32> mUnk748cba;
        // NOLINTEND

    public:
        // prevent constructor by default
        TradeTableLoadData& operator=(TradeTableLoadData const&);
        TradeTableLoadData(TradeTableLoadData const&);
        TradeTableLoadData();

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
    ::ll::UntypedStorage<8, 64> mUnk1d798d;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeTables& operator=(TradeTables const&);
    TradeTables(TradeTables const&);
    TradeTables();

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
