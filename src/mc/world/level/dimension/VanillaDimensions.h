#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class DimensionConversionData;
class Vec3;
struct DimensionType;
// clang-format on

class VanillaDimensions {
public:
    LLNDAPI static std::string toString(DimensionType const& dimension);

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool convertPointBetweenDimensions(
        ::Vec3 const&                    startingPosition,
        ::Vec3&                          outputPosition,
        ::DimensionType                  fromID,
        ::DimensionType                  toID,
        ::DimensionConversionData const& data
    );

    MCAPI static ::Bedrock::Result<::DimensionType> fromSerializedInt(::Bedrock::Result<int>&& i);

    MCAPI static ::DimensionType fromString(::std::string const& name);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::DimensionType const& Nether();

    MCAPI static ::DimensionType const& Overworld();

    MCAPI static ::DimensionType const& TheEnd();

    MCAPI static ::Vec3 const& TheEndSpawnPoint();

    MCAPI static ::DimensionType const& Undefined();
    // NOLINTEND
};
