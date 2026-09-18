#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class HashedString;
class Vec3;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class NativeBrushBlockChangeListPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::NativeBrushBlockChangeListPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf55f10;
    ::ll::UntypedStorage<8, 24> mUnk11ae06;
    ::ll::UntypedStorage<1, 1>  mUnk29149f;
    ::ll::UntypedStorage<4, 12> mUnkd964fb;
    // NOLINTEND

public:
    // prevent constructor by default
    NativeBrushBlockChangeListPayload& operator=(NativeBrushBlockChangeListPayload const&);
    NativeBrushBlockChangeListPayload(NativeBrushBlockChangeListPayload const&);
    NativeBrushBlockChangeListPayload();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI NativeBrushBlockChangeListPayload(
        ::std::vector<::BlockPos> const&     blockPositions,
        ::std::vector<::HashedString> const& blockTypes,
        uchar                                faceId,
        ::Vec3 const&                        faceIntersection
    );
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::std::vector<::BlockPos> const&     blockPositions,
        ::std::vector<::HashedString> const& blockTypes,
        uchar                                faceId,
        ::Vec3 const&                        faceIntersection
    );
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
