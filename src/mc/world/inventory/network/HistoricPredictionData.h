#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HistoricPredictionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk30e96d;
    ::ll::UntypedStorage<8, 152> mUnk790a2b;
    // NOLINTEND

public:
    // prevent constructor by default
    HistoricPredictionData& operator=(HistoricPredictionData const&);
    HistoricPredictionData(HistoricPredictionData const&);
    HistoricPredictionData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~HistoricPredictionData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
