#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/network/packet/GraphicsOverrideParameterType.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptRGB; }
namespace ScriptModuleServerGraphics { struct BiomeKey; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleServerGraphics {

class ScriptBiomeLighting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk78dde0;
    ::ll::UntypedStorage<8, 32> mUnkf75dd0;
    ::ll::UntypedStorage<8, 8>  mUnk79888d;
    ::ll::UntypedStorage<8, 40> mUnkd81ff9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBiomeLighting(ScriptBiomeLighting const&);
    ScriptBiomeLighting();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    _sendResetPacket(::GraphicsOverrideParameterType parameterType);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> _sendSetPacket(
        ::GraphicsOverrideParameterType parameterType,
        ::std::variant<
            ::ScriptModuleMinecraft::ScriptRGB,
            ::std::unordered_map<float, ::ScriptModuleMinecraft::ScriptRGB>> const& inKeyframes
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> _sendSetPacket(
        ::GraphicsOverrideParameterType                                  parameterType,
        ::std::variant<float, ::std::unordered_map<float, float>> const& inKeyframes,
        float                                                            minValue,
        float                                                            maxValue
    );

    MCNAPI ::ScriptModuleServerGraphics::ScriptBiomeLighting&
    operator=(::ScriptModuleServerGraphics::ScriptBiomeLighting const&);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetAmbientColor();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetAmbientIlluminance();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetEmissiveDesaturation();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetFlashColor();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetFlashIlluminance();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetMoonColor();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetMoonIlluminance();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetOrbitalOffsetDegrees();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetSkyIntensity();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetSunColor();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetSunIlluminance();

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setAmbientColor(
        ::std::variant<
            ::ScriptModuleMinecraft::ScriptRGB,
            ::std::unordered_map<float, ::ScriptModuleMinecraft::ScriptRGB>> const& color
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setAmbientIlluminance(::std::variant<float, ::std::unordered_map<float, float>> const& illuminance);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setFlashColor(
        ::std::variant<
            ::ScriptModuleMinecraft::ScriptRGB,
            ::std::unordered_map<float, ::ScriptModuleMinecraft::ScriptRGB>> const& color
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setFlashIlluminance(::std::variant<float, ::std::unordered_map<float, float>> const& illuminance);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setMoonColor(
        ::std::variant<
            ::ScriptModuleMinecraft::ScriptRGB,
            ::std::unordered_map<float, ::ScriptModuleMinecraft::ScriptRGB>> const& color
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setMoonIlluminance(::std::variant<float, ::std::unordered_map<float, float>> const& illuminance);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setOrbitalOffsetDegrees(::std::variant<float, ::std::unordered_map<float, float>> const& degrees);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setSkyIntensity(::std::variant<float, ::std::unordered_map<float, float>> const& intensity);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setSunColor(
        ::std::variant<
            ::ScriptModuleMinecraft::ScriptRGB,
            ::std::unordered_map<float, ::ScriptModuleMinecraft::ScriptRGB>> const& color
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setSunIlluminance(::std::variant<float, ::std::unordered_map<float, float>> const& illuminance);

    MCNAPI ~ScriptBiomeLighting();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleServerGraphics
