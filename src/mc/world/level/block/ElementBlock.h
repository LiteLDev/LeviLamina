#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/ElementType.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class ItemInstance;
class RecipeIngredient;
struct ElementInfo;
namespace mce { class Color; }
// clang-format on

class ElementBlock : public ::BlockLegacy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ElementType> mType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 145
    virtual ::mce::Color getMapColor(::BlockSource&, ::BlockPos const&, ::Block const& block) const /*override*/;

    // vIndex: 112
    virtual ::std::string buildDescriptionId(::Block const& block) const /*override*/;

    // vIndex: 56
    virtual bool canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const /*override*/;

    // vIndex: 127
    virtual ::Block const* tryLegacyUpgrade(ushort extraData) const /*override*/;

    // vIndex: 0
    virtual ~ElementBlock() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ElementInfo getElementInfo(::ElementType e);

    MCNAPI static ::RecipeIngredient getIngredientForElement(::ElementType e, int stackCount);

    MCNAPI static ::ItemInstance getItemForElement(::ElementType e, int stackCount);

    MCNAPI static void initElements();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::BlockLegacy const*>& mElements();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::mce::Color $getMapColor(::BlockSource&, ::BlockPos const&, ::Block const& block) const;

    MCNAPI ::std::string $buildDescriptionId(::Block const& block) const;

    MCNAPI bool $canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const;

    MCNAPI ::Block const* $tryLegacyUpgrade(ushort extraData) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
