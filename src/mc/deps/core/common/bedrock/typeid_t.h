#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

template <typename T0>
class typeid_t {

public:
    constexpr static unsigned short count = 0;

    unsigned short value;
    typeid_t<T0>(typeid_t<T0> const& id) : value(id.value){};
    explicit typeid_t<T0>(unsigned short value) : value(value){};

    MCAPI constexpr static std::atomic<unsigned short>& _getCounter();
};

template <typename T0, typename T1>
MCAPI typeid_t<T0> type_id();

}; // namespace Bedrock
