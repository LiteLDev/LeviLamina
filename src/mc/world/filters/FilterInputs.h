#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/FilterSubject.h"
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
    MCAPI FilterInputs(
        ::SharedTypes::Legacy::FilterSubject subject,
        ::FilterInput                        domain,
        ::FilterOperator                     op,
        ::FilterInput                        value
    );

    MCAPI ~FilterInputs();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::SharedTypes::Legacy::FilterSubject subject, ::FilterInput domain, ::FilterOperator op, ::FilterInput value);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
