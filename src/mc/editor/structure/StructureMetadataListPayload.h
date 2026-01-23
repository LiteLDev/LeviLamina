#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class StructureMetadataListPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::StructureMetadataListPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd36f79;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureMetadataListPayload& operator=(StructureMetadataListPayload const&);
    StructureMetadataListPayload(StructureMetadataListPayload const&);
    StructureMetadataListPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureMetadataListPayload() /*override*/;
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
