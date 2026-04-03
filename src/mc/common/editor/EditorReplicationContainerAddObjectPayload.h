#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class EditorReplicationContainerAddObjectPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::EditorReplicationContainerAddObjectPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk111202;
    ::ll::UntypedStorage<4, 8>  mUnk820ed3;
    ::ll::UntypedStorage<8, 56> mUnk5a6ffc;
    ::ll::UntypedStorage<8, 48> mUnk13df6a;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorReplicationContainerAddObjectPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorReplicationContainerAddObjectPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    EditorReplicationContainerAddObjectPayload(::Editor::Network::EditorReplicationContainerAddObjectPayload const&);

    MCNAPI ::Editor::Network::EditorReplicationContainerAddObjectPayload&
    operator=(::Editor::Network::EditorReplicationContainerAddObjectPayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::EditorReplicationContainerAddObjectPayload const&);
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
