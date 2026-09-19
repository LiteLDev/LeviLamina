#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/PrivacyTagEnterprise.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Property; }
// clang-format on

namespace Social::Events {

class CompoundMeasurement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkaceeb0;
    ::ll::UntypedStorage<8, 32> mUnk5e940f;
    ::ll::UntypedStorage<8, 48> mUnk4585e8;
    ::ll::UntypedStorage<1, 1>  mUnk5f6365;
    ::ll::UntypedStorage<8, 8>  mUnkc6ce7b;
    ::ll::UntypedStorage<8, 8>  mUnkaeec3d;
    ::ll::UntypedStorage<8, 8>  mUnk97f62b;
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundMeasurement& operator=(CompoundMeasurement const&);
    CompoundMeasurement();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CompoundMeasurement(::Social::Events::CompoundMeasurement const&);

#ifdef LL_PLAT_C
    MCNAPI CompoundMeasurement(
        ::std::string const&                   dynamicColumnName,
        ::std::string const&                   propertyName,
        ::Social::Events::PrivacyTagEnterprise privacyTag,
        uint64                                 maxSize,
        uint64                                 maxNumberOfOperations
    );
#endif

    MCNAPI ::std::vector<::Social::Events::Property> getAsDynamicPropertyVector() const;

    MCNAPI void updateMeasurements(::Social::Events::CompoundMeasurement const& other);

    MCNAPI ~CompoundMeasurement();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Social::Events::CompoundMeasurement const&);

#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::std::string const&                   dynamicColumnName,
        ::std::string const&                   propertyName,
        ::Social::Events::PrivacyTagEnterprise privacyTag,
        uint64                                 maxSize,
        uint64                                 maxNumberOfOperations
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
