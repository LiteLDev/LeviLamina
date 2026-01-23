#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class StructureDeleteResultPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::StructureDeleteResultPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkd643eb;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureDeleteResultPayload& operator=(StructureDeleteResultPayload const&);
    StructureDeleteResultPayload(StructureDeleteResultPayload const&);
    StructureDeleteResultPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureDeleteResultPayload() /*override*/;
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
