#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class PersistenceResponseGroupPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::PersistenceResponseGroupPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkf097fa;
    ::ll::UntypedStorage<8, 32>  mUnk97efba;
    ::ll::UntypedStorage<8, 136> mUnk4be01e;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceResponseGroupPayload(PersistenceResponseGroupPayload const&);
    PersistenceResponseGroupPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersistenceResponseGroupPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Network::PersistenceResponseGroupPayload&
    operator=(::Editor::Network::PersistenceResponseGroupPayload const&);
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
