#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemRegistryRef;
namespace Puv { class Logger; }
namespace SharedTypes::v1_21_30 { struct TradeTableData; }
// clang-format on

struct TradeTableData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3cbd02;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeTableData& operator=(TradeTableData const&);
    TradeTableData(TradeTableData const&);
    TradeTableData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TradeTableData(
        ::SharedTypes::v1_21_30::TradeTableData parsedData,
        ::ItemRegistryRef                       itemRegistry,
        bool                                    usingUpcomingCreatorFeaturesExperiment
    );

    MCAPI ~TradeTableData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::SharedTypes::v1_21_30::TradeTableData parseJson(::std::string const& input, ::Puv::Logger& logger);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::SharedTypes::v1_21_30::TradeTableData parsedData,
        ::ItemRegistryRef                       itemRegistry,
        bool                                    usingUpcomingCreatorFeaturesExperiment
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
