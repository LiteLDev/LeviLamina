#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace Puv { class LoadResultAny; }
// clang-format on

namespace Puv {

class Upgrader {
public:
    // prevent constructor by default
    Upgrader& operator=(Upgrader const&);
    Upgrader(Upgrader const&);
    Upgrader();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Upgrader();

    MCAPI Upgrader(class SemVersion from, class SemVersion to);

    MCAPI class SemVersion const& sourceVersion() const;

    MCAPI class SemVersion const& targetVersion() const;

    MCAPI class Puv::LoadResultAny upgrade(class Puv::LoadResultAny source) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Puv
