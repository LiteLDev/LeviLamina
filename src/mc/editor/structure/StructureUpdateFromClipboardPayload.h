#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class StructureUpdateFromClipboardPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::StructureUpdateFromClipboardPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3e96f6;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureUpdateFromClipboardPayload(StructureUpdateFromClipboardPayload const&);
    StructureUpdateFromClipboardPayload();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~StructureUpdateFromClipboardPayload() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~StructureUpdateFromClipboardPayload() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Network::StructureUpdateFromClipboardPayload&
    operator=(::Editor::Network::StructureUpdateFromClipboardPayload const&);
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
