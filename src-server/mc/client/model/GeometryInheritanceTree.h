#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GeometryInheritanceTree {
public:
    // GeometryInheritanceTree inner types declare
    // clang-format off
    struct GeometryInheritanceTreeNode;
    // clang-format on

    // GeometryInheritanceTree inner types define
    struct GeometryInheritanceTreeNode {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32>  mUnkb7fe61;
        ::ll::UntypedStorage<8, 32>  mUnkfe94cc;
        ::ll::UntypedStorage<8, 112> mUnk88f3cb;
        ::ll::UntypedStorage<8, 24>  mUnk5f17bd;
        ::ll::UntypedStorage<1, 1>   mUnk9bde17;
        // NOLINTEND

    public:
        // prevent constructor by default
        GeometryInheritanceTreeNode& operator=(GeometryInheritanceTreeNode const&);
        GeometryInheritanceTreeNode(GeometryInheritanceTreeNode const&);
        GeometryInheritanceTreeNode();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk26810f;
    ::ll::UntypedStorage<8, 64> mUnk8bfbe8;
    ::ll::UntypedStorage<8, 80> mUnkcc2e4c;
    // NOLINTEND

public:
    // prevent constructor by default
    GeometryInheritanceTree& operator=(GeometryInheritanceTree const&);
    GeometryInheritanceTree(GeometryInheritanceTree const&);
    GeometryInheritanceTree();
};
