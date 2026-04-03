#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

struct PlayerMarkerInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk6780ff;
    ::ll::UntypedStorage<4, 4>  mUnk9f58b1;
    ::ll::UntypedStorage<4, 16> mUnkdaf1a3;
    ::ll::UntypedStorage<1, 1>  mUnkd5af64;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerMarkerInfo& operator=(PlayerMarkerInfo const&);
    PlayerMarkerInfo(PlayerMarkerInfo const&);
    PlayerMarkerInfo();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Network
