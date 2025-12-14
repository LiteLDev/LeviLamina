#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/ItemStackNetIdVariant.h"
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class ItemStackRequestActionCraftBase;
class Player;
// clang-format on

class CraftHandlerGrindstone : public ::CraftHandlerBase {
public:
    // CraftHandlerGrindstone inner types declare
    // clang-format off
    struct ExperienceAmount;
    // clang-format on

    // CraftHandlerGrindstone inner types define
    struct ExperienceAmount {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mInput;
        ::ll::TypedStorage<4, 4, int> mAdditional;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Player&>                                  mPlayer;
    ::ll::TypedStorage<4, 24, ::ItemStackNetIdVariant>                   mSrcItemNetId;
    ::ll::TypedStorage<4, 8, ::CraftHandlerGrindstone::ExperienceAmount> mExperienceAmount;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftHandlerGrindstone& operator=(CraftHandlerGrindstone const&);
    CraftHandlerGrindstone(CraftHandlerGrindstone const&);
    CraftHandlerGrindstone();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftHandlerGrindstone() /*override*/ = default;

    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const&) /*override*/;

    virtual void _postCraftRequest(bool const wasSuccess) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI int _getExperienceFromItem(::ItemStack const& stack) const;

    MCNAPI bool
    _resolveNetIdAndValidate(::ContainerEnumName containerNetId, uchar slot, ::ItemStackNetIdVariant const& netId);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ItemStack _getResultItemWithNoEnchants(
        ::ItemStack&                      result,
        ::std::vector<::ItemStack> const& inputItems,
        bool&                             onlyHasCurses
    );

    MCNAPI static ::std::pair<::ItemStack, ::ItemStackNetIdVariant>
    getResultItem(::ItemStack const& input, ::ItemStack const& additional);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $_postCraftRequest(bool const wasSuccess);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
