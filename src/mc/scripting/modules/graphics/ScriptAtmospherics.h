#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/network/packet/GraphicsOverrideParameterType.h"

// auto generated forward declare list
// clang-format off
class ServerLevel;
class Vec3;
namespace ScriptModuleMinecraft { class ScriptBiomeType; }
namespace ScriptModuleMinecraft { class ScriptRGB; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleServerGraphics {

class ScriptAtmospherics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk127a2e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAtmospherics& operator=(ScriptAtmospherics const&);
    ScriptAtmospherics(ScriptAtmospherics const&);
    ScriptAtmospherics();

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

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> _sendResetPacket(
        ::GraphicsOverrideParameterType                 parameterType,
        ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> _sendSetPacket(
        ::GraphicsOverrideParameterType parameterType,
        ::std::variant<
            ::ScriptModuleMinecraft::ScriptRGB,
            ::std::unordered_map<float, ::ScriptModuleMinecraft::ScriptRGB>> const& inKeyframes,
        ::ScriptModuleMinecraft::ScriptBiomeType const&                             biomeID
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> _sendSetPacket(
        ::GraphicsOverrideParameterType                                  parameterType,
        ::std::variant<float, ::std::unordered_map<float, float>> const& inKeyframes,
        ::ScriptModuleMinecraft::ScriptBiomeType const&                  biomeID,
        float                                                            minValue,
        float                                                            maxValue
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetHorizonBlendMax(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetHorizonBlendMieStart(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetHorizonBlendMin(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetHorizonBlendStart(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetMoonMieStrength(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetRayleighStrength(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetSkyHorizonColor(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetSkyZenithColor(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetSunGlareShape(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetSunMieStrength(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setHorizonBlendMax(
        ::std::variant<float, ::std::unordered_map<float, float>> const& blendMax,
        ::ScriptModuleMinecraft::ScriptBiomeType const&                  biomeID
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setHorizonBlendMieStart(
        ::std::variant<float, ::std::unordered_map<float, float>> const& blendMieStart,
        ::ScriptModuleMinecraft::ScriptBiomeType const&                  biomeID
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setHorizonBlendMin(
        ::std::variant<float, ::std::unordered_map<float, float>> const& blendMin,
        ::ScriptModuleMinecraft::ScriptBiomeType const&                  biomeID
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setHorizonBlendStart(
        ::std::variant<float, ::std::unordered_map<float, float>> const& blendStart,
        ::ScriptModuleMinecraft::ScriptBiomeType const&                  biomeID
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setMoonMieStrength(
        ::std::variant<float, ::std::unordered_map<float, float>> const& moonMieStrength,
        ::ScriptModuleMinecraft::ScriptBiomeType const&                  biomeID
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setRayleighStrength(
        ::std::variant<float, ::std::unordered_map<float, float>> const& rayleighStrength,
        ::ScriptModuleMinecraft::ScriptBiomeType const&                  biomeID
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setSkyHorizonColor(
        ::std::variant<
            ::ScriptModuleMinecraft::ScriptRGB,
            ::std::unordered_map<float, ::ScriptModuleMinecraft::ScriptRGB>> const& color,
        ::ScriptModuleMinecraft::ScriptBiomeType const&                             biomeID
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setSkyZenithColor(
        ::std::variant<
            ::ScriptModuleMinecraft::ScriptRGB,
            ::std::unordered_map<float, ::ScriptModuleMinecraft::ScriptRGB>> const& color,
        ::ScriptModuleMinecraft::ScriptBiomeType const&                             biomeID
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setSunGlareShape(
        ::std::variant<float, ::std::unordered_map<float, float>> const& sunGlareShape,
        ::ScriptModuleMinecraft::ScriptBiomeType const&                  biomeID
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setSunMieStrength(
        ::std::variant<float, ::std::unordered_map<float, float>> const& sunMieStrength,
        ::ScriptModuleMinecraft::ScriptBiomeType const&                  biomeID
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleServerGraphics
