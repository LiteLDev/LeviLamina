#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace EAS { struct EnvironmentAttributeData; }
// clang-format on

namespace EAS {

class IAttributeWrapper {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAttributeWrapper() = default;

    virtual ::EAS::EnvironmentAttributeData toData() const = 0;

    virtual void tick() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace EAS
