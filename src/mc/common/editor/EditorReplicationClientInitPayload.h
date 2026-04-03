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

class EditorReplicationClientInitPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::EditorReplicationClientInitPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk29af9b;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorReplicationClientInitPayload& operator=(EditorReplicationClientInitPayload const&);
    EditorReplicationClientInitPayload(EditorReplicationClientInitPayload const&);
    EditorReplicationClientInitPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorReplicationClientInitPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addObject(::HashedString const& id, uint typeHash, ::std::string&& data);
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
