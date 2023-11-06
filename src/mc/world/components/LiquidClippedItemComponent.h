#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class LiquidClippedItemComponent {
public:
    // prevent constructor by default
    LiquidClippedItemComponent& operator=(LiquidClippedItemComponent const&);
    LiquidClippedItemComponent(LiquidClippedItemComponent const&);
    LiquidClippedItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~LiquidClippedItemComponent() = default;

    // vIndex: 9, symbol: ?_initializeComponent@LiquidClippedItemComponent@@UEBAXXZ
    virtual void _initializeComponent() const;

    // symbol: ?isLiquidClipped@LiquidClippedItemComponent@@QEBA_NXZ
    MCAPI bool isLiquidClipped() const;

    // symbol:
    // ?bindType@LiquidClippedItemComponent@@SAXAEAUReflectionCtx@cereal@@AEBV?$vector@W4AllExperiments@@V?$allocator@W4AllExperiments@@@std@@@std@@V?$optional@VSemVersion@@@5@@Z
    MCAPI static void
    bindType(struct cereal::ReflectionCtx&, std::vector<::AllExperiments> const&, std::optional<class SemVersion>);

    // symbol: ?getIdentifier@LiquidClippedItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // NOLINTEND
};
