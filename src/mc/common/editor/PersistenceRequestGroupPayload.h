#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/PersistenceScope.h"
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class PersistenceRequestGroupPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::PersistenceRequestGroupPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkca9aba;
    ::ll::UntypedStorage<8, 32> mUnkb2dd0d;
    ::ll::UntypedStorage<4, 4>  mUnk7ecd44;
    ::ll::UntypedStorage<4, 8>  mUnk3b2cd2;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceRequestGroupPayload& operator=(PersistenceRequestGroupPayload const&);
    PersistenceRequestGroupPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PersistenceRequestGroupPayload(::Editor::Network::PersistenceRequestGroupPayload const&);

    MCNAPI PersistenceRequestGroupPayload(
        ::std::string                        requestId,
        ::std::string                        namespacedName,
        ::Editor::Services::PersistenceScope scope,
        ::std::optional<int>                 version
    );

    MCNAPI ::Editor::Network::PersistenceRequestGroupPayload&
    operator=(::Editor::Network::PersistenceRequestGroupPayload&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::PersistenceRequestGroupPayload const&);

    MCNAPI void* $ctor(
        ::std::string                        requestId,
        ::std::string                        namespacedName,
        ::Editor::Services::PersistenceScope scope,
        ::std::optional<int>                 version
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
