#include "mc/world/level/storage/Experiments.h"

#include "ll/api/memory/Symbol.h"
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/world/level/storage/AllExperiments.h"

using namespace ll::memory_literals;

bool Experiments::isExperimentEnabled(AllExperiments experiment) const {
    auto& exp_mapping = *reinterpret_cast<Bedrock::DenseEnumMap<AllExperiments, int, 22>*>(
        "`anonymous namespace'::ExperimentsAnon::EXPERIMENT_MAPPING"_sym.resolve()
    );
    auto const index = exp_mapping[experiment];
    if (index == -1) return false;
    if (index == -2) return true;
    return mExperimentData.get()[index];
}
