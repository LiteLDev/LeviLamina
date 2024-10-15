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

class BannerPatternItem : public ::Item {
public:
    // BannerPatternItem inner types define
    enum class Type {};

public:
    // prevent constructor by default
    BannerPatternItem& operator=(BannerPatternItem const&);
    BannerPatternItem(BannerPatternItem const&);
    BannerPatternItem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BannerPatternItem() = default;

    // vIndex: 39
    virtual bool isPattern() const;

    // vIndex: 40
    virtual int getPatternIndex() const;

    // vIndex: 48
    virtual void appendFormattedHovertext(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    // vIndex: 83
    virtual std::string buildDescriptionId(class ItemDescriptor const&, class CompoundTag const*) const;

    MCAPI BannerPatternItem(std::string const& name, int id, ::BannerPatternItem::Type type);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(std::string const& name, int id, ::BannerPatternItem::Type type);

    MCAPI void appendFormattedHovertext$(
        class ItemStackBase const& stack,
        class Level&               level,
        std::string&               hovertext,
        bool                       showCategory
    ) const;

    MCAPI std::string buildDescriptionId$(class ItemDescriptor const&, class CompoundTag const*) const;

    MCAPI int getPatternIndex$() const;

    MCAPI bool isPattern$() const;

    // NOLINTEND
};
