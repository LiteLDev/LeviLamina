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

class EnchantedBookItem : public ::Item {
public:
    // prevent constructor by default
    EnchantedBookItem& operator=(EnchantedBookItem const&);
    EnchantedBookItem(EnchantedBookItem const&);
    EnchantedBookItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnchantedBookItem() = default;

    // vIndex: 38
    virtual bool isGlint(class ItemStackBase const& stack) const;

    // vIndex: 50
    virtual int getEnchantSlot() const;

    // vIndex: 51
    virtual int getEnchantValue() const;

    MCAPI EnchantedBookItem(std::string const& name, int id, bool isGlint);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI int getEnchantSlot$() const;

    MCAPI int getEnchantValue$() const;

    MCAPI bool isGlint$(class ItemStackBase const& stack) const;

    // NOLINTEND
};
