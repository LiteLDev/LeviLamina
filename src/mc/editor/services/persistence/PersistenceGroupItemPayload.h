#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class PersistenceGroupItemPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::PersistenceGroupItemPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnkad13d5;
    ::ll::UntypedStorage<4, 4>  mUnk8f4cb2;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceGroupItemPayload& operator=(PersistenceGroupItemPayload const&);
    PersistenceGroupItemPayload(PersistenceGroupItemPayload const&);
    PersistenceGroupItemPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PersistenceGroupItemPayload() /*override*/;
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
