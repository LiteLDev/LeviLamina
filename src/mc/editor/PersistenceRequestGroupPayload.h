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
    ::ll::UntypedStorage<8, 32> mUnkca9aba;
    ::ll::UntypedStorage<8, 32> mUnkb2dd0d;
    ::ll::UntypedStorage<4, 4>  mUnk7ecd44;
    ::ll::UntypedStorage<4, 8>  mUnk3b2cd2;
    // NOLINTEND

public:
    // prevent constructor by default
    PersistenceRequestGroupPayload& operator=(PersistenceRequestGroupPayload const&);
    PersistenceRequestGroupPayload(PersistenceRequestGroupPayload const&);
    PersistenceRequestGroupPayload();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Network
