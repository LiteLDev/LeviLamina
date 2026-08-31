#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class FilePickerResponsePayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::FilePickerResponsePayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd55d08;
    ::ll::UntypedStorage<8, 32> mUnkacf024;
    ::ll::UntypedStorage<8, 32> mUnk195c4c;
    // NOLINTEND

public:
    // prevent constructor by default
    FilePickerResponsePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FilePickerResponsePayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FilePickerResponsePayload(::Editor::Network::FilePickerResponsePayload const&);

    MCNAPI ::Editor::Network::FilePickerResponsePayload& operator=(::Editor::Network::FilePickerResponsePayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::FilePickerResponsePayload const&);
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
