#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/wrapper/OwnerPtr.h"

template <typename T0, typename T1, typename T2>
class OwnerPtrFactory {
public:
    using FactoryMap = std::unordered_map<std::string, std::function<OwnerPtr<T0>(T1, T2)>>;
    FactoryMap mFactoryMap;
    // prevent constructor by default
    OwnerPtrFactory& operator=(OwnerPtrFactory const&);
    OwnerPtrFactory(OwnerPtrFactory const&);
    OwnerPtrFactory();

    MCAPI void registerFactory(std::string const&, std::function<OwnerPtr<T0>(T1, T2)>);
};
