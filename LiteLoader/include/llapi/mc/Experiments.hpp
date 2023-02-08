/**
 * @file  Experiments.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1972398988
     * @symbol  ?DataDrivenBiomes\@Experiments\@\@QEBA_NXZ
     */
    MCAPI bool DataDrivenBiomes() const;
    /**
     * @hash   77371138
     * @symbol  ?DataDrivenItems\@Experiments\@\@QEBA_NXZ
     */
    MCAPI bool DataDrivenItems() const;
    /**
     * @hash   848268786
     * @symbol  ??0Experiments\@\@QEAA\@XZ
     */
    MCAPI Experiments();
    /**
     * @hash   -1901900620
     * @symbol  ?Gametest\@Experiments\@\@QEBA_NXZ
     */
    MCAPI bool Gametest() const;
    /**
     * @hash   1042889730
     * @symbol  ?NextMajorUpdate\@Experiments\@\@QEBA_NXZ
     */
    MCAPI bool NextMajorUpdate() const;
    /**
     * @hash   -326447022
     * @symbol  ?UpcomingCreatorFeatures\@Experiments\@\@QEBA_NXZ
     */
    MCAPI bool UpcomingCreatorFeatures() const;
    /**
     * @hash   793583922
     * @symbol  ?getExperimentsActiveAsJSONList\@Experiments\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getExperimentsActiveAsJSONList() const;
    /**
     * @hash   -501728805
     * @symbol  ?getExperimentsActiveForTelemetry\@Experiments\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getExperimentsActiveForTelemetry() const;
    /**
     * @hash   -262325464
     * @symbol  ?getTagData\@Experiments\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void getTagData(class CompoundTag const &);
    /**
     * @hash   1071847471
     * @symbol  ?isExperimentEnabled\@Experiments\@\@QEBA_NW4AllExperiments\@\@\@Z
     */
    MCAPI bool isExperimentEnabled(enum class AllExperiments) const;
    /**
     * @hash   1335972171
     * @symbol  ?setExperimentEnabled\@Experiments\@\@QEAAXW4AllExperiments\@\@_N\@Z
     */
    MCAPI void setExperimentEnabled(enum class AllExperiments, bool);
    /**
     * @hash   -711541788
     * @symbol  ?setTagData\@Experiments\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void setTagData(class CompoundTag &) const;
    /**
     * @hash   1514663090
     * @symbol  ??1Experiments\@\@QEAA\@XZ
     */
    MCAPI ~Experiments();
    /**
     * @symbol  ?MinecraftExplorer\@Experiments\@\@SA_NXZ
     */
    MCAPI static bool MinecraftExplorer();
    /**
     * @hash   1283204699
     * @symbol  ?getExperimentTextID\@Experiments\@\@SAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4AllExperiments\@\@\@Z
     */
    MCAPI static std::string const & getExperimentTextID(enum class AllExperiments);
    /**
     * @hash   1560796881
     * @symbol  ?getToggleNames\@Experiments\@\@SAAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI static std::vector<std::string> const & getToggleNames();

};