#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/controller/RenderControllerArrayType.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/molang/MolangVersion.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class DataDrivenGeometry;
class DataDrivenModel;
class RenderParams;
class Vec4;
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class RenderController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString const>                                        mName;
    ::ll::TypedStorage<8, 192, ::std::unordered_map<::HashedString, ::ExpressionNode>[3]>  mArrays;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                                            mGeometry;
    ::ll::TypedStorage<8, 64, ::ExpressionNode[4]>                                         mTintColor;
    ::ll::TypedStorage<8, 64, ::ExpressionNode[4]>                                         mOverlayColor;
    ::ll::TypedStorage<8, 64, ::ExpressionNode[4]>                                         mOnFireColor;
    ::ll::TypedStorage<8, 64, ::ExpressionNode[4]>                                         mIsHurtColor;
    ::ll::TypedStorage<8, 64, ::ExpressionNode[4]>                                         mUVAnim;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::string, ::ExpressionNode>>> mPartVisibility;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::string, ::ExpressionNode>>> mMaterials;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::DataDrivenGeometry>>>      mReferencedGeometries;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>>                             mTextures;
    ::ll::TypedStorage<1, 1, bool>              mShouldRebuildAnimationMatrices;
    ::ll::TypedStorage<1, 1, bool>              mIgnoreLighting;
    ::ll::TypedStorage<1, 1, bool>              mFilterLighting;
    ::ll::TypedStorage<1, 1, bool>              mMaterialsNeedVertexColor;
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mLightColorMultiplier;
    ::ll::TypedStorage<8, 8, int64 const>       mResourceLoadTimeStamp;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderController& operator=(RenderController const&);
    RenderController();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderController(::RenderController const&);

    MCAPI ::std::shared_ptr<::DataDrivenGeometry> getGeometry(::RenderParams& renderParams) const;

    MCNAPI ::mce::Color getOnFireColor(::RenderParams& renderParams) const;

    MCNAPI ::mce::Color getOverlayColor(::RenderParams& renderParams) const;

    MCNAPI ::mce::Color getTintColor(::RenderParams& renderParams) const;

    MCAPI ::Vec4 getUVAnim(::RenderParams& renderParams, ::Vec4 const& defaultUVAnim) const;

    MCNAPI bool init(::DataDrivenModel& model);

    MCNAPI bool parse(::Json::Value const& root, ::MolangVersion molangVersion);

    MCNAPI bool
    parseArray(::Json::Value const& root, ::RenderControllerArrayType arrayType, ::MolangVersion const molangVersion);

    MCNAPI void render(::RenderParams& renderParams, ::DataDrivenGeometry& geo);

    MCNAPI bool replaceVariables(::DataDrivenModel& model);

    MCNAPI bool updatePartMaterials();

    MCNAPI bool updatePartVisibility();

    MCNAPI ~RenderController();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _parseColor(
        ::Json::Value const&  root,
        ::ExpressionNode*     colorNode,
        ::MolangVersion const molangVersion,
        float const           defaultAlpha
    );

    MCNAPI static ::std::string nameToRegExStr(::std::string const& sourceName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::RenderController const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
