#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/block/components/BlockRendererDescription.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
// clang-format on

namespace BlockGeometrySerializer {

struct Proxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                                   mGeometryName;
    ::ll::TypedStorage<8, 48, ::HashedString>                                   mCullingName;
    ::ll::TypedStorage<8, 48, ::HashedString>                                   mCullingShapeName;
    ::ll::TypedStorage<8, 48, ::HashedString>                                   mCullingLayer;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::ExpressionNode>>      mBoneVisibilities;
    ::ll::TypedStorage<8, 24, ::std::variant<bool, ::std::set<::HashedString>>> mUVsLocked;
    ::ll::TypedStorage<4, 52, ::BlockRendererDescription>                       mRenderer;
    // NOLINTEND
};

} // namespace BlockGeometrySerializer
