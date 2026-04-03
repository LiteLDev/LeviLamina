#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class EditorReplicationContainerDeleteObjectPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::EditorReplicationContainerDeleteObjectPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnka778a8;
    ::ll::UntypedStorage<4, 8>  mUnk260794;
    ::ll::UntypedStorage<8, 56> mUnk6de839;
    ::ll::UntypedStorage<8, 48> mUnke05b0c;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorReplicationContainerDeleteObjectPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorReplicationContainerDeleteObjectPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorReplicationContainerDeleteObjectPayload(
        ::Editor::Network::EditorReplicationContainerDeleteObjectPayload const&
    );

    MCNAPI ::Editor::Network::EditorReplicationContainerDeleteObjectPayload&
    operator=(::Editor::Network::EditorReplicationContainerDeleteObjectPayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::EditorReplicationContainerDeleteObjectPayload const&);
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
