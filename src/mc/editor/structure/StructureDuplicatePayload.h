#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
class HashedString;
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
    StructureDuplicatePayload();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~StructureDuplicatePayload() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~StructureDuplicatePayload() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureDuplicatePayload(::Editor::Network::StructureDuplicatePayload const&);

    MCNAPI_C StructureDuplicatePayload(::HashedString const& newId, ::HashedString const& fromId);

    MCNAPI ::Editor::Network::StructureDuplicatePayload& operator=(::Editor::Network::StructureDuplicatePayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::StructureDuplicatePayload const&);

    MCNAPI_C void* $ctor(::HashedString const& newId, ::HashedString const& fromId);
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
