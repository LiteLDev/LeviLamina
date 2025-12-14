#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/climate_utils/Parameter.h"

// auto generated forward declare list
// clang-format off
class Biome;
struct BiomeNoiseTarget;
namespace ClimateUtils { struct TargetSpace; }
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

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void
        search(::ClimateUtils::TargetSpace const& target, ::std::pair<::RTree::Node const*, int64>& closestLeaf) const;

        MCAPI ~Node();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static ::std::optional<::RTree::Node> branch(::std::vector<::RTree::Node>&& children);

        MCAPI static ::std::vector<::RTree::Node> bucketize(::std::vector<::RTree::Node>&& nodes);

        MCAPI static void sort(::std::vector<::RTree::Node>& children, int dimension, bool absolute);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
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
    // member functions
    // NOLINTBEGIN
    MCAPI ~RTree();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::RTree::Node> build(::std::vector<::RTree::Node>&& children);

    MCAPI static ::std::optional<::RTree> create(::std::vector<::BiomeNoiseTarget> const& biomes);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
