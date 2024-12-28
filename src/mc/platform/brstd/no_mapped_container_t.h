#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace brstd { struct no_value_t; }
// clang-format on

namespace brstd {

struct no_mapped_container_t {
public:
    // no_mapped_container_t inner types declare
    // clang-format off
    struct iterator;
    // clang-format on

    // no_mapped_container_t inner types define
    struct iterator {
    public:
        // prevent constructor by default
        iterator& operator=(iterator const&);
        iterator(iterator const&);
        iterator();
    };

public:
    // prevent constructor by default
    no_mapped_container_t& operator=(no_mapped_container_t const&);
    no_mapped_container_t(no_mapped_container_t const&);
    no_mapped_container_t();
};

} // namespace brstd
