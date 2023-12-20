#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompoundTagUpdaterNodeBuilder {
public:
    // prevent constructor by default
    CompoundTagUpdaterNodeBuilder& operator=(CompoundTagUpdaterNodeBuilder const&);
    CompoundTagUpdaterNodeBuilder(CompoundTagUpdaterNodeBuilder const&);
    CompoundTagUpdaterNodeBuilder();

public:
    // NOLINTBEGIN
    // symbol:
    // ?edit@CompoundTagUpdaterNodeBuilder@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV?$function@$$A6AXAEAVCompoundTagEditHelper@@@Z@3@@Z
    MCAPI class CompoundTagUpdaterNodeBuilder&
    edit(std::string const&, std::function<void(class CompoundTagEditHelper&)>&&);

    // symbol:
    // ?fork@CompoundTagUpdaterNodeBuilder@@QEAAX_K$$QEAV?$function@$$A6AXAEAVCompoundTagUpdaterNodeBuilder@@_K@Z@std@@@Z
    MCAPI void fork(uint64, std::function<void(class CompoundTagUpdaterNodeBuilder&, uint64)>&&);

    // symbol:
    // ?match@CompoundTagUpdaterNodeBuilder@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@@Z
    MCAPI class CompoundTagUpdaterNodeBuilder& match(std::string const&, std::string);

    // symbol:
    // ?matchInteger@CompoundTagUpdaterNodeBuilder@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_J@Z
    MCAPI class CompoundTagUpdaterNodeBuilder& matchInteger(std::string const&, int64);

    // symbol:
    // ?matchLiteral@CompoundTagUpdaterNodeBuilder@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V23@@Z
    MCAPI class CompoundTagUpdaterNodeBuilder& matchLiteral(std::string const&, std::string);

    // symbol: ?popVisit@CompoundTagUpdaterNodeBuilder@@QEAAAEAV1@XZ
    MCAPI class CompoundTagUpdaterNodeBuilder& popVisit();

    // symbol:
    // ?remove@CompoundTagUpdaterNodeBuilder@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class CompoundTagUpdaterNodeBuilder& remove(std::string const&);

    // symbol:
    // ?rename@CompoundTagUpdaterNodeBuilder@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI class CompoundTagUpdaterNodeBuilder& rename(std::string const&, std::string const&);

    // symbol:
    // ?tryEdit@CompoundTagUpdaterNodeBuilder@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV?$function@$$A6AXAEAVCompoundTagEditHelper@@@Z@3@@Z
    MCAPI class CompoundTagUpdaterNodeBuilder&
    tryEdit(std::string const&, std::function<void(class CompoundTagEditHelper&)>&&);

    // symbol:
    // ?visit@CompoundTagUpdaterNodeBuilder@@QEAAAEAV1@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class CompoundTagUpdaterNodeBuilder& visit(std::string const&);

    // NOLINTEND
};
