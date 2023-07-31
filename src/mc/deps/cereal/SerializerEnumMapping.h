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
    // NOLINTBEGIN
    /**
     * @symbol
     * ?lookup\@SerializerEnumMapping\@cereal\@\@QEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEA_J\@Z
     */
    MCAPI bool lookup(std::string const&, int64_t&) const;
    /**
     * @symbol
     * ?lookup\@SerializerEnumMapping\@cereal\@\@QEBA_N_JAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool lookup(int64_t, std::string&) const;
    /**
     * @symbol ??4SerializerEnumMapping\@cereal\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class cereal::SerializerEnumMapping& operator=(class cereal::SerializerEnumMapping&&);
    /**
     * @symbol
     * ?toString\@SerializerEnumMapping\@cereal\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string toString() const;
    // NOLINTEND
};

}; // namespace cereal
