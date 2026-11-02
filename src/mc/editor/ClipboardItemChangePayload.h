#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class ClipboardItemChangePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::ClipboardItemChangePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk95baf9;
    ::ll::UntypedStorage<1, 1>  mUnk5fb96e;
    // NOLINTEND

public:
    // prevent constructor by default
    ClipboardItemChangePayload& operator=(ClipboardItemChangePayload const&);
    ClipboardItemChangePayload(ClipboardItemChangePayload const&);
    ClipboardItemChangePayload();

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
