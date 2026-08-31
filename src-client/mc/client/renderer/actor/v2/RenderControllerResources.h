#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DataDrivenGeometry;
class ExpressionNode;
struct GeometryData;
struct MeshResource;
struct ResourceOffset;
struct SimpleTextureData;
struct SkeletonData;
namespace mce { class MaterialPtr; }
// clang-format on

struct RenderControllerResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::SkeletonData>>                        mSkeletonResources;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::weak_ptr<::DataDrivenGeometry>>> mAssociatedGeometry;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::MeshResource>>>     mMeshResources;
    ::ll::TypedStorage<8, 24, ::std::vector<::GeometryData>>                        mGeometryData;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::MaterialPtr>>                    mBakedMaterials;
    ::ll::TypedStorage<8, 24, ::std::vector<::SimpleTextureData>>                   mBakedTextures;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>>                      mDynamicResourceExpressions;
    ::ll::TypedStorage<8, 24, ::std::vector<::ResourceOffset>>                      mExtendedResources;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>>                      mPartVisibilityExpressions;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>>                      mRenderControllerExpressions;
    ::ll::TypedStorage<8, 24, ::std::vector<float>>                                 mRenderControllerConstants;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>>                      mLightMultiplierExpressions;
    ::ll::TypedStorage<8, 24, ::std::vector<float>>                                 mLightMultiplierConstants;
    // NOLINTEND
};
