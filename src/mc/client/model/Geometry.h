#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class JsonValueHierarchy;
class SemVersionConstant;
class Vec2;
class Vec3;
namespace Json { class Value; }
struct TextureUVCoordinateSet;
// clang-format on

class Geometry {
public:
    // Geometry inner types declare
    // clang-format off
    struct Box;
    struct ItemDisplayTransform;
    struct NodeTextureMesh;
    struct NodeVertex;
    struct NodePolyMesh;
    struct Node;
    // clang-format on

    // Geometry inner types define
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
        Box(Box const&);
        Box();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C void _boxFaceUVToJson(
            ::Json::Value&                      uvNode,
            uchar                               facing,
            ::std::string const&                faceName,
            ::std::vector<::std::string> const& materialInstanceList
        ) const;

        MCNAPI_C ::Geometry::Box& operator=(::Geometry::Box const&);

        MCNAPI_C void toJson(::Json::Value& root, ::std::vector<::std::string> const& materialInstanceList) const;
        // NOLINTEND
    };

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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ~ItemDisplayTransform();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
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
        ::ll::UntypedStorage<1, 1>  mUnk353bfe;
        // NOLINTEND

    public:
        // prevent constructor by default
        NodeTextureMesh(NodeTextureMesh const&);
        NodeTextureMesh();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C ::Geometry::NodeTextureMesh& operator=(::Geometry::NodeTextureMesh const&);
        // NOLINTEND
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
        NodePolyMesh();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C NodePolyMesh(::Geometry::NodePolyMesh const&);

        MCNAPI_C ::Geometry::NodePolyMesh& operator=(::Geometry::NodePolyMesh&&);

        MCNAPI_C void toJson(::Json::Value& root) const;

        MCNAPI_C ~NodePolyMesh();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI_C void* $ctor(::Geometry::NodePolyMesh const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI_C Node();

        MCNAPI_C Node(::Geometry::Node const&);

        MCNAPI_C void
        _textureMeshToJson(::std::vector<::Geometry::NodeTextureMesh> const& textureMeshes, ::Json::Value& node) const;

        MCNAPI_C void addLocator(
            ::std::string const& name,
            ::std::string const& boneName,
            ::Vec3 const&        localOffset,
            bool                 ignoreInheritedScale,
            bool                 errorIfIdenticalLocatorAlreadyExists
        );

        MCNAPI_C void toJson(::Json::Value& root, ::std::vector<::std::string> const& materialInstanceList) const;

        MCNAPI_C ~Node();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI_C void* $ctor();

        MCNAPI_C void* $ctor(::Geometry::Node const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI_C void $dtor();
        // NOLINTEND
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
    ::ll::UntypedStorage<1, 1>  mUnka8e31c;
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

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C Geometry(
        ::std::string const& serializableName,
        ::std::string const& sourceFilePathWithExtension,
        bool                 isFromBaseGamePack,
        int                  texw,
        int                  texh
    );

    MCNAPI_C Geometry(
        ::std::string const& serializableName,
        ::std::string const& sourceFilePathWithExtension,
        ::Geometry const&    source,
        bool                 isFromBaseGamePack,
        int                  texw,
        int                  texh
    );

    MCNAPI_C void _convertPreV1_8MobArmorOffsetsToLocators();

    MCNAPI_C void _fixEnderDragonLegacyBones(::Geometry::Node& newNode, ::std::string const& name);

    MCNAPI_C void _fixPreDataDrivenMobGeometry(
        ::std::string const&                       name,
        ::std::vector<::JsonValueHierarchy> const& bones,
        ::JsonValueHierarchy&                      sourceNode,
        ::Geometry::Node*                          newNode
    );

    MCNAPI_C void
    _parseBones(::JsonValueHierarchy const& root, bool applyBindPoseRotation, ::TextureUVCoordinateSet const& uvOffset);

    MCNAPI_C void _parseBoxFaceUV(
        ::Geometry::Box&                box,
        ::Json::Value const&            uvNode,
        uchar                           facing,
        ::std::string const&            faceName,
        ::Vec2 const&                   defaultUVSize,
        ::TextureUVCoordinateSet const& uvOffset
    );

    MCNAPI_C void
    _parseBoxFaceUVs(::Geometry::Box& box, ::Json::Value const& uvNode, ::TextureUVCoordinateSet const& uvOffset);

    MCNAPI_C void _parseItemDisplayTransforms(::Json::Value const& itemTransformNode);

    MCNAPI_C ::Geometry::Node const* getNode(::std::string_view name) const;

    MCNAPI_C void
    parse(::JsonValueHierarchy const& root, bool applyBindPoseRotation, ::TextureUVCoordinateSet const& uvOffset);

    MCNAPI_C void toJson(::Json::Value& root) const;

    MCNAPI_C ~Geometry();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::SemVersionConstant const& mDataDrivenEnderDragonSupportedVersion();

    MCNAPI_C static ::SemVersionConstant const& mDataDrivenRenderingSupportedVersion();

    MCNAPI_C static ::SemVersionConstant const& mDrownedParentFieldSupportedVersion();

    MCNAPI_C static ::SemVersionConstant const& mParentFieldSupportedVersion();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::std::string const& serializableName,
        ::std::string const& sourceFilePathWithExtension,
        bool                 isFromBaseGamePack,
        int                  texw,
        int                  texh
    );

    MCNAPI_C void* $ctor(
        ::std::string const& serializableName,
        ::std::string const& sourceFilePathWithExtension,
        ::Geometry const&    source,
        bool                 isFromBaseGamePack,
        int                  texw,
        int                  texh
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
