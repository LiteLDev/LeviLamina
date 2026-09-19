#include "mc/world/level/storage/Experiments.h"

#include "ll/api/memory/Symbol.h"
#include "mc/deps/core/container/DenseEnumMap.h"
#include "mc/world/level/storage/AllExperiments.h"

using ll::memory_literals::operator""_sym;

bool Experiments::isExperimentEnabled(AllExperiments experiment) const {
    auto       exp_mapping = *(
                                  Bedrock::DenseEnumMap<AllExperiments, int, 22>*
    )"?EXPERIMENT_MAPPING@ExperimentsAnon@?A0xF5A906DA@@3V?$DenseEnumMap@W4AllExperiments@@H$0BF@@Bedrock@@B.llvm.6072571035812580782"_sym
                                  .resolve();
    auto const index       = exp_mapping[experiment];
    if (index == -1) return false;
    if (index == -2) return true;
    return mExperimentData.get()[index];
}
