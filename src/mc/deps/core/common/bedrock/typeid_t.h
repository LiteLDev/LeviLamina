#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

template <typename T0>
class typeid_t {

public:
    inline static unsigned short count = 0;

    unsigned short value;
    typeid_t<T0>(typeid_t<T0> const& id) : value(id.value){};
    typeid_t<T0>(unsigned short value) : value(value){};

    MCAPI inline static std::atomic<unsigned short>& _getCounter();
};

template <typename T, typename T2>
MCAPI typeid_t<T> type_id();

}; // namespace Bedrock
