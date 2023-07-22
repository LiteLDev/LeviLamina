/**
 * @file  RenderParams.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RenderParams.
 *
 */
class RenderParams {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RENDERPARAMS
public:
    class RenderParams& operator=(class RenderParams const &) = delete;
#endif

public:
    /**
     * @symbol  ??0RenderParams\@\@QEAA\@XZ
     */
    MCAPI RenderParams();
    /**
     * @symbol  ??0RenderParams\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI RenderParams(class RenderParams &&);
    /**
     * @symbol  ??0RenderParams\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI RenderParams(class RenderParams const &);
    /**
     * @symbol  ?getActorTarget\@RenderParams\@\@QEBAPEAVActor\@\@W4FilterSubject\@\@\@Z
     */
    MCAPI class Actor * getActorTarget(enum class FilterSubject) const;
    /**
     * @symbol  ?init\@RenderParams\@\@QEAAAEAV1\@PEAVBaseActorRenderContext\@\@PEAVActor\@\@PEAVAnimationComponent\@\@PEAVMolangVariableMap\@\@V?$shared_ptr\@VDataDrivenModel\@\@\@std\@\@MM\@Z
     */
    MCAPI class RenderParams & init(class BaseActorRenderContext *, class Actor *, class AnimationComponent *, class MolangVariableMap *, class std::shared_ptr<class DataDrivenModel>, float, float);
    /**
     * @symbol  ??4RenderParams\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class RenderParams & operator=(class RenderParams &&);
    /**
     * @symbol  ??ARenderParams\@\@QEAAAEAM_K\@Z
     */
    MCAPI float & operator[](unsigned __int64);
    /**
     * @symbol  ??1RenderParams\@\@QEAA\@XZ
     */
    MCAPI ~RenderParams();
    /**
     * @symbol  ?getRenderParams\@RenderParams\@\@SAAEAV1\@AEAVActor\@\@\@Z
     */
    MCAPI static class RenderParams & getRenderParams(class Actor &);

};