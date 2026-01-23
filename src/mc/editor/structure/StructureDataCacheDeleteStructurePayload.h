#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class StructureDataCacheDeleteStructurePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::StructureDataCacheDeleteStructurePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk518a50;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureDataCacheDeleteStructurePayload& operator=(StructureDataCacheDeleteStructurePayload const&);
    StructureDataCacheDeleteStructurePayload(StructureDataCacheDeleteStructurePayload const&);
    StructureDataCacheDeleteStructurePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureDataCacheDeleteStructurePayload() /*override*/ = default;
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
