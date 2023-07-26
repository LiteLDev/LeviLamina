#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

class SerializerEnumMapping {

public:
    // prevent constructor by default
    SerializerEnumMapping& operator=(SerializerEnumMapping const&) = delete;
    SerializerEnumMapping(SerializerEnumMapping const&)            = delete;
    SerializerEnumMapping()                                        = delete;

public:
    /**
     * @symbol
     * ?lookup\@SerializerEnumMapping\@cereal\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEA_J\@Z
     */
    MCAPI bool lookup(std::string const&, __int64&) const; // NOLINT
    /**
     * @symbol
     * ?lookup\@SerializerEnumMapping\@cereal\@\@QEBA_N_JAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool lookup(__int64, std::string&) const; // NOLINT
    /**
     * @symbol ??4SerializerEnumMapping\@cereal\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class cereal::SerializerEnumMapping& operator=(class cereal::SerializerEnumMapping&&); // NOLINT
    /**
     * @symbol
     * ?toString\@SerializerEnumMapping\@cereal\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const; // NOLINT
};

}; // namespace cereal
