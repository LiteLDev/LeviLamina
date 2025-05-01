#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BiomeNoiseTarget;
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
    class Node {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 112> mUnk81eae8;
        ::ll::UntypedStorage<8, 24>  mUnkb13f4d;
        ::ll::UntypedStorage<8, 16>  mUnk2d76d4;
        ::ll::UntypedStorage<8, 8>   mUnk8b9903;
        // NOLINTEND

    public:
        // prevent constructor by default
        Node& operator=(Node const&);
        Node(Node const&);
        Node();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void
        search(::ClimateUtils::TargetSpace const& target, ::std::pair<::RTree::Node const*, int64>& closestLeaf) const;

        MCNAPI ~Node();
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::std::optional<::RTree::Node> branch(::std::vector<::RTree::Node>&& children);

        MCNAPI static ::std::vector<::RTree::Node> bucketize(::std::vector<::RTree::Node>&& nodes);

        MCNAPI static void sort(::std::vector<::RTree::Node>& children, int dimension, bool absolute);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct Hint {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk836830;
        // NOLINTEND

    public:
        // prevent constructor by default
        Hint& operator=(Hint const&);
        Hint(Hint const&);
        Hint();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 160> mUnk4be11c;
    // NOLINTEND

public:
    // prevent constructor by default
    RTree& operator=(RTree const&);
    RTree(RTree const&);
    RTree();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RTree(::RTree&&);

    MCNAPI ~RTree();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::RTree::Node> build(::std::vector<::RTree::Node>&& children);

    MCNAPI static ::std::optional<::RTree> create(::std::vector<::BiomeNoiseTarget> const& biomes);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RTree&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
