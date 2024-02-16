#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/FilterSubject.h"

class RenderParams {
public:
    char filler[0x1F0]; // BDS1.20.61 ActorDefinitionDescriptor::_executeEvent line=256

public:
    // prevent constructor by default
    RenderParams& operator=(RenderParams const&);

public:
    // NOLINTBEGIN
    // symbol: ??0RenderParams@@QEAA@XZ
    MCAPI RenderParams();

    // symbol: ??0RenderParams@@QEAA@$$QEAV0@@Z
    MCAPI RenderParams(class RenderParams&&);

    // symbol: ??0RenderParams@@QEAA@AEBV0@@Z
    MCAPI RenderParams(class RenderParams const&);

    // symbol: ?getActorTarget@RenderParams@@QEBAPEAVActor@@W4FilterSubject@Legacy@Puv@@@Z
    MCAPI class Actor* getActorTarget(::Puv::Legacy::FilterSubject) const;

    // symbol:
    // ?init@RenderParams@@QEAAAEAV1@PEAVBaseActorRenderContext@@PEAVActor@@PEAVAnimationComponent@@PEAVMolangVariableMap@@V?$shared_ptr@VDataDrivenModel@@@std@@MM@Z
    MCAPI class RenderParams& init(
        class BaseActorRenderContext*          baseActorRenderContext,
        class Actor*                           actor,
        class AnimationComponent*              animationComponent,
        class MolangVariableMap*               variableMap,
        std::shared_ptr<class DataDrivenModel> model,
        float                                  frameAlpha,
        float                                  modelScale
    );

    // symbol: ??4RenderParams@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class RenderParams& operator=(class RenderParams&&);

    // symbol: ??ARenderParams@@QEAAAEAM_K@Z
    MCAPI float& operator[](uint64 i);

    // symbol: ??1RenderParams@@QEAA@XZ
    MCAPI ~RenderParams();

    // symbol: ?getRenderParams@RenderParams@@SAAEAV1@AEAVActor@@@Z
    MCAPI static class RenderParams& getRenderParams(class Actor& actor);

    // NOLINTEND
};
