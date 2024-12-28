#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/selection/SelectionContainerCommon.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class SelectionContainerColorPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::SelectionContainerColorPayload>,
  public ::Editor::Network::SelectionContainerCommon {
public:
    // SelectionContainerColorPayload inner types define
    enum class Element : int {
        Outline = 0,
        Fill    = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkb384dc;
    ::ll::UntypedStorage<4, 16> mUnkd02fed;
    // NOLINTEND

public:
    // prevent constructor by default
    SelectionContainerColorPayload& operator=(SelectionContainerColorPayload const&);
    SelectionContainerColorPayload(SelectionContainerColorPayload const&);
    SelectionContainerColorPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SelectionContainerColorPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SelectionContainerColorPayload(
        ::mce::UUID const&                                         id,
        ::Editor::Network::SelectionContainerColorPayload::Element element,
        ::mce::Color const&                                        color,
        bool                                                       eventOnly
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::mce::UUID const&                                         id,
        ::Editor::Network::SelectionContainerColorPayload::Element element,
        ::mce::Color const&                                        color,
        bool                                                       eventOnly
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
