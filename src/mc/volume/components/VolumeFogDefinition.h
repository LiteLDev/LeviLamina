#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VolumeFogDefinition {

public:
    // prevent constructor by default
    VolumeFogDefinition& operator=(VolumeFogDefinition const&) = delete;
    VolumeFogDefinition(VolumeFogDefinition const&)            = delete;
    VolumeFogDefinition()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?bindType\@VolumeFogDefinition\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?initialize\@VolumeFogDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVVolumeFogComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext&, class VolumeFogComponent&) const;
    /**
     * @symbol ??1VolumeFogDefinition\@\@QEAA\@XZ
     */
    MCAPI ~VolumeFogDefinition();
    /**
     * @symbol ?NAME\@VolumeFogDefinition\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NAME;
    // NOLINTEND
};
