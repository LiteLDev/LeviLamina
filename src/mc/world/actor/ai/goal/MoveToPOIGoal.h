#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/actor/ai/goal/BaseMoveToGoal.h"
#include "mc/world/actor/ai/village/POIType.h"

class MoveToPOIGoal : public ::BaseMoveToGoal {
public:
    // prevent constructor by default
    MoveToPOIGoal& operator=(MoveToPOIGoal const&);
    MoveToPOIGoal(MoveToPOIGoal const&);
    MoveToPOIGoal();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MoveToPOIGoal();

    // vIndex: 1
    virtual bool canUse();

    // vIndex: 5
    virtual void stop();

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void appendDebugInfo(std::string& str) const;

    // vIndex: 11
    virtual bool isValidTarget(class BlockSource& region, class BlockPos const& pos);

    // vIndex: 14
    virtual void _moveToBlock();

    // vIndex: 15
    virtual class Vec3 _getTargetPosition() const;

    // vIndex: 17
    virtual std::weak_ptr<class POIInstance> _getOwnedPOI(::POIType type) const;

    MCAPI MoveToPOIGoal(class Mob& mob, float speedModifier, ::POIType poiType, float coolddownTimeout);

    MCAPI bool getPOI(::POIType type);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _canReachPOI(class Vec3 const& pos, float radiusSqr, bool usingBoundingBox);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _updatePOIBooking();

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

    MCAPI std::weak_ptr<class POIInstance> _getOwnedPOI$(::POIType type) const;

    MCAPI class Vec3 _getTargetPosition$() const;

    MCAPI void _moveToBlock$();

    MCAPI void appendDebugInfo$(std::string& str) const;

    MCAPI bool canUse$();

    MCAPI bool isValidTarget$(class BlockSource& region, class BlockPos const& pos);

    MCAPI void stop$();

    MCAPI void tick$();

    // NOLINTEND
};
