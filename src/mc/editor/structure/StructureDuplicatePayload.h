#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class StructureDuplicatePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::StructureDuplicatePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnke1fb3d;
    ::ll::UntypedStorage<8, 48> mUnkd4c5f5;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureDuplicatePayload& operator=(StructureDuplicatePayload const&);
    StructureDuplicatePayload(StructureDuplicatePayload const&);
    StructureDuplicatePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureDuplicatePayload() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
