#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class PackExportWriteFilesResponsePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::PackExportWriteFilesResponsePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk3fc210;
    ::ll::UntypedStorage<1, 1>  mUnk197b74;
    ::ll::UntypedStorage<8, 32> mUnkeaaf35;
    ::ll::UntypedStorage<8, 40> mUnk8408aa;
    // NOLINTEND

public:
    // prevent constructor by default
    PackExportWriteFilesResponsePayload(PackExportWriteFilesResponsePayload const&);
    PackExportWriteFilesResponsePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackExportWriteFilesResponsePayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackExportWriteFilesResponsePayload(
        ::mce::UUID const&             requestId,
        bool                           success,
        ::std::string const&           packPath,
        ::std::optional<::std::string> message
    );

    MCNAPI ::Editor::Network::PackExportWriteFilesResponsePayload&
    operator=(::Editor::Network::PackExportWriteFilesResponsePayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::mce::UUID const&             requestId,
        bool                           success,
        ::std::string const&           packPath,
        ::std::optional<::std::string> message
    );
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
