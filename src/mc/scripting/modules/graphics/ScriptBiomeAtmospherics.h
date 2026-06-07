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

class ScriptBiomeAtmospherics {
public:
    // ScriptBiomeAtmospherics inner types declare
    // clang-format off
    struct BiomeKey;
    // clang-format on

    // ScriptBiomeAtmospherics inner types define
    struct BiomeKey {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk9ace14;
        ::ll::UntypedStorage<8, 32> mUnk6fc362;
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
    ::ll::UntypedStorage<8, 8>  mUnkc1823b;
    ::ll::UntypedStorage<8, 32> mUnk7a17e6;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBiomeAtmospherics& operator=(ScriptBiomeAtmospherics const&);
    ScriptBiomeAtmospherics(ScriptBiomeAtmospherics const&);
    ScriptBiomeAtmospherics();

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

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetHorizonBlendMax();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetHorizonBlendMieStart();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetHorizonBlendMin();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetHorizonBlendStart();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetMoonMieStrength();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetRayleighStrength();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetSkyHorizonColor();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetSkyZenithColor();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetSunGlareShape();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetSunMieStrength();

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setHorizonBlendMax(::std::variant<float, ::std::unordered_map<float, float>> const& blendMax);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setHorizonBlendMieStart(::std::variant<float, ::std::unordered_map<float, float>> const& blendMieStart);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setHorizonBlendMin(::std::variant<float, ::std::unordered_map<float, float>> const& blendMin);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setHorizonBlendStart(::std::variant<float, ::std::unordered_map<float, float>> const& blendStart);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setMoonMieStrength(::std::variant<float, ::std::unordered_map<float, float>> const& moonMieStrength);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setRayleighStrength(::std::variant<float, ::std::unordered_map<float, float>> const& rayleighStrength);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setSkyHorizonColor(
        ::std::variant<
            ::ScriptModuleMinecraft::ScriptRGB,
            ::std::unordered_map<float, ::ScriptModuleMinecraft::ScriptRGB>> const& color
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setSkyZenithColor(
        ::std::variant<
            ::ScriptModuleMinecraft::ScriptRGB,
            ::std::unordered_map<float, ::ScriptModuleMinecraft::ScriptRGB>> const& color
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setSunGlareShape(::std::variant<float, ::std::unordered_map<float, float>> const& sunGlareShape);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setSunMieStrength(::std::variant<float, ::std::unordered_map<float, float>> const& sunMieStrength);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleServerGraphics
