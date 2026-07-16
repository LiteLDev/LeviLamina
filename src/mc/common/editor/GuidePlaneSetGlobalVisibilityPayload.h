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

class GuidePlaneSetGlobalVisibilityPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::GuidePlaneSetGlobalVisibilityPayload>,
  public ::Editor::Network::GuidePlaneCommonBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk5265ef;
    // NOLINTEND

public:
    // prevent constructor by default
    GuidePlaneSetGlobalVisibilityPayload& operator=(GuidePlaneSetGlobalVisibilityPayload const&);
    GuidePlaneSetGlobalVisibilityPayload(GuidePlaneSetGlobalVisibilityPayload const&);
    GuidePlaneSetGlobalVisibilityPayload();

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
