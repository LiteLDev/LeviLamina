#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Rotation.h"
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BoundingBox;
class Dimension;
class Vec3;
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class GameTestSequence; }
namespace gametest { class IGameTestHelperProvider; }
namespace gametest { class IGameTestListener; }
namespace gametest { struct GameTestError; }
// clang-format on

namespace gametest {

class BaseGameTestInstance {
public:
    // prevent constructor by default
    BaseGameTestInstance& operator=(BaseGameTestInstance const&);
    BaseGameTestInstance(BaseGameTestInstance const&);
    BaseGameTestInstance();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BaseGameTestInstance();

    // vIndex: 1
    virtual void initialize();

    // vIndex: 2
    virtual bool hasStructureBlock() const = 0;

    // vIndex: 3
    virtual void clearStructure() = 0;

    // vIndex: 4
    virtual void spawnStructure();

    // vIndex: 5
    virtual std::optional<class AABB> getStructureBounds() const = 0;

    // vIndex: 6
    virtual std::optional<class Vec3> getStructureBlockPivot() const = 0;

    // vIndex: 7
    virtual std::optional<class Vec3> getStructureBlockPosPivot() const = 0;

    // vIndex: 8
    virtual class BoundingBox getStructureBoundingBox() const = 0;

    // vIndex: 9
    virtual DimensionType getStructureDimension() const = 0;

    // vIndex: 10
    virtual int _getLevelTick() const = 0;

    // vIndex: 11
    virtual bool _isTestReady() = 0;

    // vIndex: 12
    virtual void _rerun();

    // vIndex: 13
    virtual void _removeSimulatedPlayers();

    MCAPI BaseGameTestInstance(
        class gametest::BaseGameTestFunction const&,
        std::unique_ptr<class gametest::IGameTestHelperProvider> helper
    );

    MCAPI void addListener(std::shared_ptr<class gametest::IGameTestListener> listener);

    MCAPI class gametest::GameTestSequence& createSequence();

    MCAPI void fail(struct gametest::GameTestError error, bool);

    MCAPI void finish(bool);

    MCAPI std::optional<struct gametest::GameTestError> const& getError() const;

    MCAPI ::Rotation getRotation() const;

    MCAPI std::string const& getTestName() const;

    MCAPI bool hasRetryAttempts() const;

    MCAPI void removeListener(std::shared_ptr<class gametest::IGameTestListener> listener);

    MCAPI void startExecution();

    MCAPI void succeed();

    MCAPI void tick();

    // NOLINTEND
};

}; // namespace gametest
