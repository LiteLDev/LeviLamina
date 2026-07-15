#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/GuidePlaneCommonBasePayload.h"
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class GuidePlaneUpdatePayload : public ::Editor::Network::NetworkPayload<::Editor::Network::GuidePlaneUpdatePayload>,
                                public ::Editor::Network::GuidePlaneCommonBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5a149f;
    ::ll::UntypedStorage<1, 2>  mUnk5660a7;
    ::ll::UntypedStorage<4, 20> mUnk6df7cc;
    ::ll::UntypedStorage<4, 20> mUnk1f8012;
    ::ll::UntypedStorage<4, 16> mUnk932848;
    ::ll::UntypedStorage<4, 16> mUnk14f48d;
    // NOLINTEND

public:
    // prevent constructor by default
    GuidePlaneUpdatePayload& operator=(GuidePlaneUpdatePayload const&);
    GuidePlaneUpdatePayload(GuidePlaneUpdatePayload const&);
    GuidePlaneUpdatePayload();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
