#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class EditorReplicationUpdatePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::EditorReplicationUpdatePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnkf712c2;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorReplicationUpdatePayload& operator=(EditorReplicationUpdatePayload const&);
    EditorReplicationUpdatePayload(EditorReplicationUpdatePayload const&);
    EditorReplicationUpdatePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorReplicationUpdatePayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EditorReplicationUpdatePayload(::HashedString const& id, uint typeHash, ::std::string&& data);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::HashedString const& id, uint typeHash, ::std::string&& data);
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
