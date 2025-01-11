#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/platform/Result.h"
#include "mc/util/BidirectionalUnorderedMap.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class DimensionConversionData;
class Vec3;
// clang-format on

class VanillaDimensions {
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

    MCAPI static ::DimensionType fromSerializedInt(int i);

    MCAPI static ::Bedrock::Result<::DimensionType> fromSerializedInt(::Bedrock::Result<int>&& i);

    MCAPI static ::DimensionType fromString(::std::string const& name);

    MCAPI static int toSerializedInt(::DimensionType const& type);

    MCAPI static ::std::string const toString(::DimensionType const& type);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BidirectionalUnorderedMap<::std::string, ::DimensionType> const& DimensionMap();

    MCAPI static ::DimensionType const& Nether();

    MCAPI static ::DimensionType const& Overworld();

    MCAPI static ::DimensionType const& TheEnd();

    MCAPI static ::Vec3 const& TheEndSpawnPoint();

    MCAPI static ::DimensionType const& Undefined();
    // NOLINTEND
};
