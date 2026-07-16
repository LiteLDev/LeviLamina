#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class FilePickerRequestPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::FilePickerRequestPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf9eedf;
    ::ll::UntypedStorage<8, 24> mUnk8be9fc;
    ::ll::UntypedStorage<8, 32> mUnk96519c;
    ::ll::UntypedStorage<4, 4>  mUnk311e4a;
    // NOLINTEND

public:
    // prevent constructor by default
    FilePickerRequestPayload& operator=(FilePickerRequestPayload const&);
    FilePickerRequestPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FilePickerRequestPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FilePickerRequestPayload(::Editor::Network::FilePickerRequestPayload const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::FilePickerRequestPayload const&);
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
