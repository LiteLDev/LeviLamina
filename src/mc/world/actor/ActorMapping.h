#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorTypeNamespaceRules.h"

struct ActorMapping {
public:
    // prevent constructor by default
    ActorMapping& operator=(ActorMapping const&);
    ActorMapping(ActorMapping const&);
    ActorMapping();

public:
    // NOLINTBEGIN
    // symbol: ??0ActorMapping@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI ActorMapping(std::string const&, std::string const&);

    // symbol: ??0ActorMapping@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
    MCAPI ActorMapping(std::string const& space, std::string const& primary, std::string const& alt);

    // symbol:
    // ?getMappingName@ActorMapping@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4ActorTypeNamespaceRules@@@Z
    MCAPI std::string getMappingName(::ActorTypeNamespaceRules) const;

    // symbol: ??1ActorMapping@@QEAA@XZ
    MCAPI ~ActorMapping();

    // NOLINTEND
};
