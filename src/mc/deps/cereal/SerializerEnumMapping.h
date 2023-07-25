#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

class SerializerEnumMapping {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREAL_SERIALIZERENUMMAPPING
public:
    SerializerEnumMapping& operator=(SerializerEnumMapping const&) = delete;
    SerializerEnumMapping(SerializerEnumMapping const&)            = delete;
    SerializerEnumMapping()                                        = delete;
#endif

public:
    /**
     * @symbol
     * ?lookup\@SerializerEnumMapping\@cereal\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEA_J\@Z
     */
    MCAPI bool lookup(std::string const&, __int64&) const;
    /**
     * @symbol
     * ?lookup\@SerializerEnumMapping\@cereal\@\@QEBA_N_JAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool lookup(__int64, std::string&) const;
    /**
     * @symbol ??4SerializerEnumMapping\@cereal\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class cereal::SerializerEnumMapping& operator=(class cereal::SerializerEnumMapping&&);
    /**
     * @symbol
     * ?toString\@SerializerEnumMapping\@cereal\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;
};

}; // namespace cereal
