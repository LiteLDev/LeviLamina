#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/RemovedState.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class CompoundTagUpdaterNodeBuilder;
namespace FlatteningUtils { class RemovedState; }
// clang-format on

namespace FlatteningUtils {

class RemovedStringState : public ::FlatteningUtils::RemovedState {
public:
    // prevent constructor by default
    RemovedStringState& operator=(RemovedStringState const&);
    RemovedStringState(RemovedStringState const&);
    RemovedStringState();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RemovedStringState() = default;

    // vIndex: 1
    virtual void addValue(class CompoundTag const&);

    // vIndex: 2
    virtual void match(class CompoundTagUpdaterNodeBuilder&, uint64) const;

    // vIndex: 3
    virtual uint64 valueCount() const;

    // NOLINTEND
};

}; // namespace FlatteningUtils
