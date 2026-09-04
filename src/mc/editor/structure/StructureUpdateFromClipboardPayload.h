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
    ::ll::UntypedStorage<8, 32> mUnk6a52fd;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureUpdateFromClipboardPayload& operator=(StructureUpdateFromClipboardPayload const&);
    StructureUpdateFromClipboardPayload(StructureUpdateFromClipboardPayload const&);
    StructureUpdateFromClipboardPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureUpdateFromClipboardPayload() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
