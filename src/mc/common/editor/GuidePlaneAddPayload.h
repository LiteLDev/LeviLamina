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

class GuidePlaneAddPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::GuidePlaneAddPayload>,
                             public ::Editor::Network::GuidePlaneCommonBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk2dc1e1;
    // NOLINTEND

public:
    // prevent constructor by default
    GuidePlaneAddPayload& operator=(GuidePlaneAddPayload const&);
    GuidePlaneAddPayload(GuidePlaneAddPayload const&);
    GuidePlaneAddPayload();

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
