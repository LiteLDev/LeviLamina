#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class BindingCategoryRegisterPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::BindingCategoryRegisterPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk871d6c;
    ::ll::UntypedStorage<8, 32> mUnkf95678;
    ::ll::UntypedStorage<4, 4>  mUnke558cc;
    // NOLINTEND

public:
    // prevent constructor by default
    BindingCategoryRegisterPayload& operator=(BindingCategoryRegisterPayload const&);
    BindingCategoryRegisterPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BindingCategoryRegisterPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BindingCategoryRegisterPayload(::Editor::Network::BindingCategoryRegisterPayload const&);

    MCNAPI BindingCategoryRegisterPayload(::std::string id, ::std::string label, int order);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::Network::BindingCategoryRegisterPayload const&);

    MCNAPI void* $ctor(::std::string id, ::std::string label, int order);
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
