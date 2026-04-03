#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class RequestBlockColorsPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::RequestBlockColorsPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk580e3f;
    ::ll::UntypedStorage<4, 8>  mUnk7be7d5;
    ::ll::UntypedStorage<4, 4>  mUnke3f997;
    ::ll::UntypedStorage<4, 8>  mUnkcbe3db;
    ::ll::UntypedStorage<4, 4>  mUnk3b90ab;
    // NOLINTEND

public:
    // prevent constructor by default
    RequestBlockColorsPayload& operator=(RequestBlockColorsPayload const&);
    RequestBlockColorsPayload(RequestBlockColorsPayload const&);
    RequestBlockColorsPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RequestBlockColorsPayload() /*override*/ = default;
    // NOLINTEND

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
