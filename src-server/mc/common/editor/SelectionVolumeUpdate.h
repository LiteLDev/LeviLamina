#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class SelectionVolumeUpdate : public ::Editor::Network::NetworkPayload<::Editor::Network::SelectionVolumeUpdate> {
public:
    // SelectionVolumeUpdate inner types define
    enum class Action : int {
        Set = 0,
        Add = 1,
        Remove = 2,
        Clear = 3,
        Translate = 4,
        Move = 5,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk83f8d2;
    ::ll::UntypedStorage<8, 104> mUnkead264;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectionVolumeUpdate& operator=(SelectionVolumeUpdate const&);
    SelectionVolumeUpdate(SelectionVolumeUpdate const&);
    SelectionVolumeUpdate();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SelectionVolumeUpdate() /*override*/;
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

}
