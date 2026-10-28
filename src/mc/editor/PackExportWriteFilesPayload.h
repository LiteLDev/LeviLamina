#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class PackExportWriteFilesPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::PackExportWriteFilesPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka6db13;
    ::ll::UntypedStorage<8, 32> mUnka18a3e;
    ::ll::UntypedStorage<4, 4>  mUnk70f85a;
    ::ll::UntypedStorage<8, 24> mUnkc0275a;
    // NOLINTEND

public:
    // prevent constructor by default
    PackExportWriteFilesPayload& operator=(PackExportWriteFilesPayload const&);
    PackExportWriteFilesPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackExportWriteFilesPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackExportWriteFilesPayload(::Editor::Network::PackExportWriteFilesPayload const&);

    MCNAPI ::Editor::Network::PackExportWriteFilesPayload& operator=(::Editor::Network::PackExportWriteFilesPayload&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::PackExportWriteFilesPayload const&);
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
