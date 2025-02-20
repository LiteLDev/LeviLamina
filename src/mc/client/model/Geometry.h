#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Geometry {
public:
    // Geometry inner types declare
    // clang-format off
    struct Box;
    struct ItemDisplayTransform;
    struct Node;
    struct NodePolyMesh;
    struct NodeTextureMesh;
    struct NodeVertex;
    // clang-format on

    // Geometry inner types define
    struct ItemDisplayTransform {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk889e57;
        ::ll::UntypedStorage<4, 12> mUnkf9f6ee;
        ::ll::UntypedStorage<4, 12> mUnk8e4174;
        ::ll::UntypedStorage<4, 12> mUnk84feb0;
        ::ll::UntypedStorage<4, 12> mUnkbec3ff;
        ::ll::UntypedStorage<4, 12> mUnka06f00;
        // NOLINTEND

    public:
        // prevent constructor by default
        ItemDisplayTransform& operator=(ItemDisplayTransform const&);
        ItemDisplayTransform(ItemDisplayTransform const&);
        ItemDisplayTransform();
    };

    struct Box {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>   mUnk4aa1ba;
        ::ll::UntypedStorage<4, 12>  mUnk1852fe;
        ::ll::UntypedStorage<4, 12>  mUnk264da6;
        ::ll::UntypedStorage<4, 12>  mUnk9b1536;
        ::ll::UntypedStorage<4, 12>  mUnkf15bf2;
        ::ll::UntypedStorage<4, 16>  mUnk2743f4;
        ::ll::UntypedStorage<4, 144> mUnkd1b83a;
        ::ll::UntypedStorage<4, 4>   mUnk528b69;
        ::ll::UntypedStorage<1, 1>   mUnk461d11;
        // NOLINTEND

    public:
        // prevent constructor by default
        Box& operator=(Box const&);
        Box(Box const&);
        Box();
    };

    struct NodeVertex {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk44fcae;
        ::ll::UntypedStorage<4, 4> mUnk8bbd59;
        ::ll::UntypedStorage<4, 4> mUnke39a72;
        // NOLINTEND

    public:
        // prevent constructor by default
        NodeVertex& operator=(NodeVertex const&);
        NodeVertex(NodeVertex const&);
        NodeVertex();
    };

    struct NodePolyMesh {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkee9cb8;
        ::ll::UntypedStorage<8, 24> mUnke0c8de;
        ::ll::UntypedStorage<8, 24> mUnk91e36e;
        ::ll::UntypedStorage<8, 24> mUnkc1dc9a;
        ::ll::UntypedStorage<8, 24> mUnk3bbbbc;
        ::ll::UntypedStorage<1, 1>  mUnkc5152e;
        // NOLINTEND

    public:
        // prevent constructor by default
        NodePolyMesh& operator=(NodePolyMesh const&);
        NodePolyMesh(NodePolyMesh const&);
        NodePolyMesh();
    };

    struct NodeTextureMesh {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk7cf4c5;
        ::ll::UntypedStorage<4, 12> mUnk4092eb;
        ::ll::UntypedStorage<4, 12> mUnkbb23f5;
        ::ll::UntypedStorage<4, 12> mUnkb94fd4;
        ::ll::UntypedStorage<4, 12> mUnkee92c6;
        // NOLINTEND

    public:
        // prevent constructor by default
        NodeTextureMesh& operator=(NodeTextureMesh const&);
        NodeTextureMesh(NodeTextureMesh const&);
        NodeTextureMesh();
    };

    struct Node {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>  mUnkedb926;
        ::ll::UntypedStorage<1, 1>   mUnk5cfb9c;
        ::ll::UntypedStorage<1, 1>   mUnk65d704;
        ::ll::UntypedStorage<4, 12>  mUnk88478a;
        ::ll::UntypedStorage<4, 12>  mUnkab4bb2;
        ::ll::UntypedStorage<4, 12>  mUnk3ea7af;
        ::ll::UntypedStorage<4, 12>  mUnkc1f64e;
        ::ll::UntypedStorage<4, 4>   mUnk8e7efc;
        ::ll::UntypedStorage<1, 1>   mUnkf94f41;
        ::ll::UntypedStorage<8, 24>  mUnk20f352;
        ::ll::UntypedStorage<8, 32>  mUnkb3b231;
        ::ll::UntypedStorage<8, 32>  mUnkae6e19;
        ::ll::UntypedStorage<8, 24>  mUnkddb88a;
        ::ll::UntypedStorage<8, 128> mUnk894544;
        ::ll::UntypedStorage<8, 24>  mUnka736ae;
        ::ll::UntypedStorage<1, 1>   mUnk9815ed;
        ::ll::UntypedStorage<4, 4>   mUnkc0897c;
        ::ll::UntypedStorage<8, 24>  mUnkde075f;
        ::ll::UntypedStorage<8, 32>  mUnk5ef3fa;
        // NOLINTEND

    public:
        // prevent constructor by default
        Node& operator=(Node const&);
        Node(Node const&);
        Node();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkcf50a7;
    ::ll::UntypedStorage<4, 8>  mUnk42be01;
    ::ll::UntypedStorage<4, 12> mUnkdccdb0;
    ::ll::UntypedStorage<4, 12> mUnk82efd8;
    ::ll::UntypedStorage<4, 12> mUnk8dfe97;
    ::ll::UntypedStorage<1, 1>  mUnk74839b;
    ::ll::UntypedStorage<1, 1>  mUnka5c77f;
    ::ll::UntypedStorage<8, 24> mUnkabff87;
    ::ll::UntypedStorage<1, 1>  mUnk451394;
    ::ll::UntypedStorage<4, 8>  mUnk369adf;
    ::ll::UntypedStorage<8, 32> mUnk544404;
    ::ll::UntypedStorage<8, 32> mUnke93ad1;
    ::ll::UntypedStorage<8, 16> mUnke34842;
    ::ll::UntypedStorage<8, 32> mUnk48057b;
    ::ll::UntypedStorage<1, 1>  mUnkeab64a;
    ::ll::UntypedStorage<8, 24> mUnk6932b3;
    // NOLINTEND

public:
    // prevent constructor by default
    Geometry& operator=(Geometry const&);
    Geometry(Geometry const&);
    Geometry();
};
