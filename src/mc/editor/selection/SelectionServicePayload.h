#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class SelectionServicePayload : public ::Editor::Network::NetworkPayload<::Editor::Network::SelectionServicePayload> {
public:
    // SelectionServicePayload inner types define
    enum class Action : int {
        Create  = 0,
        Destroy = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9156d0;
    ::ll::UntypedStorage<1, 1>  mUnkd4078e;
    ::ll::UntypedStorage<1, 1>  mUnkdae2c3;
    ::ll::UntypedStorage<4, 4>  mUnkc16900;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectionServicePayload& operator=(SelectionServicePayload const&);
    SelectionServicePayload(SelectionServicePayload const&);
    SelectionServicePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SelectionServicePayload() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
