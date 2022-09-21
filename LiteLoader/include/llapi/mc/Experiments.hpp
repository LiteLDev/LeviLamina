/**
 * @file  MC/Experiments.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Experiments.
 *
 */
class Experiments {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIMENTS
public:
    class Experiments& operator=(class Experiments const &) = delete;
    Experiments(class Experiments const &) = delete;
#endif

public:
    /**
     * @hash   1822356276
     * @symbol ?DataDrivenBiomes@Experiments@@QEBA_NXZ
     */
    MCAPI bool DataDrivenBiomes() const;
    /**
     * @hash   -422840894
     * @symbol ?DataDrivenItems@Experiments@@QEBA_NXZ
     */
    MCAPI bool DataDrivenItems() const;
    /**
     * @hash   348072130
     * @symbol ??0Experiments@@QEAA@XZ
     */
    MCAPI Experiments();
    /**
     * @hash   1892854644
     * @symbol ?Gametest@Experiments@@QEBA_NXZ
     */
    MCAPI bool Gametest() const;
    /**
     * @hash   -1656858206
     * @symbol ?SpectatorMode@Experiments@@QEBA_NXZ
     */
    MCAPI bool SpectatorMode() const;
    /**
     * @hash   -826659054
     * @symbol ?UpcomingCreatorFeatures@Experiments@@QEBA_NXZ
     */
    MCAPI bool UpcomingCreatorFeatures() const;
    /**
     * @hash   293356514
     * @symbol ?getExperimentsActiveAsJSONList@Experiments@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string getExperimentsActiveAsJSONList() const;
    /**
     * @hash   -1001956213
     * @symbol ?getExperimentsActiveForTelemetry@Experiments@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCAPI std::vector<std::string> getExperimentsActiveForTelemetry() const;
    /**
     * @hash   -762552872
     * @symbol ?getTagData@Experiments@@QEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void getTagData(class CompoundTag const &);
    /**
     * @hash   571620063
     * @symbol ?isExperimentEnabled@Experiments@@QEBA_NW4AllExperiments@@@Z
     */
    MCAPI bool isExperimentEnabled(enum AllExperiments) const;
    /**
     * @hash   -1211830700
     * @symbol ?setTagData@Experiments@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void setTagData(class CompoundTag &) const;
    /**
     * @hash   -1865140062
     * @symbol ??1Experiments@@QEAA@XZ
     */
    MCAPI ~Experiments();
    /**
     * @hash   782977291
     * @symbol ?getExperimentTextID@Experiments@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4AllExperiments@@@Z
     */
    MCAPI static std::string const & getExperimentTextID(enum AllExperiments);
    /**
     * @hash   1060569473
     * @symbol ?getToggleNames@Experiments@@SAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
     */
    MCAPI static std::vector<std::string> const & getToggleNames();

};