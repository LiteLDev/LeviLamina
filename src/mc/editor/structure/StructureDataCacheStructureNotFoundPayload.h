#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class StructureDataCacheStructureNotFoundPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::StructureDataCacheStructureNotFoundPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkfdb441;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureDataCacheStructureNotFoundPayload& operator=(StructureDataCacheStructureNotFoundPayload const&);
    StructureDataCacheStructureNotFoundPayload(StructureDataCacheStructureNotFoundPayload const&);
    StructureDataCacheStructureNotFoundPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureDataCacheStructureNotFoundPayload() /*override*/ = default;
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
