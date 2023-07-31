#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class IBlockSource;
class Vec3;
enum class ActorLocation;
struct ActorUniqueID;
// clang-format on

namespace GameEvents {

class PositionSource {

public:
    // prevent constructor by default
    PositionSource& operator=(PositionSource const&) = delete;
    PositionSource(PositionSource const&)            = delete;
    PositionSource()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?forActor\@PositionSource\@GameEvents\@\@SA?AV12\@UActorUniqueID\@\@W4ActorLocation\@\@\@Z
     */
    MCAPI static class GameEvents::PositionSource forActor(struct ActorUniqueID, enum class ActorLocation);
    /**
     * @symbol ?forFixedPos\@PositionSource\@GameEvents\@\@SA?AV12\@AEBVVec3\@\@\@Z
     */
    MCAPI static class GameEvents::PositionSource forFixedPos(class Vec3 const&);
    /**
     * @symbol ?getPosition\@PositionSource\@GameEvents\@\@QEBA?AV?$optional\@VVec3\@\@\@std\@\@AEBVIBlockSource\@\@\@Z
     */
    MCAPI std::optional<class Vec3> getPosition(class IBlockSource const&) const;
    /**
     * @symbol ?serializeTo\@PositionSource\@GameEvents\@\@QEBAXAEAVCompoundTag\@\@\@Z
     */
    MCAPI void serializeTo(class CompoundTag&) const;
    // NOLINTEND
};

}; // namespace GameEvents
