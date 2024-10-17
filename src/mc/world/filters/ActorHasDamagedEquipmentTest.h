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
    // vIndex: 0
    virtual ~ActorHasDamagedEquipmentTest();

    // vIndex: 4
    virtual std::string_view getName() const;

    // vIndex: 7
    virtual bool _isExpectedItem(std::vector<class ItemStack const*> const& itemList) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI bool _isExpectedItem$(std::vector<class ItemStack const*> const& itemList) const;

    MCAPI std::string_view getName$() const;

    // NOLINTEND
};
