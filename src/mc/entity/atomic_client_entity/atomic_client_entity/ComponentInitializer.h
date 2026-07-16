#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
namespace cereal { class ComponentStorage; }
// clang-format on

namespace AtomicClientEntity {

class ComponentInitializer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ComponentInitializer() = default;

    virtual void
    initializeFromStorage(::EntityContext&, ::cereal::ComponentStorage const&, ::std::string const&) const = 0;

    virtual ::std::string_view getComponentName() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace AtomicClientEntity
