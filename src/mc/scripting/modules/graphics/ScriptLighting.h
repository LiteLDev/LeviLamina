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

class ScriptLighting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk14132c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLighting& operator=(ScriptLighting const&);
    ScriptLighting(ScriptLighting const&);
    ScriptLighting();

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
    resetAmbientColor(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetAmbientIlluminance(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetFlashColor(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetFlashIlluminance(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetMoonColor(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetMoonIlluminance(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetSunColor(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetSunIlluminance(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setAmbientColor(
        ::std::variant<
            ::ScriptModuleMinecraft::ScriptRGB,
            ::std::unordered_map<float, ::ScriptModuleMinecraft::ScriptRGB>> const& color,
        ::ScriptModuleMinecraft::ScriptBiomeType const&                             biomeID
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setAmbientIlluminance(
        ::std::variant<float, ::std::unordered_map<float, float>> const& illuminance,
        ::ScriptModuleMinecraft::ScriptBiomeType const&                  biomeID
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setFlashColor(
        ::std::variant<
            ::ScriptModuleMinecraft::ScriptRGB,
            ::std::unordered_map<float, ::ScriptModuleMinecraft::ScriptRGB>> const& color,
        ::ScriptModuleMinecraft::ScriptBiomeType const&                             biomeID
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setFlashIlluminance(
        ::std::variant<float, ::std::unordered_map<float, float>> const& illuminance,
        ::ScriptModuleMinecraft::ScriptBiomeType const&                  biomeID
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setMoonColor(
        ::std::variant<
            ::ScriptModuleMinecraft::ScriptRGB,
            ::std::unordered_map<float, ::ScriptModuleMinecraft::ScriptRGB>> const& color,
        ::ScriptModuleMinecraft::ScriptBiomeType const&                             biomeID
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setMoonIlluminance(
        ::std::variant<float, ::std::unordered_map<float, float>> const& illuminance,
        ::ScriptModuleMinecraft::ScriptBiomeType const&                  biomeID
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setSunColor(
        ::std::variant<
            ::ScriptModuleMinecraft::ScriptRGB,
            ::std::unordered_map<float, ::ScriptModuleMinecraft::ScriptRGB>> const& color,
        ::ScriptModuleMinecraft::ScriptBiomeType const&                             biomeID
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setSunIlluminance(
        ::std::variant<float, ::std::unordered_map<float, float>> const& illuminance,
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
