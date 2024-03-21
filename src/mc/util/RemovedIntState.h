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

class RemovedIntState : public ::FlatteningUtils::RemovedState {
public:
    // prevent constructor by default
    RemovedIntState& operator=(RemovedIntState const&);
    RemovedIntState(RemovedIntState const&);
    RemovedIntState();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1RemovedIntState@FlatteningUtils@@UEAA@XZ
    virtual ~RemovedIntState() = default;

    // vIndex: 1, symbol: ?addValue@RemovedIntState@FlatteningUtils@@UEAAXAEBVCompoundTag@@@Z
    virtual void addValue(class CompoundTag const&);

    // vIndex: 2, symbol: ?match@RemovedIntState@FlatteningUtils@@UEBAXAEAVCompoundTagUpdaterNodeBuilder@@_K@Z
    virtual void match(class CompoundTagUpdaterNodeBuilder&, uint64) const;

    // vIndex: 3, symbol: ?valueCount@RemovedIntState@FlatteningUtils@@UEBA_KXZ
    virtual uint64 valueCount() const;

    // NOLINTEND
};

}; // namespace FlatteningUtils
