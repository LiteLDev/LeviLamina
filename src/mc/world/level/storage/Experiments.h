#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Experiments {

public:
    // prevent constructor by default
    Experiments& operator=(Experiments const&) = delete;
    Experiments(Experiments const&)            = delete;

public:
    /**
     * @symbol ?Cameras\@Experiments\@\@QEBA_NXZ
     */
    MCAPI bool Cameras() const; // NOLINT
    /**
     * @symbol ?DataDrivenBiomes\@Experiments\@\@QEBA_NXZ
     */
    MCAPI bool DataDrivenBiomes() const; // NOLINT
    /**
     * @symbol ?DataDrivenItems\@Experiments\@\@QEBA_NXZ
     */
    MCAPI bool DataDrivenItems() const; // NOLINT
    /**
     * @symbol ??0Experiments\@\@QEAA\@XZ
     */
    MCAPI Experiments(); // NOLINT
    /**
     * @symbol ?Gametest\@Experiments\@\@QEBA_NXZ
     */
    MCAPI bool Gametest() const; // NOLINT
    /**
     * @symbol ?RecipeUnlocking\@Experiments\@\@QEBA_NXZ
     */
    MCAPI bool RecipeUnlocking() const; // NOLINT
    /**
     * @symbol ?ShortSneaking\@Experiments\@\@QEBA_NXZ
     */
    MCAPI bool ShortSneaking() const; // NOLINT
    /**
     * @symbol ?UpcomingCreatorFeatures\@Experiments\@\@QEBA_NXZ
     */
    MCAPI bool UpcomingCreatorFeatures() const; // NOLINT
    /**
     * @symbol
     * ?getExperimentsActiveAsJSONList\@Experiments\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getExperimentsActiveAsJSONList() const; // NOLINT
    /**
     * @symbol
     * ?getExperimentsActiveForTelemetry\@Experiments\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getExperimentsActiveForTelemetry() const; // NOLINT
    /**
     * @symbol ?getTagData\@Experiments\@\@QEAAXAEBVCompoundTag\@\@\@Z
     */
    MCAPI void getTagData(class CompoundTag const&); // NOLINT
    /**
     * @symbol ?isExperimentEnabled\@Experiments\@\@QEBA_NW4AllExperiments\@\@\@Z
     */
    MCAPI bool isExperimentEnabled(enum class AllExperiments) const; // NOLINT
    /**
     * @symbol ?setExperimentByToggleIndex\@Experiments\@\@QEAAX_K_N\@Z
     */
    MCAPI void setExperimentByToggleIndex(unsigned __int64, bool); // NOLINT
    /**
     * @symbol ?setExperimentEnabled\@Experiments\@\@QEAAXW4AllExperiments\@\@_N\@Z
     */
    MCAPI void setExperimentEnabled(enum class AllExperiments, bool); // NOLINT
    /**
     * @symbol ?setTagData\@Experiments\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void setTagData(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ??1Experiments\@\@QEAA\@XZ
     */
    MCAPI ~Experiments(); // NOLINT
    /**
     * @symbol ?MinecraftExplorer\@Experiments\@\@SA_NXZ
     */
    MCAPI static bool MinecraftExplorer(); // NOLINT
    /**
     * @symbol
     * ?getExperimentTextID\@Experiments\@\@SAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4AllExperiments\@\@\@Z
     */
    MCAPI static std::string const& getExperimentTextID(enum class AllExperiments); // NOLINT
    /**
     * @symbol
     * ?getToggleNames\@Experiments\@\@SAAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI static std::vector<std::string> const& getToggleNames(); // NOLINT
};
