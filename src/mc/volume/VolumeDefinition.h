#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VolumeDefinition {
public:
    // VolumeDefinition inner types declare
    // clang-format off
    struct VolumeDescription;
    // clang-format on

    // VolumeDefinition inner types define
    struct VolumeDescription {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMEDEFINITION_VOLUMEDESCRIPTION
    public:
        VolumeDescription& operator=(VolumeDescription const&) = delete;
        VolumeDescription(VolumeDescription const&)            = delete;
        VolumeDescription()                                    = delete;
#endif

    public:
        /**
         * @symbol ??8VolumeDescription\@VolumeDefinition\@\@QEBA_NAEBU01\@\@Z
         */
        MCAPI bool operator==(struct VolumeDefinition::VolumeDescription const&) const;
        /**
         * @symbol ??1VolumeDescription\@VolumeDefinition\@\@QEAA\@XZ
         */
        MCAPI ~VolumeDescription();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMEDEFINITION
public:
    VolumeDefinition& operator=(VolumeDefinition const&) = delete;
    VolumeDefinition(VolumeDefinition const&)            = delete;
#endif

public:
    /**
     * @symbol ??0VolumeDefinition\@\@QEAA\@XZ
     */
    MCAPI VolumeDefinition();
    /**
     * @symbol ??1VolumeDefinition\@\@QEAA\@XZ
     */
    MCAPI ~VolumeDefinition();
    /**
     * @symbol ?NAME\@VolumeDefinition\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NAME;
    /**
     * @symbol ?bindType\@VolumeDefinition\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @symbol ?getMaxSupportedVersion\@VolumeDefinition\@\@SAAEBVSemVersion\@\@XZ
     */
    MCAPI static class SemVersion const& getMaxSupportedVersion();
    /**
     * @symbol ?getMinSupportedVersion\@VolumeDefinition\@\@SAAEBVSemVersion\@\@XZ
     */
    MCAPI static class SemVersion const& getMinSupportedVersion();
};
