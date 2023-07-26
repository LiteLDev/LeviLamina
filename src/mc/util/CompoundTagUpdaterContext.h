#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompoundTagUpdaterContext {

public:
    // prevent constructor by default
    CompoundTagUpdaterContext& operator=(CompoundTagUpdaterContext const&) = delete;
    CompoundTagUpdaterContext(CompoundTagUpdaterContext const&)            = delete;

public:
    /**
     * @symbol ??0CompoundTagUpdaterContext\@\@QEAA\@XZ
     */
    MCAPI CompoundTagUpdaterContext(); // NOLINT
    /**
     * @symbol ?addUpdater\@CompoundTagUpdaterContext\@\@QEAA?AVCompoundTagUpdaterBuilder\@\@EEE\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder addUpdater(unsigned char, unsigned char, unsigned char); // NOLINT
    /**
     * @symbol ?sortUpdaters\@CompoundTagUpdaterContext\@\@QEAAXXZ
     */
    MCAPI void sortUpdaters(); // NOLINT
    /**
     * @symbol ?update\@CompoundTagUpdaterContext\@\@QEAA?AW4CompoundTagUpdaterResult\@\@AEAVCompoundTag\@\@I\@Z
     */
    MCAPI enum class CompoundTagUpdaterResult update(class CompoundTag&, unsigned int); // NOLINT

    // private:
    /**
     * @symbol
     * ?comparisonPredicate\@CompoundTagUpdaterContext\@\@CA_NAEBV?$unique_ptr\@VCompoundTagUpdater\@\@U?$default_delete\@VCompoundTagUpdater\@\@\@std\@\@\@std\@\@0\@Z
     */
    MCAPI static bool
    comparisonPredicate(std::unique_ptr<class CompoundTagUpdater> const&, std::unique_ptr<class CompoundTagUpdater> const&); // NOLINT

private:
};
