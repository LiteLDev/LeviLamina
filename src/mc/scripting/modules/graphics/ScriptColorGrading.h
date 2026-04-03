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
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleServerGraphics {

class ScriptColorGrading {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb02d87;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptColorGrading& operator=(ScriptColorGrading const&);
    ScriptColorGrading(ScriptColorGrading const&);
    ScriptColorGrading();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> _sendResetPacket(
        ::GraphicsOverrideParameterType                 parameterType,
        ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> _sendSetPacket(
        ::GraphicsOverrideParameterType                 parameterType,
        ::Vec3 const&                                   inValue,
        ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID,
        ::Vec3 const&                                   minValue,
        ::Vec3 const&                                   maxValue
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> _sendSetPacket(
        ::GraphicsOverrideParameterType                 parameterType,
        float                                           inValue,
        ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID,
        float                                           minValue,
        float                                           maxValue
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetHighlightsContrast(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetHighlightsGain(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetHighlightsGamma(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetHighlightsMin(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetHighlightsOffset(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetHighlightsSaturation(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetMidtonesContrast(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetMidtonesGain(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetMidtonesGamma(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetMidtonesOffset(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetMidtonesSaturation(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetShadowsContrast(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetShadowsGain(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetShadowsGamma(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetShadowsMax(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetShadowsOffset(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetShadowsSaturation(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    resetTemperature(::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setHighlightsContrast(::Vec3 const& highlightsContrast, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setHighlightsGain(::Vec3 highlightsGain, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setHighlightsGamma(::Vec3 highlightsGamma, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setHighlightsMin(float highlightsMin, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setHighlightsOffset(::Vec3 highlightsOffset, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setHighlightsSaturation(::Vec3 highlightsSaturation, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setMidtonesContrast(::Vec3 const& midtonesContrast, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setMidtonesGain(::Vec3 midtonesGain, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setMidtonesGamma(::Vec3 midtonesGamma, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setMidtonesOffset(::Vec3 midtonesOffset, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setMidtonesSaturation(::Vec3 midtonesSaturation, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setShadowsContrast(::Vec3 const& shadowsContrast, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setShadowsGain(::Vec3 shadowsGain, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setShadowsGamma(::Vec3 shadowsGamma, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setShadowsMax(float shadowsMax, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setShadowsOffset(::Vec3 shadowsOffset, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setShadowsSaturation(::Vec3 shadowsSaturation, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setTemperature(float temperature, ::ScriptModuleMinecraft::ScriptBiomeType const& biomeID);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleServerGraphics
