/**
 * @file  CompoundTagUpdaterContext.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CompoundTagUpdaterContext.
 *
 */
class CompoundTagUpdaterContext {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPOUNDTAGUPDATERCONTEXT
public:
    class CompoundTagUpdaterContext& operator=(class CompoundTagUpdaterContext const &) = delete;
    CompoundTagUpdaterContext(class CompoundTagUpdaterContext const &) = delete;
#endif

public:
    /**
     * @hash   44358929
     * @symbol ??0CompoundTagUpdaterContext@@QEAA@XZ
     */
    MCAPI CompoundTagUpdaterContext();
    /**
     * @hash   -1082604826
     * @symbol ?addUpdater@CompoundTagUpdaterContext@@QEAA?AVCompoundTagUpdaterBuilder@@EEE@Z
     */
    MCAPI class CompoundTagUpdaterBuilder addUpdater(unsigned char, unsigned char, unsigned char);
    /**
     * @hash   -301498701
     * @symbol ?sortUpdaters@CompoundTagUpdaterContext@@QEAAXXZ
     */
    MCAPI void sortUpdaters();
    /**
     * @hash   720761458
     * @symbol ?update@CompoundTagUpdaterContext@@QEAA?AW4CompoundTagUpdaterResult@@AEAVCompoundTag@@I@Z
     */
    MCAPI enum class CompoundTagUpdaterResult update(class CompoundTag &, unsigned int);

//private:
    /**
     * @hash   1648780947
     * @symbol ?comparisonPredicate@CompoundTagUpdaterContext@@CA_NAEBV?$unique_ptr@VCompoundTagUpdater@@U?$default_delete@VCompoundTagUpdater@@@std@@@std@@0@Z
     */
    MCAPI static bool comparisonPredicate(std::unique_ptr<class CompoundTagUpdater> const &, std::unique_ptr<class CompoundTagUpdater> const &);

private:

};