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
    ::ll::UntypedStorage<8, 32>  mUnk8c3efe;
    ::ll::UntypedStorage<8, 32>  mUnk43fe45;
    ::ll::UntypedStorage<8, 136> mUnk4be01e;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceResponseGroupPayload& operator=(PersistenceResponseGroupPayload const&);
    PersistenceResponseGroupPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersistenceResponseGroupPayload(::Editor::Network::PersistenceResponseGroupPayload const&);

    MCNAPI explicit PersistenceResponseGroupPayload(::std::string requestId);

    MCNAPI ::Editor::Network::PersistenceResponseGroupPayload&
    operator=(::Editor::Network::PersistenceResponseGroupPayload&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::PersistenceResponseGroupPayload const&);

    MCNAPI void* $ctor(::std::string requestId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
