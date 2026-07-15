#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Singleton.h"
#include "mc/deps/minecraft_renderer/constantbuffers/ActorConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/AnimationConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/BannerConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/DebugConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/EffectConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/FlipbookTextureConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/InterFrameConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/PatternConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/PerFrameConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/PostProcessConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/RenderChunkConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/ShaderConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/TextConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/WeatherConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/WorldConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/oreui/UIEffectsPixelConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/oreui/UIGlobalPixelConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/oreui/UIRenoirShaderPSConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/oreui/UIRenoirShaderVSConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/oreui/UIStandardPrimitiveAdditionalPixelConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/oreui/UIStandardPrimitivePixelConstants.h"
#include "mc/deps/minecraft_renderer/constantbuffers/oreui/UITransformsConstants.h"

namespace mce {

class GlobalConstantBuffers : public ::mce::Singleton<::mce::GlobalConstantBuffers> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::mce::RenderChunkConstants>              renderChunkConstantBuffer;
    ::ll::TypedStorage<8, 48, ::mce::WorldConstants>                    worldConstantBuffer;
    ::ll::TypedStorage<8, 72, ::mce::PerFrameConstants>                 perFrameConstantBuffer;
    ::ll::TypedStorage<8, 40, ::mce::AnimationConstants>                animationConstants;
    ::ll::TypedStorage<8, 104, ::mce::ActorConstants>                   entityConstantBuffer;
    ::ll::TypedStorage<8, 64, ::mce::ShaderConstants>                   shaderConstantBuffer;
    ::ll::TypedStorage<8, 24, ::mce::EffectConstants>                   effectConstantBuffer;
    ::ll::TypedStorage<8, 80, ::mce::WeatherConstants>                  weatherConstantBuffer;
    ::ll::TypedStorage<8, 32, ::mce::FlipbookTextureConstants>          flipbookTextureConstants;
    ::ll::TypedStorage<8, 56, ::mce::TextConstants>                     textConstants;
    ::ll::TypedStorage<8, 32, ::mce::InterFrameConstants>               interFrameConstantBuffer;
    ::ll::TypedStorage<8, 24, ::mce::DebugConstants>                    debugConstants;
    ::ll::TypedStorage<8, 88, ::mce::BannerConstants>                   bannerConstantBuffer;
    ::ll::TypedStorage<8, 32, ::mce::PatternConstants>                  patternConstantBuffer;
    ::ll::TypedStorage<8, 48, ::mce::PostProcessConstants>              postProcessConstants;
    ::ll::TypedStorage<8, 24, ::mce::UITransformsConstants>             uiTransformsConstantBuffer;
    ::ll::TypedStorage<8, 24, ::mce::UIGlobalPixelConstants>            uiGlobalPixelConstantBuffer;
    ::ll::TypedStorage<8, 24, ::mce::UIStandardPrimitivePixelConstants> uiStandardPrimitivePixelConstantBuffer;
    ::ll::TypedStorage<8, 32, ::mce::UIStandardPrimitiveAdditionalPixelConstants>
                                                                uiStandardPrimitiveAdditionalPixelConstantBuffer;
    ::ll::TypedStorage<8, 32, ::mce::UIEffectsPixelConstants>   uiEffectsPixelConstantBuffer;
    ::ll::TypedStorage<8, 32, ::mce::UIRenoirShaderVSConstants> uiRenoirShaderVSConstantBuffer;
    ::ll::TypedStorage<8, 48, ::mce::UIRenoirShaderPSConstants> uiRenoirShaderPSConstantBuffer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void init();
    // NOLINTEND
};

} // namespace mce
