#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"
#include "mc/enums/EquipmentSlot.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class WearableItemComponent {
public:
    // prevent constructor by default
    WearableItemComponent& operator=(WearableItemComponent const&);
    WearableItemComponent(WearableItemComponent const&);
    WearableItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WearableItemComponent@@UEAA@XZ
    virtual ~WearableItemComponent() = default;

    // vIndex: 9, symbol: ?_initializeComponent@WearableItemComponent@@UEBAXXZ
    virtual void _initializeComponent() const;

    // symbol: ??0WearableItemComponent@@QEAA@W4EquipmentSlot@@H@Z
    MCAPI WearableItemComponent(::EquipmentSlot, int);

    // symbol: ?dispense@WearableItemComponent@@QEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
    MCAPI bool dispense(class BlockSource&, class Container&, int, class Vec3 const&, uchar) const;

    // symbol: ?getSlot@WearableItemComponent@@QEBA?AW4EquipmentSlot@@XZ
    MCAPI ::EquipmentSlot getSlot() const;

    // symbol:
    // ?bindType@WearableItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@WearableItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
