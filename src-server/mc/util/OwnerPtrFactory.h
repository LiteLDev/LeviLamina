#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/game_refs/OwnerPtr.h"

template<typename T0, typename T1>
class OwnerPtrFactory {
public:
    using FactoryMap = std::unordered_map<std::string, std::function<OwnerPtr<T0>(T1, T2)>>;
    FactoryMap mFactoryMap;

    MCAPI void registerFactory(std::string const&, std::function<OwnerPtr<T0>(T1, T2)>);
};
