#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class EditorReplicationDeletePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::EditorReplicationDeletePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnke3a8ab;
    ::ll::UntypedStorage<4, 4>  mUnk6014a0;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorReplicationDeletePayload(EditorReplicationDeletePayload const&);
    EditorReplicationDeletePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorReplicationDeletePayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Network::EditorReplicationDeletePayload&
    operator=(::Editor::Network::EditorReplicationDeletePayload const&);
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
