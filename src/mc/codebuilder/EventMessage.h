#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Util::CodeBuilder { struct Event; }
// clang-format on

namespace CodeBuilder {

struct EventMessage {
public:
    // prevent constructor by default
    EventMessage& operator=(EventMessage const&);
    EventMessage(EventMessage const&);
    EventMessage();

public:
    // NOLINTBEGIN
    MCAPI explicit EventMessage(struct Util::CodeBuilder::Event const& event);

    MCAPI ~EventMessage();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace CodeBuilder
