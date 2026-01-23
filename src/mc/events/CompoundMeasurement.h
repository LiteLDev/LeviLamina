#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Measurement; }
namespace Social::Events { class Measurements; }
namespace Social::Events { class Property; }
// clang-format on

namespace Social::Events {

class CompoundMeasurement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3e2143;
    ::ll::UntypedStorage<8, 32> mUnk200b82;
    ::ll::UntypedStorage<8, 56> mUnkac5ca9;
    ::ll::UntypedStorage<1, 1>  mUnk5f6365;
    ::ll::UntypedStorage<8, 8>  mUnkc6ce7b;
    ::ll::UntypedStorage<8, 8>  mUnkaeec3d;
    ::ll::UntypedStorage<8, 8>  mUnk97f62b;
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundMeasurement& operator=(CompoundMeasurement const&);
    CompoundMeasurement(CompoundMeasurement const&);
    CompoundMeasurement();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addOrUpdateMeasurement(
        ::Social::Events::Measurements&      existingMeasurements,
        ::Social::Events::Measurement const& newMeasurement
    );

    MCNAPI void addOrUpdateMeasurement(int propertyValue, ::Social::Events::Measurement const& measurement);

    MCNAPI ::std::vector<::Social::Events::Property> getAsDynamicPropertyVector() const;

    MCNAPI ::Social::Events::CompoundMeasurement& operator=(::Social::Events::CompoundMeasurement&&);

    MCNAPI void updateMeasurements(::Social::Events::CompoundMeasurement const& other);

    MCNAPI ~CompoundMeasurement();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
