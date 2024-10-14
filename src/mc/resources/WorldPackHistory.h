#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class WorldPackHistory {
public:
    // prevent constructor by default
    WorldPackHistory& operator=(WorldPackHistory const&);

public:
    // NOLINTBEGIN
    MCAPI WorldPackHistory();

    MCAPI WorldPackHistory(class WorldPackHistory const&);

    MCAPI bool initializeFromJson(class Json::Value const& value);

    MCAPI ~WorldPackHistory();

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
