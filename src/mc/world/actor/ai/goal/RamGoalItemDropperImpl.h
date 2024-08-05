#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ai/goal/RamGoalItemDropperInterface.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace RamAttackGoalUtils { class RamGoalItemDropperInterface; }
// clang-format on

namespace RamAttackGoalUtils {

class RamGoalItemDropperImpl : public ::RamAttackGoalUtils::RamGoalItemDropperInterface {
public:
    // prevent constructor by default
    RamGoalItemDropperImpl& operator=(RamGoalItemDropperImpl const&);
    RamGoalItemDropperImpl(RamGoalItemDropperImpl const&);
    RamGoalItemDropperImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RamGoalItemDropperImpl() = default;

    // vIndex: 1
    virtual void tryDropHorn(class Vec3) const;

    // vIndex: 2
    virtual void checkForHornDropOnCollision(class Vec3);

    // vIndex: 3
    virtual void dontDropHorn();

    // NOLINTEND
};

}; // namespace RamAttackGoalUtils
