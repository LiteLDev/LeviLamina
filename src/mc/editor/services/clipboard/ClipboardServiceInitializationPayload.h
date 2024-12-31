#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class ClipboardServiceInitializationPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::ClipboardServiceInitializationPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk6e6648;
    // NOLINTEND

public:
    // prevent constructor by default
    ClipboardServiceInitializationPayload& operator=(ClipboardServiceInitializationPayload const&);
    ClipboardServiceInitializationPayload(ClipboardServiceInitializationPayload const&);
    ClipboardServiceInitializationPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClipboardServiceInitializationPayload() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
