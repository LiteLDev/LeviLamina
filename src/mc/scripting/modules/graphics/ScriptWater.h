#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/network/packet/GraphicsOverrideParameterType.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
namespace ScriptModuleMinecraft { class ScriptBiomeType; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleServerGraphics {

class ScriptWater {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk24f77f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWater& operator=(ScriptWater const&);
    ScriptWater(ScriptWater const&);
    ScriptWater();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> _sendResetPacket(
        ::GraphicsOverrideParameterType                 parameterType,
        ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> _sendSetPacket(
        ::GraphicsOverrideParameterType                 parameterType,
        float                                           inValue,
        ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID,
        float                                           minValue,
        float                                           maxValue
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetCDOM(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetChlorophyll(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetSuspendedSediment(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetWavesDepth(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetWavesDirectionIncrement(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetWavesFrequency(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetWavesFrequencyScaling(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetWavesMix(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetWavesOctaves(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetWavesPull(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetWavesShape(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetWavesSpeed(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetWavesSpeedScaling(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setCDOM(float cdom, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setChlorophyll(float chlorophyll, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setSuspendedSediment(float suspendedSediment, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setWavesDepth(float wavesDepth, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setWavesDirectionIncrement(float wavesDirectionIncrement, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setWavesFrequency(float wavesFrequency, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setWavesFrequencyScaling(float wavesFrequencyScaling, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setWavesMix(float wavesMix, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setWavesOctaves(int wavesOctaves, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setWavesPull(float wavesPull, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setWavesShape(float wavesShape, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setWavesSpeed(float wavesSpeed, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setWavesSpeedScaling(float wavesSpeedScaling, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleServerGraphics
