#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/network/packet/GraphicsOverrideParameterType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleServerGraphics {

class ScriptBiomeWater {
public:
    // ScriptBiomeWater inner types declare
    // clang-format off
    struct BiomeKey;
    // clang-format on

    // ScriptBiomeWater inner types define
    struct BiomeKey {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk95cba2;
        ::ll::UntypedStorage<8, 32> mUnk52603d;
        // NOLINTEND

    public:
        // prevent constructor by default
        BiomeKey& operator=(BiomeKey const&);
        BiomeKey(BiomeKey const&);
        BiomeKey();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~BiomeKey();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk4e5505;
    ::ll::UntypedStorage<8, 32> mUnk6cfe64;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBiomeWater& operator=(ScriptBiomeWater const&);
    ScriptBiomeWater(ScriptBiomeWater const&);
    ScriptBiomeWater();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    _sendResetPacket(::GraphicsOverrideParameterType parameterType);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    _sendSetPacket(::GraphicsOverrideParameterType parameterType, float inValue, float minValue, float maxValue);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetCDOM();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetChlorophyll();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetSuspendedSediment();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetWavesDepth();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetWavesDirectionIncrement();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetWavesFrequency();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetWavesFrequencyScaling();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetWavesMix();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetWavesOctaves();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetWavesPull();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetWavesShape();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetWavesSpeed();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetWavesSpeedScaling();

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setCDOM(float cdom);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setChlorophyll(float chlorophyll);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setSuspendedSediment(float suspendedSediment);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setWavesDepth(float wavesDepth);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setWavesDirectionIncrement(float wavesDirectionIncrement);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setWavesFrequency(float wavesFrequency);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setWavesFrequencyScaling(float wavesFrequencyScaling);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setWavesMix(float wavesMix);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setWavesOctaves(int wavesOctaves);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setWavesPull(float wavesPull);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setWavesShape(float wavesShape);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setWavesSpeed(float wavesSpeed);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setWavesSpeedScaling(float wavesSpeedScaling);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleServerGraphics
