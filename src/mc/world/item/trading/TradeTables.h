#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Level;
class LinkedAssetValidator;
class ResourcePackManager;
struct TradeTable;
namespace Core { class Path; }
// clang-format on

class TradeTables {
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
    MCNAPI void _parseAndStoreTradeTable(
        ::Level&                                           level,
        ::ResourcePackManager*                             resourceLoader,
        ::Core::Path const&                                tradeTablePath,
        bool                                               usingUpcomingCreatorFeaturesExperiment,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> validator
    );

    MCNAPI ::TradeTable* fetchTable(::std::string const& path);

    MCNAPI void reload(::Level& level, bool usingUpcomingCreatorFeaturesExperiment);

    MCNAPI ~TradeTables();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
