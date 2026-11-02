#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class DataDrivenGeometry;
class DataDrivenRenderer_tempComponent;
struct ExtractedRenderController;
struct ExtractedSkeletonData;
struct SimpleTextureData;
namespace mce { class MaterialPtr; }
// clang-format on

struct ExtractedDataDataDrivenModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                           mMaterialNames;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::MaterialPtr>>                      mMaterials;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                           mTextureNames;
    ::ll::TypedStorage<8, 24, ::std::vector<::SimpleTextureData>>                     mTextures;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                           mGeometryNames;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::DataDrivenGeometry>>> mGeometries;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExtractedSkeletonData>>                 mGeometrySkeletons;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExtractedRenderController>>             mRenderControllers;
    ::ll::TypedStorage<8, 24, ::std::vector<::DataDrivenRenderer_tempComponent*>>     mTempComponents;
    ::ll::TypedStorage<4, 24, ::AABB>                                                 mAABB;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                                       mHeldItemScaleExpression;
    ::ll::TypedStorage<1, 1, bool>                                                    mAttachablesSuppored;
    ::ll::TypedStorage<1, 1, bool>                                                    mHideArmor;
    // NOLINTEND
};
