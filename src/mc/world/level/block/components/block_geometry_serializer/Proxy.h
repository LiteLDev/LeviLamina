#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BlockGeometryDescription;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace BlockGeometrySerializer {

struct Proxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk225951;
    ::ll::UntypedStorage<8, 48> mUnk284a47;
    ::ll::UntypedStorage<8, 16> mUnk854b50;
    // NOLINTEND

public:
    // prevent constructor by default
    Proxy& operator=(Proxy const&);
    Proxy();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Proxy(::BlockGeometrySerializer::Proxy const&);

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
    MCAPI void* $ctor(::BlockGeometrySerializer::Proxy const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace BlockGeometrySerializer
