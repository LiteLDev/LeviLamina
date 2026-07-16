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

class GuidePlaneRemovePayload : public ::Editor::Network::NetworkPayload<::Editor::Network::GuidePlaneRemovePayload>,
                                public ::Editor::Network::GuidePlaneCommonBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf615fa;
    // NOLINTEND

public:
    // prevent constructor by default
    GuidePlaneRemovePayload& operator=(GuidePlaneRemovePayload const&);
    GuidePlaneRemovePayload(GuidePlaneRemovePayload const&);
    GuidePlaneRemovePayload();

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
