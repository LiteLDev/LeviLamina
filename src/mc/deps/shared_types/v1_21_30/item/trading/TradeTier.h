#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_30 {

struct TradeTier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkba7225;
    ::ll::UntypedStorage<4, 4>  mUnk7653df;
    // NOLINTEND

public:
    // prevent constructor by default
    TradeTier& operator=(TradeTier const&);
    TradeTier(TradeTier const&);
    TradeTier();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TradeTier();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_30
