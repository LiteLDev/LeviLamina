#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"
#include "mc/world/AutomaticID.h"


class VanillaDimensions {
public:
    // prevent constructor by default
    VanillaDimensions& operator=(VanillaDimensions const&);
    VanillaDimensions(VanillaDimensions const&);
    VanillaDimensions();

public:
    // NOLINTBEGIN
    MCAPI static bool convertPointBetweenDimensions(
        class Vec3 const&                    startingPosition,
        class Vec3&                          outputPosition,
        DimensionType                        fromID,
        DimensionType                        toID,
        class DimensionConversionData const& data
    );

    MCAPI static DimensionType fromSerializedInt(int i);

    MCAPI static class Bedrock::Result<DimensionType> fromSerializedInt(class Bedrock::Result<int>&&);

    MCAPI static DimensionType fromString(std::string const& name);

    MCAPI static int toSerializedInt(DimensionType const& type);

    MCAPI static std::string const toString(DimensionType const&);

    MCAPI static DimensionType const Nether;

    MCAPI static DimensionType const Overworld;

    MCAPI static DimensionType const TheEnd;

    MCAPI static class Vec3 const TheEndSpawnPoint;

    MCAPI static DimensionType const Undefined;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI static class BidirectionalUnorderedMap<std::string, DimensionType> const DimensionMap;

    // NOLINTEND
};
