#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
    ::ll::UntypedStorage<8, 32> mUnk1fe726;
    ::ll::UntypedStorage<8, 32> mUnkea2261;
    ::ll::UntypedStorage<4, 4>  mUnk7ecd44;
    ::ll::UntypedStorage<4, 8>  mUnk3b2cd2;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceRequestGroupPayload& operator=(PersistenceRequestGroupPayload const&);
    PersistenceRequestGroupPayload(PersistenceRequestGroupPayload const&);
    PersistenceRequestGroupPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersistenceRequestGroupPayload() /*override*/;
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
