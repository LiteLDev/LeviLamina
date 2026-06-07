#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/network/packet/GraphicsOverrideParameterType.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptRGB; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleServerGraphics {

class ScriptBiomeLighting {
public:
    // ScriptBiomeLighting inner types declare
    // clang-format off
    struct BiomeKey;
    // clang-format on

    // ScriptBiomeLighting inner types define
    struct BiomeKey {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk1ea383;
        ::ll::UntypedStorage<8, 32> mUnkdf68a0;
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
    ::ll::UntypedStorage<8, 8>  mUnk78dde0;
    ::ll::UntypedStorage<8, 32> mUnkf75dd0;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBiomeLighting& operator=(ScriptBiomeLighting const&);
    ScriptBiomeLighting(ScriptBiomeLighting const&);
    ScriptBiomeLighting();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::std::unordered_map<float, ::Vec3>> _getKeyframesFromVariant(
        ::std::variant<
            ::ScriptModuleMinecraft::ScriptRGB,
            ::std::unordered_map<float, ::ScriptModuleMinecraft::ScriptRGB>> inVariant
    );

    MCNAPI ::std::optional<::std::unordered_map<float, ::Vec3>> _getKeyframesFromVariant(
        ::std::variant<float, ::std::unordered_map<float, float>> inVariant,
        float                                                     minValue,
        float                                                     maxValue
    );

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

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    _sendSetPacket(::GraphicsOverrideParameterType parameterType, float inValue, float minValue, float maxValue);

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

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setEmissiveDesaturation(float value);

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
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleServerGraphics
