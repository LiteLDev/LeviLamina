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
     * @hash   -240467960
     * @symbol  ??0RenderParams\@\@QEAA\@XZ
     */
    MCAPI RenderParams();
    /**
     * @hash   248751953
     * @symbol  ??0RenderParams\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI RenderParams(class RenderParams &&);
    /**
     * @hash   1987971233
     * @symbol  ??0RenderParams\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI RenderParams(class RenderParams const &);
    /**
     * @hash   1543928216
     * @symbol  ?getActorTarget\@RenderParams\@\@QEBAPEAVActor\@\@W4FilterSubject\@\@\@Z
     */
    MCAPI class Actor * getActorTarget(enum class FilterSubject) const;
    /**
     * @hash   -1870128797
     * @symbol  ?init\@RenderParams\@\@QEAAAEAV1\@PEAVBaseActorRenderContext\@\@PEAVActor\@\@PEAVAnimationComponent\@\@PEAVMolangVariableMap\@\@V?$shared_ptr\@VDataDrivenModel\@\@\@std\@\@MM\@Z
     */
    MCAPI class RenderParams & init(class BaseActorRenderContext *, class Actor *, class AnimationComponent *, class MolangVariableMap *, class std::shared_ptr<class DataDrivenModel>, float, float);
    /**
     * @hash   -2079657564
     * @symbol  ??4RenderParams\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class RenderParams & operator=(class RenderParams &&);
    /**
     * @hash   -349462506
     * @symbol  ??ARenderParams\@\@QEAAAEAM_K\@Z
     */
    MCAPI float & operator[](unsigned __int64);
    /**
     * @hash   1294311142
     * @symbol  ??1RenderParams\@\@QEAA\@XZ
     */
    MCAPI ~RenderParams();
    /**
     * @hash   -1129224838
     * @symbol  ?getRenderParams\@RenderParams\@\@SAAEAV1\@AEAVActor\@\@\@Z
     */
    MCAPI static class RenderParams & getRenderParams(class Actor &);

};