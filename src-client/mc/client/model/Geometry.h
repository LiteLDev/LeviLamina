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
class ModelPartLocator;
namespace Json { class Value; }
// clang-format on

class Geometry {
public:
    // Geometry inner types declare
    // clang-format off
    struct ItemDisplayTransform;
    struct Box;
    struct NodeVertex;
    struct NodePolyMesh;
    struct NodeTextureMesh;
    struct Node;
    // clang-format on

    // Geometry inner types define
    struct ItemDisplayTransform {};

    struct Box {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>                                  mMirror;
        ::ll::TypedStorage<4, 12, ::Vec3>                               mFrom;
        ::ll::TypedStorage<4, 12, ::Vec3>                               mSize;
        ::ll::TypedStorage<4, 12, ::Vec3>                               mRotation;
        ::ll::TypedStorage<4, 12, ::Vec3>                               mPivot;
        ::ll::TypedStorage<8, 16, ::TextureOffset>                      mTex;
        ::ll::TypedStorage<4, 144, ::std::array<::Cube::FaceUVData, 6>> mFaceUVs;
        ::ll::TypedStorage<4, 4, float>                                 mInflate;
        ::ll::TypedStorage<1, 1, bool>                                  mUsesFaceUVs;
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
        // prevent constructor by default
        NodePolyMesh& operator=(NodePolyMesh const&);
        NodePolyMesh();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI NodePolyMesh(::Geometry::NodePolyMesh const&);

        MCAPI ~NodePolyMesh();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::Geometry::NodePolyMesh const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
        // prevent constructor by default
        Node& operator=(Node const&);
        Node();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI Node(::Geometry::Node const&);

        MCAPI ~Node();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::Geometry::Node const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
    MCAPI void toJson(::Json::Value& root) const;
    // NOLINTEND
};
