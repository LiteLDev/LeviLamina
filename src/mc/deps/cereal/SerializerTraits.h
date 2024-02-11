#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

struct SerializerTraits {
public:
    // prevent constructor by default
    SerializerTraits& operator=(SerializerTraits const&);

public:
    // NOLINTBEGIN
    // symbol: ??0SerializerTraits@cereal@@QEAA@XZ
    MCAPI SerializerTraits();

    // symbol: ??0SerializerTraits@cereal@@QEAA@$$QEAU01@@Z
    MCAPI SerializerTraits(struct cereal::SerializerTraits&&);

    // symbol: ??0SerializerTraits@cereal@@QEAA@AEBU01@@Z
    MCAPI SerializerTraits(struct cereal::SerializerTraits const&);

    // symbol: ?name@SerializerTraits@cereal@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& name() const;

    // symbol:
    // ?name@SerializerTraits@cereal@@QEAAAEAU12@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct cereal::SerializerTraits& name(std::string);

    // symbol:
    // ?namedSchema@SerializerTraits@cereal@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& namedSchema() const;

    // symbol:
    // ?namedSchema@SerializerTraits@cereal@@QEAAAEAU12@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI struct cereal::SerializerTraits& namedSchema(std::string);

    // symbol:
    // ?setEnumDocumentation@SerializerTraits@cereal@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setEnumDocumentation(std::string);

    // symbol: ??1SerializerTraits@cereal@@QEAA@XZ
    MCAPI ~SerializerTraits();

    // NOLINTEND
};

}; // namespace cereal
