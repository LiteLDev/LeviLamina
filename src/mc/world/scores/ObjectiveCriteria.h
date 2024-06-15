#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ObjectiveRenderType.h"

class ObjectiveCriteria {
public:
    // prevent constructor by default
    ObjectiveCriteria& operator=(ObjectiveCriteria const&);
    ObjectiveCriteria(ObjectiveCriteria const&);
    ObjectiveCriteria();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ObjectiveCriteria@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NW4ObjectiveRenderType@@@Z
    MCAPI ObjectiveCriteria(std::string const& name, bool readOnly, ::ObjectiveRenderType renderType);

    // symbol: ?getName@ObjectiveCriteria@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getName() const;

    // symbol: ?isReadOnly@ObjectiveCriteria@@QEBA_NXZ
    MCAPI bool isReadOnly() const;

    // symbol:
    // ?deserialize@ObjectiveCriteria@@SA?AV?$unique_ptr@VObjectiveCriteria@@U?$default_delete@VObjectiveCriteria@@@std@@@std@@AEBVCompoundTag@@@Z
    MCAPI static std::unique_ptr<class ObjectiveCriteria> deserialize(class CompoundTag const& dataTag);

    // symbol:
    // ?serialize@ObjectiveCriteria@@SA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBV1@@Z
    MCAPI static std::unique_ptr<class CompoundTag> serialize(class ObjectiveCriteria const& toSave);

    // NOLINTEND
};
