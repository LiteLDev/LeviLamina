#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/Measurement.h"

namespace OreUI {

struct EventMeasurement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::variant<::std::string, bool, double>>   value;
    ::ll::TypedStorage<4, 4, ::Social::Events::Measurement::AggregationType> aggregationType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~EventMeasurement();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
