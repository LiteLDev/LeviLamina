#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class ItemStackRequestActionCraftBase;
struct ItemStackNetIdVariant;
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
        ::ll::UntypedStorage<4, 4> mUnk7394fb;
        ::ll::UntypedStorage<4, 4> mUnkb0404b;
        // NOLINTEND

    public:
        // prevent constructor by default
        ExperienceAmount& operator=(ExperienceAmount const&);
        ExperienceAmount(ExperienceAmount const&);
        ExperienceAmount();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke00968;
    ::ll::UntypedStorage<4, 24> mUnkbf07a4;
    ::ll::UntypedStorage<4, 8>  mUnk98602c;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftHandlerGrindstone& operator=(CraftHandlerGrindstone const&);
    CraftHandlerGrindstone(CraftHandlerGrindstone const&);
    CraftHandlerGrindstone();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftHandlerGrindstone() /*override*/ = default;

    // vIndex: 4
    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const&) /*override*/;

    // vIndex: 5
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
    // destructor thunk
    // NOLINTBEGIN

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
