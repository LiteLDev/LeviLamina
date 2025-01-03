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
class ItemStackBase;
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
    // vIndex: 148
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
    // member functions
    // NOLINTBEGIN
    MCAPI ElementBlock(::std::string const& nameId, int id, ::ElementType type);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ElementInfo getElementInfo(::ElementType e);

    MCAPI static ::RecipeIngredient getIngredientForElement(::ElementType e, int stackCount);

    MCAPI static ::ItemInstance getItemForElement(::ElementType e, int stackCount);

    MCAPI static void initElements();

    MCAPI static bool isElement(::BlockLegacy const& block);

    MCAPI static bool isElement(::ItemStackBase const& item);

    MCAPI static void shutdownElements();

    MCAPI static ::BlockLegacy const* tryGetBlockLegacyForElement(::ElementType e);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::BlockLegacy const*>& mElements();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::ElementType type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::mce::Color $getMapColor(::BlockSource&, ::BlockPos const&, ::Block const& block) const;

    MCAPI ::std::string $buildDescriptionId(::Block const& block) const;

    MCAPI bool $canBeUsedInCommands(::BaseGameVersion const& baseGameVersion) const;

    MCAPI ::Block const* $tryLegacyUpgrade(ushort extraData) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
