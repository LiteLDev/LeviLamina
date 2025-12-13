#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"

// auto generated forward declare list
// clang-format off
class ItemStackRequestActionCraftBase;
class Recipes;
// clang-format on

class CraftHandlerAnvil : public ::CraftHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkbabe01;
    ::ll::UntypedStorage<8, 8> mUnk6a159d;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftHandlerAnvil& operator=(CraftHandlerAnvil const&);
    CraftHandlerAnvil(CraftHandlerAnvil const&);
    CraftHandlerAnvil();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftHandlerAnvil() /*override*/ = default;

    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const&) /*override*/;

    virtual void _postCraftRequest(bool const wasSuccess) /*override*/;

    virtual ::Recipes const* _getLevelRecipes() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
