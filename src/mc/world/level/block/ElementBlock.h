#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/ElementType.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Block;
class BlockPos;
class BlockSource;
class ItemInstance;
class ItemStackBase;
class RecipeIngredient;
struct ElementInfo;
namespace mce { class Color; }
// clang-format on

class ElementBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ElementType> mType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color getMapColor(::BlockSource&, ::BlockPos const&, ::Block const& block) const /*override*/;

    virtual ::std::string buildDescriptionId(::Block const& block) const /*override*/;

    virtual bool canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const /*override*/;

    virtual ::Block const* tryLegacyUpgrade(ushort extraData) const /*override*/;

    virtual ~ElementBlock() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static ::ElementType getElement(::ItemStackBase const& item);

    MCAPI static ::ElementInfo getElementInfo(::ElementType e);

    MCAPI static ::RecipeIngredient getIngredientForElement(::ElementType e, int stackCount);

    MCAPI static ::ItemInstance getItemForElement(::ElementType e, int stackCount);

    MCAPI static void initElements();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::BlockType const*>& mElements();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::mce::Color $getMapColor(::BlockSource&, ::BlockPos const&, ::Block const& block) const;

    MCAPI ::std::string $buildDescriptionId(::Block const& block) const;

    MCFOLD bool $canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const;

    MCAPI ::Block const* $tryLegacyUpgrade(ushort extraData) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
