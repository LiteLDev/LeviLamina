#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/climate_utils/Parameter.h"

// auto generated forward declare list
// clang-format off
class Biome;
struct BiomeNoiseTarget;
// clang-format on

class RTree {
public:
    // RTree inner types declare
    // clang-format off
    class Node;
    struct Hint;
    // clang-format on

    // RTree inner types define
    class Node {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 112, ::std::array<::ClimateUtils::Parameter, 7>> mParameterSpace;
        ::ll::TypedStorage<8, 24, ::std::vector<::RTree::Node>>                mChildren;
        ::ll::TypedStorage<8, 16, ::std::optional<::Biome const*>>             mBiome;
        ::ll::TypedStorage<8, 8, int64>                                        mTotalMagnitude;
        // NOLINTEND
    };

    struct Hint {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::RTree::Node const*> node;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 160, ::RTree::Node const> mRoot;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::RTree> create(::std::vector<::BiomeNoiseTarget> const& biomes);
    // NOLINTEND
};
