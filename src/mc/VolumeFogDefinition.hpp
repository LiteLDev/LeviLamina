/**
 * @file  VolumeFogDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure VolumeFogDefinition.
 *
 */
struct VolumeFogDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMEFOGDEFINITION
public:
    struct VolumeFogDefinition& operator=(struct VolumeFogDefinition const &) = delete;
    VolumeFogDefinition(struct VolumeFogDefinition const &) = delete;
    VolumeFogDefinition() = delete;
#endif

public:
    /**
     * @symbol  ?initialize\@VolumeFogDefinition\@\@QEBAXAEAVEntityContext\@\@AEAVVolumeFogComponent\@\@\@Z
     */
    MCAPI void initialize(class EntityContext &, class VolumeFogComponent &) const;
    /**
     * @symbol  ??1VolumeFogDefinition\@\@QEAA\@XZ
     */
    MCAPI ~VolumeFogDefinition();
    /**
     * @symbol  ?NAME\@VolumeFogDefinition\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NAME;
    /**
     * @symbol  ?bindType\@VolumeFogDefinition\@\@SAXXZ
     */
    MCAPI static void bindType();

};