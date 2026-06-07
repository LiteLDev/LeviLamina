#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/network/packet/GraphicsOverrideParameterType.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleServerGraphics {

class ScriptBiomeColorGrading {
public:
    // ScriptBiomeColorGrading inner types declare
    // clang-format off
    struct BiomeKey;
    // clang-format on

    // ScriptBiomeColorGrading inner types define
    struct BiomeKey {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk9a58e7;
        ::ll::UntypedStorage<8, 32> mUnkfd9a5a;
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
    ::ll::UntypedStorage<8, 8>  mUnk255e2d;
    ::ll::UntypedStorage<8, 32> mUnkb3ab0b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBiomeColorGrading& operator=(ScriptBiomeColorGrading const&);
    ScriptBiomeColorGrading(ScriptBiomeColorGrading const&);
    ScriptBiomeColorGrading();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    _sendResetPacket(::GraphicsOverrideParameterType parameterType);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> _sendSetPacket(
        ::GraphicsOverrideParameterType parameterType,
        ::Vec3 const&                   inValue,
        ::Vec3 const&                   minValue,
        ::Vec3 const&                   maxValue
    );

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    _sendSetPacket(::GraphicsOverrideParameterType parameterType, float inValue, float minValue, float maxValue);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetHighlightsContrast();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetHighlightsGain();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetHighlightsGamma();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetHighlightsMin();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetHighlightsOffset();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetHighlightsSaturation();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetMidtonesContrast();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetMidtonesGain();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetMidtonesGamma();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetMidtonesOffset();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetMidtonesSaturation();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetShadowsContrast();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetShadowsGain();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetShadowsGamma();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetShadowsMax();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetShadowsOffset();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetShadowsSaturation();

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> resetTemperature();

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setHighlightsContrast(::Vec3 const& highlightsContrast);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setHighlightsGain(::Vec3 highlightsGain);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setHighlightsGamma(::Vec3 highlightsGamma);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setHighlightsMin(float highlightsMin);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setHighlightsOffset(::Vec3 highlightsOffset);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setHighlightsSaturation(::Vec3 highlightsSaturation);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setMidtonesContrast(::Vec3 const& midtonesContrast);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setMidtonesGain(::Vec3 midtonesGain);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setMidtonesGamma(::Vec3 midtonesGamma);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setMidtonesOffset(::Vec3 midtonesOffset);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setMidtonesSaturation(::Vec3 midtonesSaturation);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError>
    setShadowsContrast(::Vec3 const& shadowsContrast);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setShadowsGain(::Vec3 shadowsGain);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setShadowsGamma(::Vec3 shadowsGamma);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setShadowsMax(float shadowsMax);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setShadowsOffset(::Vec3 shadowsOffset);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setShadowsSaturation(::Vec3 shadowsSaturation);

    MCNAPI ::Scripting::Result<void, ::Scripting::InvalidArgumentError> setTemperature(float temperature);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleServerGraphics
