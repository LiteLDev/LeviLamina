#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace GameEvents {

class PositionSource {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMEEVENTS_POSITIONSOURCE
public:
    PositionSource& operator=(PositionSource const&) = delete;
    PositionSource(PositionSource const&)            = delete;
    PositionSource()                                 = delete;
#endif

public:
    /**
     * @symbol ?getPosition\@PositionSource\@GameEvents\@\@QEBA?AV?$optional\@VVec3\@\@\@std\@\@AEBVIBlockSource\@\@\@Z
     */
    MCAPI class std::optional<class Vec3> getPosition(class IBlockSource const&) const;
    /**
     * @symbol ?serializeTo\@PositionSource\@GameEvents\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void serializeTo(class CompoundTag&) const;
    /**
     * @symbol ?forActor\@PositionSource\@GameEvents\@\@SA?AV12\@UActorUniqueID\@\@W4ActorLocation\@\@\@Z
     */
    MCAPI static class GameEvents::PositionSource forActor(struct ActorUniqueID, enum class ActorLocation);
    /**
     * @symbol ?forFixedPos\@PositionSource\@GameEvents\@\@SA?AV12\@AEBVVec3\@\@\@Z
     */
    MCAPI static class GameEvents::PositionSource forFixedPos(class Vec3 const&);
};

}; // namespace GameEvents
