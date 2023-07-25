#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompoundTagUpdaterContext {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDTAGUPDATERCONTEXT
public:
    CompoundTagUpdaterContext& operator=(CompoundTagUpdaterContext const&) = delete;
    CompoundTagUpdaterContext(CompoundTagUpdaterContext const&)            = delete;
#endif

public:
    /**
     * @symbol ??0CompoundTagUpdaterContext\@\@QEAA\@XZ
     */
    MCAPI CompoundTagUpdaterContext();
    /**
     * @symbol ?addUpdater\@CompoundTagUpdaterContext\@\@QEAA?AVCompoundTagUpdaterBuilder\@\@EEE\@Z
     */
    MCAPI class CompoundTagUpdaterBuilder addUpdater(unsigned char, unsigned char, unsigned char);
    /**
     * @symbol ?sortUpdaters\@CompoundTagUpdaterContext\@\@QEAAXXZ
     */
    MCAPI void sortUpdaters();
    /**
     * @symbol ?update\@CompoundTagUpdaterContext\@\@QEAA?AW4CompoundTagUpdaterResult\@\@AEAVCompoundTag\@\@I\@Z
     */
    MCAPI enum class CompoundTagUpdaterResult update(class CompoundTag&, unsigned int);

    // private:
    /**
     * @symbol
     * ?comparisonPredicate\@CompoundTagUpdaterContext\@\@CA_NAEBV?$unique_ptr\@VCompoundTagUpdater\@\@U?$default_delete\@VCompoundTagUpdater\@\@\@std\@\@\@std\@\@0\@Z
     */
    MCAPI static bool
    comparisonPredicate(std::unique_ptr<class CompoundTagUpdater> const&, std::unique_ptr<class CompoundTagUpdater> const&);

private:
};
