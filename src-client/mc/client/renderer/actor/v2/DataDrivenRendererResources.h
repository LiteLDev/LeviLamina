#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DataDrivenRenderer_tempComponent;
class ExpressionNode;
// clang-format on

struct DataDrivenRendererResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>> mSetupExpressionNodes;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>> mGlobalScaleExpressionNodes;
    ::ll::TypedStorage<8, 24, ::std::vector<::glm::vec3>>      mGlobalScaleConstants;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>             mConditionalControllerExpressionOffsets;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpressionNode>> mConditionalControllerExpressions;
    ::ll::TypedStorage<8, 24, ::std::vector<::DataDrivenRenderer_tempComponent*>> mTempComponents;
    // NOLINTEND
};
