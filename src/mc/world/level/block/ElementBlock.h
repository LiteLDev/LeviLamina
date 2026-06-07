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
    // prevent constructor by default
    ElementBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::mce::Color getMapColor(::BlockSource& block, ::BlockPos const&, ::Block const&) const /*override*/;

    virtual ::std::string buildDescriptionId(::Block const& block) const /*override*/;

    virtual bool canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const /*override*/;

    virtual ::Block const* tryLegacyUpgrade(ushort extraData) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ElementBlock(::std::string const& nameId, int id, ::ElementType type);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::ElementType getElement(::ItemStackBase const& item);
#endif

    MCAPI static ::ElementInfo getElementInfo(::ElementType e);

    MCAPI static ::std::string getElementName(::ElementType e);

    MCAPI static ::RecipeIngredient getIngredientForElement(::ElementType e, int stackCount);

    MCAPI static ::ItemInstance getItemForElement(::ElementType e, int stackCount);

    MCAPI static void initElements();

    MCAPI static bool isElement(::ItemStackBase const& item);

    MCAPI static void shutdownElements();

    MCAPI static ::BlockType const* tryGetBlockTypeForElement(::ElementType e);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::BlockType const*>& mElements();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::ElementType type);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::mce::Color $getMapColor(::BlockSource& block, ::BlockPos const&, ::Block const&) const;

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
