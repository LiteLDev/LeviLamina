#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DimensionType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mValue;
    // NOLINTEND

public:
    operator int() const { return mValue; }
    DimensionType(int const value) : mValue(value) {}
    DimensionType() { mValue = 0; }

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool isCustom() const;

    MCFOLD int value() const;
    // NOLINTEND
};

template <>
struct std::hash<DimensionType> {
    size_t operator()(DimensionType const& dimensionType) const noexcept {
        return std::hash<int>()(dimensionType.value());
    }
};

// clang-format off
template <>
MCAPI ::ll::type_id_ref Bedrock::typeid_storage_impl<class CommandRegistry, ::DimensionType>();
// clang-format on
