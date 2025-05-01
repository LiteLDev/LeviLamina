#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/world/filters/FilterOperator.h"

// auto generated forward declare list
// clang-format off
class FilterInput;
// clang-format on

struct FilterInputs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>  mUnke637f5;
    ::ll::UntypedStorage<8, 48> mUnk260a64;
    ::ll::UntypedStorage<2, 2>  mUnkf5bc24;
    ::ll::UntypedStorage<8, 48> mUnk6920e4;
    // NOLINTEND

public:
    // prevent constructor by default
    FilterInputs& operator=(FilterInputs const&);
    FilterInputs(FilterInputs const&);
    FilterInputs();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FilterInputs(
        ::SharedTypes::Legacy::FilterSubject domain,
        ::FilterInput                        value,
        ::FilterOperator                     subject,
        ::FilterInput                        op
    );

    MCNAPI ~FilterInputs();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::SharedTypes::Legacy::FilterSubject domain, ::FilterInput value, ::FilterOperator subject, ::FilterInput op);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
