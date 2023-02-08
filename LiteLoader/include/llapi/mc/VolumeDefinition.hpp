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
     * @hash   117778377
     * @symbol  ??0VolumeDefinition\@\@QEAA\@XZ
     */
    MCAPI VolumeDefinition();
    /**
     * @symbol  ??0VolumeDefinition\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI VolumeDefinition(struct VolumeDefinition &&);
    /**
     * @hash   -1481758473
     * @symbol  ??1VolumeDefinition\@\@QEAA\@XZ
     */
    MCAPI ~VolumeDefinition();
    /**
     * @hash   -563126025
     * @symbol  ?NAME\@VolumeDefinition\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NAME;
    /**
     * @hash   -1171837821
     * @symbol  ?bindType\@VolumeDefinition\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   -295300608
     * @symbol  ?getMaxSupportedVersion\@VolumeDefinition\@\@SAAEBVSemVersion\@\@XZ
     */
    MCAPI static class SemVersion const & getMaxSupportedVersion();
    /**
     * @hash   -1808078100
     * @symbol  ?getMinSupportedVersion\@VolumeDefinition\@\@SAAEBVSemVersion\@\@XZ
     */
    MCAPI static class SemVersion const & getMinSupportedVersion();

};