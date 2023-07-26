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

    public:
        // prevent constructor by default
        VolumeDescription& operator=(VolumeDescription const&) = delete;
        VolumeDescription(VolumeDescription const&)            = delete;
        VolumeDescription()                                    = delete;

    public:
        /**
         * @symbol ??8VolumeDescription\@VolumeDefinition\@\@QEBA_NAEBU01\@\@Z
         */
        MCAPI bool operator==(struct VolumeDefinition::VolumeDescription const&) const; // NOLINT
        /**
         * @symbol ??1VolumeDescription\@VolumeDefinition\@\@QEAA\@XZ
         */
        MCAPI ~VolumeDescription(); // NOLINT
    };

public:
    // prevent constructor by default
    VolumeDefinition& operator=(VolumeDefinition const&) = delete;
    VolumeDefinition(VolumeDefinition const&)            = delete;

public:
    /**
     * @symbol ??0VolumeDefinition\@\@QEAA\@XZ
     */
    MCAPI VolumeDefinition(); // NOLINT
    /**
     * @symbol ??1VolumeDefinition\@\@QEAA\@XZ
     */
    MCAPI ~VolumeDefinition(); // NOLINT
    /**
     * @symbol ?bindType\@VolumeDefinition\@\@SAXXZ
     */
    MCAPI static void bindType(); // NOLINT
    /**
     * @symbol ?getMaxSupportedVersion\@VolumeDefinition\@\@SAAEBVSemVersion\@\@XZ
     */
    MCAPI static class SemVersion const& getMaxSupportedVersion(); // NOLINT
    /**
     * @symbol ?getMinSupportedVersion\@VolumeDefinition\@\@SAAEBVSemVersion\@\@XZ
     */
    MCAPI static class SemVersion const& getMinSupportedVersion(); // NOLINT
    /**
     * @symbol ?NAME\@VolumeDefinition\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NAME; // NOLINT
};
