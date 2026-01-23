#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/block/components/BlockRendererDescription.h"

// auto generated forward declare list
// clang-format off
class ExpressionNode;
struct BlockGeometryDescription;
namespace SharedTypes::Legacy { struct ExpressionNode; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace BlockGeometrySerializer {

struct Proxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                                   mGeometryName;
    ::ll::TypedStorage<8, 48, ::HashedString>                                   mCullingName;
    ::ll::TypedStorage<8, 48, ::HashedString>                                   mCullingLayer;
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::ExpressionNode>>      mBoneVisibilities;
    ::ll::TypedStorage<8, 24, ::std::variant<bool, ::std::set<::HashedString>>> mUVsLocked;
    ::ll::TypedStorage<4, 52, ::BlockRendererDescription>                       mRenderer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Proxy();

    MCAPI Proxy(::BlockGeometrySerializer::Proxy const&);

    MCAPI ::std::map<::std::string, ::SharedTypes::Legacy::ExpressionNode> getBoneVisibility() const;

    MCAPI ::BlockGeometrySerializer::Proxy& operator=(::BlockGeometrySerializer::Proxy&&);

    MCAPI ::BlockGeometrySerializer::Proxy& operator=(::BlockGeometrySerializer::Proxy const&);

    MCAPI void setBoneVisibility(::std::map<::std::string, ::SharedTypes::Legacy::ExpressionNode>& boneVisibilities);

    MCAPI ~Proxy();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindTypes(::cereal::ReflectionCtx& ctx);

    MCAPI static void from(::BlockGeometryDescription& desc, ::BlockGeometrySerializer::Proxy proxy);

    MCAPI static ::BlockGeometrySerializer::Proxy to(::BlockGeometryDescription const& desc);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::BlockGeometrySerializer::Proxy const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace BlockGeometrySerializer
