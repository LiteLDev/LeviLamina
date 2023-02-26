/**
 * @file  VolumeDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure VolumeDefinition.
 *
 */
struct VolumeDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMEDEFINITION
public:
    struct VolumeDefinition& operator=(struct VolumeDefinition const &) = delete;
    VolumeDefinition(struct VolumeDefinition const &) = delete;
#endif

public:
    /**
     * @symbol  ??0VolumeDefinition\@\@QEAA\@XZ
     */
    MCAPI VolumeDefinition();
    /**
     * @symbol  ??0VolumeDefinition\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI VolumeDefinition(struct VolumeDefinition &&);
    /**
     * @symbol  ??1VolumeDefinition\@\@QEAA\@XZ
     */
    MCAPI ~VolumeDefinition();
    /**
     * @symbol  ?NAME\@VolumeDefinition\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NAME;
    /**
     * @symbol  ?bindType\@VolumeDefinition\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol  ?getMaxSupportedVersion\@VolumeDefinition\@\@SAAEBVSemVersion\@\@XZ
     */
    MCAPI static class SemVersion const & getMaxSupportedVersion();
    /**
     * @symbol  ?getMinSupportedVersion\@VolumeDefinition\@\@SAAEBVSemVersion\@\@XZ
     */
    MCAPI static class SemVersion const & getMinSupportedVersion();

};