#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ClimateUtils { struct TargetSpace; }
// clang-format on

class RTree {
public:
    // RTree inner types declare
    // clang-format off
    struct Hint;
    class Node;
    // clang-format on

    // RTree inner types define
    struct Hint {
    public:
        // prevent constructor by default
        Hint& operator=(Hint const&);
        Hint(Hint const&);
        Hint();
    };

    class Node {
    public:
        // prevent constructor by default
        Node& operator=(Node const&);
        Node();

    public:
        // NOLINTBEGIN
        MCAPI Node(class RTree::Node const&);

        MCAPI class RTree::Node& operator=(class RTree::Node&&);

        MCAPI void search(
            struct ClimateUtils::TargetSpace const&     target,
            std::pair<class RTree::Node const*, int64>& closestLeaf
        ) const;

        MCAPI ~Node();

        MCAPI static std::optional<class RTree::Node> branch(std::vector<class RTree::Node>&& children);

        MCAPI static std::vector<class RTree::Node> bucketize(std::vector<class RTree::Node>&&);

        MCAPI static void sort(std::vector<class RTree::Node>& children, int dimension, bool absolute);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RTree& operator=(RTree const&);
    RTree(RTree const&);
    RTree();

public:
    // NOLINTBEGIN
    MCAPI ~RTree();

    MCAPI static std::optional<class RTree> create(std::vector<struct BiomeNoiseTarget> const& biomes);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::optional<class RTree::Node> build(std::vector<class RTree::Node>&& children);

    // NOLINTEND
};
