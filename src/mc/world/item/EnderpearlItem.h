#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/item/InHandUpdateType.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemColor.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/block/BlockShape.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class EnderpearlItem : public ::Item {
public:
    // prevent constructor by default
    EnderpearlItem& operator=(EnderpearlItem const&);
    EnderpearlItem(EnderpearlItem const&);
    EnderpearlItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnderpearlItem() = default;

    // vIndex: 19
    virtual bool isThrowable() const;

    // vIndex: 72
    virtual class ItemStack& use(class ItemStack& item, class Player& player) const;

    // vIndex: 90
    virtual class HashedString const& getCooldownType() const;

    // vIndex: 91
    virtual int getCooldownTime() const;

    MCAPI EnderpearlItem(std::string const& nameId, int id);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& nameId, int id);

    MCAPI int getCooldownTime$() const;

    MCAPI class HashedString const& getCooldownType$() const;

    MCAPI bool isThrowable$() const;

    MCAPI class ItemStack& use$(class ItemStack& item, class Player& player) const;

    MCAPI static class HashedString const& ENDER_PEARL_COOLDOWN();

    // NOLINTEND
};
