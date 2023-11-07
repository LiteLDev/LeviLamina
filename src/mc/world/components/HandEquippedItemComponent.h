#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class HandEquippedItemComponent {
public:
    // prevent constructor by default
    HandEquippedItemComponent& operator=(HandEquippedItemComponent const&);
    HandEquippedItemComponent(HandEquippedItemComponent const&);
    HandEquippedItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1HandEquippedItemComponent@@UEAA@XZ
    virtual ~HandEquippedItemComponent() = default;

    // vIndex: 9, symbol: ?_initializeComponent@HandEquippedItemComponent@@UEBAXXZ
    virtual void _initializeComponent() const;

    // symbol:
    // ?bindType@HandEquippedItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@HandEquippedItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
