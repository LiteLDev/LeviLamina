#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class PrefabDBClientUserClickInstancePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::PrefabDBClientUserClickInstancePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9693f2;
    ::ll::UntypedStorage<1, 1>  mUnk15d228;
    ::ll::UntypedStorage<1, 1>  mUnk497eef;
    ::ll::UntypedStorage<1, 1>  mUnk394649;
    ::ll::UntypedStorage<1, 2>  mUnk3853a7;
    ::ll::UntypedStorage<4, 16> mUnk9fe7d7;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabDBClientUserClickInstancePayload& operator=(PrefabDBClientUserClickInstancePayload const&);
    PrefabDBClientUserClickInstancePayload(PrefabDBClientUserClickInstancePayload const&);
    PrefabDBClientUserClickInstancePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PrefabDBClientUserClickInstancePayload() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
