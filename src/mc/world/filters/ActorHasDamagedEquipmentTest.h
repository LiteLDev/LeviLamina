#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/ActorHasEquipmentTest.h"
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorHasDamagedEquipmentTest : public ::ActorHasEquipmentTest {
public:
    // prevent constructor by default
    ActorHasDamagedEquipmentTest& operator=(ActorHasDamagedEquipmentTest const&);
    ActorHasDamagedEquipmentTest(ActorHasDamagedEquipmentTest const&);
    ActorHasDamagedEquipmentTest();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorHasDamagedEquipmentTest@@UEAA@XZ
    virtual ~ActorHasDamagedEquipmentTest();

    // vIndex: 4, symbol:
    // ?getName@ActorHasDamagedEquipmentTest@@UEBA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@XZ
    virtual std::string_view getName() const;

    // vIndex: 7, symbol:
    // ?_isExpectedItem@ActorHasDamagedEquipmentTest@@MEBA_NAEBV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@@Z
    virtual bool _isExpectedItem(std::vector<class ItemStack const*> const&) const;

    // NOLINTEND
};
