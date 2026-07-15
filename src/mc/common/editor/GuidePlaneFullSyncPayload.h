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

class GuidePlaneFullSyncPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::GuidePlaneFullSyncPayload>,
  public ::Editor::Network::GuidePlaneCommonBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk4d4d6d;
    ::ll::UntypedStorage<1, 1>  mUnk2e2adc;
    // NOLINTEND

public:
    // prevent constructor by default
    GuidePlaneFullSyncPayload& operator=(GuidePlaneFullSyncPayload const&);
    GuidePlaneFullSyncPayload(GuidePlaneFullSyncPayload const&);
    GuidePlaneFullSyncPayload();

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
