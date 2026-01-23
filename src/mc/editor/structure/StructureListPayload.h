#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class StructureListPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::StructureListPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkeebd00;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureListPayload& operator=(StructureListPayload const&);
    StructureListPayload(StructureListPayload const&);
    StructureListPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureListPayload() /*override*/ = default;
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
