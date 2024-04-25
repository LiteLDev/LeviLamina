#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AllExperiments.h"

class Experiments {
public:
    // prevent constructor by default
    Experiments& operator=(Experiments const&);
    Experiments(Experiments const&);

public:
    // NOLINTBEGIN
    // symbol: ?Cameras@Experiments@@QEBA_NXZ
    MCAPI bool Cameras() const;

    // symbol: ?DataDrivenBiomes@Experiments@@QEBA_NXZ
    MCAPI bool DataDrivenBiomes() const;

    // symbol: ?DataDrivenItems@Experiments@@QEBA_NXZ
    MCAPI bool DataDrivenItems() const;

    // symbol: ??0Experiments@@QEAA@XZ
    MCAPI Experiments();

    // symbol: ?Gametest@Experiments@@QEBA_NXZ
    MCAPI bool Gametest() const;

    // symbol: ?UpcomingCreatorFeatures@Experiments@@QEBA_NXZ
    MCAPI bool UpcomingCreatorFeatures() const;

    // symbol: ?UpdateAnnouncedLive2023@Experiments@@QEBA_NXZ
    MCAPI bool UpdateAnnouncedLive2023() const;

    // symbol: ?VillagerTradesRebalance@Experiments@@QEBA_NXZ
    MCAPI bool VillagerTradesRebalance() const;

    // symbol:
    // ?getExperimentsActiveAsJSONList@Experiments@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getExperimentsActiveAsJSONList() const;

    // symbol:
    // ?getExperimentsActiveForTelemetry@Experiments@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> getExperimentsActiveForTelemetry() const;

    // symbol: ?getTagData@Experiments@@QEAAXAEBVCompoundTag@@@Z
    MCAPI void getTagData(class CompoundTag const& tag);

    // symbol: ?isExperimentEnabled@Experiments@@QEBA_NW4AllExperiments@@@Z
    MCAPI bool isExperimentEnabled(::AllExperiments experiment) const;

    // symbol: ?setExperimentEnabled@Experiments@@QEAAXW4AllExperiments@@_N@Z
    MCAPI void setExperimentEnabled(::AllExperiments experiment, bool value);

    // symbol: ?setTagData@Experiments@@QEBAXAEAVCompoundTag@@@Z
    MCAPI void setTagData(class CompoundTag& tag) const;

    // symbol: ??1Experiments@@QEAA@XZ
    MCAPI ~Experiments();

    // symbol:
    // ?getExperimentTextID@Experiments@@SAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4AllExperiments@@@Z
    MCAPI static std::string const& getExperimentTextID(::AllExperiments);

    // symbol:
    // ?getToggleNames@Experiments@@SAAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI static std::vector<std::string> const& getToggleNames();

    // NOLINTEND
};
