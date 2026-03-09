#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/FitToFrame.h"
#include "mc/client/model/geom/Cube.h"
#include "mc/client/model/geom/TextureOffset.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/resources/MinEngineVersion.h"
#include "mc/world/actor/player/SkinAdjustments.h"

// auto generated forward declare list
// clang-format off
class JsonValueHierarchy;
class ModelPartLocator;
class SemVersionConstant;
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
        ::ll::TypedStorage<1, 1, bool>                                  mMirror;
        ::ll::TypedStorage<4, 12, ::Vec3>                               mFrom;
        ::ll::TypedStorage<4, 12, ::Vec3>                               mSize;
        ::ll::TypedStorage<4, 12, ::Vec3>                               mRotation;
        ::ll::TypedStorage<4, 12, ::Vec3>                               mPivot;
        ::ll::TypedStorage<4, 16, ::TextureOffset>                      mTex;
        ::ll::TypedStorage<4, 144, ::std::array<::Cube::FaceUVData, 6>> mFaceUVs;
        ::ll::TypedStorage<4, 4, float>                                 mInflate;
        ::ll::TypedStorage<1, 1, bool>                                  mUsesFaceUVs;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI_C void _boxFaceUVToJson(
            ::Json::Value&                      uvNode,
            uchar                               facing,
            ::std::string const&                faceName,
            ::std::vector<::std::string> const& materialInstanceList
        ) const;

        MCAPI_C void toJson(::Json::Value& root, ::std::vector<::std::string> const& materialInstanceList) const;
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
        ::ll::TypedStorage<8, 32, ::std::string> mTextureName;
        ::ll::TypedStorage<4, 12, ::Vec3>        mPosition;
        ::ll::TypedStorage<4, 12, ::Vec3>        mLocalPivot;
        ::ll::TypedStorage<4, 12, ::Vec3>        mRotation;
        ::ll::TypedStorage<4, 12, ::Vec3>        mScale;
        ::ll::TypedStorage<1, 1, bool>           mUsePixelDepth;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN

        // NOLINTEND
    };

    struct NodeVertex {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint> mPositionIndex;
        ::ll::TypedStorage<4, 4, uint> mNormalIndex;
        ::ll::TypedStorage<4, 4, uint> mUVIndex;
        // NOLINTEND
    };

    struct NodePolyMesh {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::Vec3>>                                  mPositions;
        ::ll::TypedStorage<8, 24, ::std::vector<::Vec3>>                                  mNormals;
        ::ll::TypedStorage<8, 24, ::std::vector<::Vec2>>                                  mUVs;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::array<::Geometry::NodeVertex, 3>>> mTris;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::array<::Geometry::NodeVertex, 4>>> mQuads;
        ::ll::TypedStorage<1, 1, bool>                                                    mAreUVsNormalized;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI_C void toJson(::Json::Value& root) const;
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI_C void* $ctor(::Geometry::NodePolyMesh const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI_C void $dtor();
        // NOLINTEND
    };

    struct Node {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::set<::std::string>>                  mMixedCaseNames;
        ::ll::TypedStorage<1, 1, bool>                                        mMirror;
        ::ll::TypedStorage<1, 1, bool>                                        mNeverRender;
        ::ll::TypedStorage<4, 12, ::Vec3>                                     mPivot;
        ::ll::TypedStorage<4, 12, ::Vec3>                                     mRot;
        ::ll::TypedStorage<4, 12, ::Vec3>                                     mScale;
        ::ll::TypedStorage<4, 12, ::Vec3>                                     mBindPoseRotation;
        ::ll::TypedStorage<4, 4, float>                                       mInflate;
        ::ll::TypedStorage<1, 1, bool>                                        mPivotSubtractsParentPivot;
        ::ll::TypedStorage<8, 24, ::std::vector<::Geometry::Box>>             mBoxes;
        ::ll::TypedStorage<8, 32, ::std::string>                              mParentName;
        ::ll::TypedStorage<8, 32, ::std::string>                              mBoneBindingExpression;
        ::ll::TypedStorage<8, 24, ::std::vector<::ModelPartLocator>>          mLocators;
        ::ll::TypedStorage<8, 128, ::Geometry::NodePolyMesh>                  mMesh;
        ::ll::TypedStorage<8, 24, ::std::vector<::Geometry::NodeTextureMesh>> mTextureMeshes;
        ::ll::TypedStorage<1, 1, bool>                                        mDebug;
        ::ll::TypedStorage<4, 4, uint>                                        mSkinnedMeshGroupIdentifier;
        ::ll::TypedStorage<8, 24, ::SemVersion>                               mSourceFileVersion;
        ::ll::TypedStorage<8, 32, ::MinEngineVersion>                         mSourceMinEngineVersion;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI_C void
        _textureMeshToJson(::std::vector<::Geometry::NodeTextureMesh> const& textureMeshes, ::Json::Value& node) const;

        MCAPI_C void addLocator(
            ::std::string const& name,
            ::std::string const& boneName,
            ::Vec3 const&        localOffset,
            bool                 ignoreInheritedScale,
            bool                 errorIfIdenticalLocatorAlreadyExists
        );

        MCAPI_C void toJson(::Json::Value& root, ::std::vector<::std::string> const& materialInstanceList) const;
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI_C void* $ctor();

        MCAPI_C void* $ctor(::Geometry::Node const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI_C void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SkinAdjustments>                                mSkinAdjustments;
    ::ll::TypedStorage<4, 8, ::Vec2>                                           mRenderDim;
    ::ll::TypedStorage<4, 12, ::Vec3>                                          mRenderDimOffset;
    ::ll::TypedStorage<4, 12, ::Vec3>                                          mLeashOffset;
    ::ll::TypedStorage<4, 12, ::Vec3>                                          mScale;
    ::ll::TypedStorage<1, 1, bool>                                             mUseModelData;
    ::ll::TypedStorage<1, 1, bool>                                             mModified;
    ::ll::TypedStorage<8, 24, ::std::vector<::Geometry::ItemDisplayTransform>> mItemTransforms;
    ::ll::TypedStorage<1, 1, ::FitToFrame>                                     mFitGuiItemToFrame;
    ::ll::TypedStorage<4, 8, ::Vec2>                                           mTextureDimensions;
    ::ll::TypedStorage<8, 32, ::std::string>                                   mSourceFilePathWithExtension;
    ::ll::TypedStorage<8, 32, ::std::string>                                   mSerializableName;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::Geometry::Node>>     mNodes;
    ::ll::TypedStorage<8, 32, ::MinEngineVersion>                              mMinEngineVersion;
    ::ll::TypedStorage<1, 1, bool>                                             mIsFromBaseGamePack;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                    mMaterialInstanceList;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C void _convertPreV1_8MobArmorOffsetsToLocators();

    MCAPI_C void _fixEnderDragonLegacyBones(::Geometry::Node& newNode, ::std::string const& name);

    MCAPI_C void _fixPreDataDrivenMobGeometry(
        ::std::string const&                       name,
        ::std::vector<::JsonValueHierarchy> const& bones,
        ::JsonValueHierarchy&                      sourceNode,
        ::Geometry::Node*                          newNode
    );

    MCAPI_C void
    _parseBones(::JsonValueHierarchy const& root, bool applyBindPoseRotation, ::TextureUVCoordinateSet const& uvOffset);

    MCAPI_C void _parseBoxFaceUV(
        ::Geometry::Box&                box,
        ::Json::Value const&            uvNode,
        uchar                           facing,
        ::std::string const&            faceName,
        ::Vec2 const&                   defaultUVSize,
        ::TextureUVCoordinateSet const& uvOffset
    );

    MCAPI_C void
    _parseBoxFaceUVs(::Geometry::Box& box, ::Json::Value const& uvNode, ::TextureUVCoordinateSet const& uvOffset);

    MCAPI_C void _parseItemDisplayTransforms(::Json::Value const& itemTransformNode);

    MCAPI_C ::Geometry::Node const* getNode(::std::string_view name) const;

    MCAPI_C void
    parse(::JsonValueHierarchy const& root, bool applyBindPoseRotation, ::TextureUVCoordinateSet const& uvOffset);

    MCAPI_C void toJson(::Json::Value& root) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI_C static ::SemVersionConstant const& mDataDrivenEnderDragonSupportedVersion();

    MCAPI_C static ::SemVersionConstant const& mDataDrivenRenderingSupportedVersion();

    MCAPI_C static ::SemVersionConstant const& mDrownedParentFieldSupportedVersion();

    MCAPI_C static ::SemVersionConstant const& mParentFieldSupportedVersion();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(
        ::std::string const& serializableName,
        ::std::string const& sourceFilePathWithExtension,
        bool                 isFromBaseGamePack,
        int                  texw,
        int                  texh
    );

    MCAPI_C void* $ctor(
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
    MCAPI_C void $dtor();
    // NOLINTEND
};
