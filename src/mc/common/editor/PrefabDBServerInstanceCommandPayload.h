#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class PrefabDBServerInstanceCommandPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::PrefabDBServerInstanceCommandPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd4d969;
    ::ll::UntypedStorage<1, 2>  mUnkd33c83;
    ::ll::UntypedStorage<1, 2>  mUnkdd2c77;
    ::ll::UntypedStorage<1, 2>  mUnkec3790;
    ::ll::UntypedStorage<1, 2>  mUnk46f4e3;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBServerInstanceCommandPayload& operator=(PrefabDBServerInstanceCommandPayload const&);
    PrefabDBServerInstanceCommandPayload(PrefabDBServerInstanceCommandPayload const&);
    PrefabDBServerInstanceCommandPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrefabDBServerInstanceCommandPayload() /*override*/;
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
