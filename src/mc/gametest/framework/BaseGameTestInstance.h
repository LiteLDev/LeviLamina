#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/util/Rotation.h"

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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12>  mUnk350d5f;
    ::ll::UntypedStorage<1, 1>   mUnkf470ba;
    ::ll::UntypedStorage<8, 8>   mUnka70b5d;
    ::ll::UntypedStorage<8, 8>   mUnk1db748;
    ::ll::UntypedStorage<8, 8>   mUnkd8fe12;
    ::ll::UntypedStorage<8, 24>  mUnk96e162;
    ::ll::UntypedStorage<8, 24>  mUnk367b13;
    ::ll::UntypedStorage<8, 64>  mUnkc7fcf4;
    ::ll::UntypedStorage<8, 24>  mUnk6788f9;
    ::ll::UntypedStorage<8, 8>   mUnk2a8560;
    ::ll::UntypedStorage<8, 176> mUnkfdc9e5;
    ::ll::UntypedStorage<4, 4>   mUnk7a1201;
    ::ll::UntypedStorage<4, 4>   mUnk7f9ce6;
    ::ll::UntypedStorage<4, 4>   mUnkc50f09;
    ::ll::UntypedStorage<4, 4>   mUnk21460e;
    ::ll::UntypedStorage<4, 4>   mUnkd39f83;
    ::ll::UntypedStorage<4, 4>   mUnkc056c2;
    ::ll::UntypedStorage<4, 4>   mUnkcde0ac;
    ::ll::UntypedStorage<1, 1>   mUnkfe8a57;
    ::ll::UntypedStorage<1, 1>   mUnk5cc272;
    ::ll::UntypedStorage<8, 8>   mUnkb0ad63;
    ::ll::UntypedStorage<4, 4>   mUnk4faa9d;
    ::ll::UntypedStorage<4, 4>   mUnkc02b5e;
    ::ll::UntypedStorage<4, 4>   mUnkc036b5;
    ::ll::UntypedStorage<4, 4>   mUnk89f975;
    ::ll::UntypedStorage<1, 1>   mUnkc98fbc;
    ::ll::UntypedStorage<1, 1>   mUnkcfef79;
    ::ll::UntypedStorage<1, 1>   mUnk9b8cd1;
    // NOLINTEND

public:
    // prevent constructor by default
    BaseGameTestInstance& operator=(BaseGameTestInstance const&);
    BaseGameTestInstance(BaseGameTestInstance const&);
    BaseGameTestInstance();

public:
    // virtual functions
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
    virtual ::std::optional<::AABB> getStructureBounds() const = 0;

    // vIndex: 6
    virtual ::std::optional<::Vec3> getStructureBlockPivot() const = 0;

    // vIndex: 7
    virtual ::std::optional<::Vec3> getStructureBlockPosPivot() const = 0;

    // vIndex: 8
    virtual ::BoundingBox getStructureBoundingBox() const = 0;

    // vIndex: 9
    virtual ::DimensionType getStructureDimension() const = 0;

    // vIndex: 10
    virtual int _getLevelTick() const = 0;

    // vIndex: 11
    virtual bool _isTestReady() = 0;

    // vIndex: 12
    virtual void _rerun();

    // vIndex: 13
    virtual void _removeSimulatedPlayers();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BaseGameTestInstance(
        ::gametest::BaseGameTestFunction const&                testFunction,
        ::std::unique_ptr<::gametest::IGameTestHelperProvider> helper
    );

    MCAPI void addListener(::std::shared_ptr<::gametest::IGameTestListener> listener);

    MCAPI ::gametest::GameTestSequence& createSequence();

    MCAPI void fail(::gametest::GameTestError error, bool canRetry);

    MCAPI void finish(bool canRetry);

    MCFOLD ::std::optional<::gametest::GameTestError> const& getError() const;

    MCFOLD ::Rotation getRotation() const;

    MCAPI ::std::string const& getTestName() const;

    MCAPI bool hasRetryAttempts() const;

    MCAPI void removeListener(::std::shared_ptr<::gametest::IGameTestListener> listener);

    MCAPI void startExecution();

    MCAPI void succeed();

    MCAPI void tick();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::gametest::BaseGameTestFunction const&                testFunction,
        ::std::unique_ptr<::gametest::IGameTestHelperProvider> helper
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $initialize();

    MCAPI void $spawnStructure();

    MCAPI void $_rerun();

    MCAPI void $_removeSimulatedPlayers();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace gametest
