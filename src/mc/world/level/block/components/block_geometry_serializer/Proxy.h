#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"

// auto generated forward declare list
// clang-format off
struct BlockGeometryDescription;
namespace SharedTypes::Legacy { struct ExpressionNode; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace BlockGeometrySerializer {

struct Proxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk225951;
    ::ll::UntypedStorage<8, 48> mUnk284a47;
    ::ll::UntypedStorage<8, 48> mUnkfab9af;
    ::ll::UntypedStorage<8, 16> mUnk854b50;
    ::ll::UntypedStorage<8, 24> mUnk4ccb10;
    ::ll::UntypedStorage<4, 52> mUnke8453f;
    // NOLINTEND

public:
    // prevent constructor by default
    Proxy();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Proxy(::BlockGeometrySerializer::Proxy const&);

    MCNAPI ::std::map<::std::string, ::SharedTypes::Legacy::ExpressionNode> getBoneVisibility() const;

    MCNAPI ::BlockGeometrySerializer::Proxy& operator=(::BlockGeometrySerializer::Proxy&&);

    MCNAPI ::BlockGeometrySerializer::Proxy& operator=(::BlockGeometrySerializer::Proxy const&);

    MCNAPI void setBoneVisibility(::std::map<::std::string, ::SharedTypes::Legacy::ExpressionNode>& boneVisibilities);

    MCNAPI ~Proxy();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindTypes(::cereal::ReflectionCtx& ctx);

    MCNAPI static void from(::BlockGeometryDescription& desc, ::BlockGeometrySerializer::Proxy proxy);

    MCNAPI static ::BlockGeometrySerializer::Proxy to(::BlockGeometryDescription const& desc);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockGeometrySerializer::Proxy const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace BlockGeometrySerializer
