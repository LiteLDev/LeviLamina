#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class StructureQueryPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::StructureQueryPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnkb3cb5c;
    ::ll::UntypedStorage<1, 1>   mUnk279361;
    ::ll::UntypedStorage<8, 24>  mUnkdba03d;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureQueryPayload(StructureQueryPayload const&);
    StructureQueryPayload();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~StructureQueryPayload() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~StructureQueryPayload() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Network::StructureQueryPayload& operator=(::Editor::Network::StructureQueryPayload const&);
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
