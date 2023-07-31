#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RenderParams {

public:
    // prevent constructor by default
    RenderParams& operator=(RenderParams const&) = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0RenderParams\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI RenderParams(class RenderParams const&);
    /**
     * @symbol ??0RenderParams\@\@QEAA\@XZ
     */
    MCAPI RenderParams();
    /**
     * @symbol ??0RenderParams\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI RenderParams(class RenderParams&&);
    /**
     * @symbol ?getActorTarget\@RenderParams\@\@QEBAPEAVActor\@\@W4FilterSubject\@\@\@Z
     */
    MCAPI class Actor* getActorTarget(enum class FilterSubject) const;
    /**
     * @symbol ?getRenderParams\@RenderParams\@\@SAAEAV1\@AEAVActor\@\@\@Z
     */
    MCAPI static class RenderParams& getRenderParams(class Actor&);
    /**
     * @symbol
     * ?init\@RenderParams\@\@QEAAAEAV1\@PEAVBaseActorRenderContext\@\@PEAVActor\@\@PEAVAnimationComponent\@\@PEAVMolangVariableMap\@\@V?$shared_ptr\@VDataDrivenModel\@\@\@std\@\@MM\@Z
     */
    MCAPI class RenderParams& init(
        class BaseActorRenderContext*,
        class Actor*,
        class AnimationComponent*,
        class MolangVariableMap*,
        std::shared_ptr<class DataDrivenModel>,
        float,
        float
    );
    /**
     * @symbol ??4RenderParams\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class RenderParams& operator=(class RenderParams&&);
    /**
     * @symbol ??ARenderParams\@\@QEAAAEAM_K\@Z
     */
    MCAPI float& operator[](uint64_t);
    /**
     * @symbol ??1RenderParams\@\@QEAA\@XZ
     */
    MCAPI ~RenderParams();
    // NOLINTEND
};
