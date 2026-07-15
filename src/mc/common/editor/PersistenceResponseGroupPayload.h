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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    PersistenceResponseGroupPayload& operator=(PersistenceResponseGroupPayload const&);
    PersistenceResponseGroupPayload();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    PersistenceResponseGroupPayload& operator=(PersistenceResponseGroupPayload const&);
    PersistenceResponseGroupPayload(PersistenceResponseGroupPayload const&);
    PersistenceResponseGroupPayload();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI PersistenceResponseGroupPayload(::Editor::Network::PersistenceResponseGroupPayload const&);

    MCNAPI explicit PersistenceResponseGroupPayload(::std::string requestId);

    MCNAPI ::Editor::Network::PersistenceResponseGroupPayload&
    operator=(::Editor::Network::PersistenceResponseGroupPayload&&);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::Editor::Network::PersistenceResponseGroupPayload const&);

    MCNAPI void* $ctor(::std::string requestId);
#endif
    // NOLINTEND
};

} // namespace Editor::Network
