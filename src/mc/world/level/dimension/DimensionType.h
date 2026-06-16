#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DimensionType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool isCustom() const;

    MCFOLD int value() const;
    // NOLINTEND
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::DimensionType>();
// clang-format on
