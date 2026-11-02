#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/molang/ExpressionNode.h"

// auto generated forward declare list
// clang-format off
class RenderController;
// clang-format on

struct ExtractedRenderController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                               mPartVisibilityRegex;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>>                            mPartVisibilityExpressionNode;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                               mMaterialRegex;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>>                            mMaterialExpressions;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>>                            mTextureExpressions;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                                           mGeometryExpression;
    ::ll::TypedStorage<8, 192, ::std::unordered_map<::HashedString, ::ExpressionNode>[3]> mResourceArrays;
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                                           mEnabledExpression;
    ::ll::TypedStorage<8, 8, ::RenderController const*>                                   mOriginalController;
    // NOLINTEND
};
