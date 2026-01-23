#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class DynamicValue; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

struct IBlockCustomComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cereal::DynamicValue const& getParameters() const = 0;

    virtual bool hasPlayerInteractEvent() const = 0;

    virtual bool hasPlayerPlacingEvent() const = 0;

    virtual ~IBlockCustomComponent() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
