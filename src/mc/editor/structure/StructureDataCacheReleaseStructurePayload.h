#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class StructureDataCacheReleaseStructurePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::StructureDataCacheReleaseStructurePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7909bf;
    ::ll::UntypedStorage<8, 16> mUnkc0530d;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureDataCacheReleaseStructurePayload& operator=(StructureDataCacheReleaseStructurePayload const&);
    StructureDataCacheReleaseStructurePayload(StructureDataCacheReleaseStructurePayload const&);
    StructureDataCacheReleaseStructurePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureDataCacheReleaseStructurePayload() /*override*/ = default;
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
