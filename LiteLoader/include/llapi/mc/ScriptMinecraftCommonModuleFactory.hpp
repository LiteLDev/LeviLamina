/**
 * @file  ScriptMinecraftCommonModuleFactory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Scripting.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptMinecraftCommonModuleFactory.
 *
 */
class ScriptMinecraftCommonModuleFactory {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMINECRAFTCOMMONMODULEFACTORY
public:
    class ScriptMinecraftCommonModuleFactory& operator=(class ScriptMinecraftCommonModuleFactory const &) = delete;
    ScriptMinecraftCommonModuleFactory(class ScriptMinecraftCommonModuleFactory const &) = delete;
#endif

public:
    /**
     * @hash   -1993211779
     * @symbol  ??0ScriptMinecraftCommonModuleFactory\@\@QEAA\@XZ
     */
    MCAPI ScriptMinecraftCommonModuleFactory();
    /**
     * @hash   1205706162
     * @symbol  ?addCommon\@ScriptMinecraftCommonModuleFactory\@\@QEAAXAEAVModuleBindingBuilder\@Scripting\@\@\@Z
     */
    MCAPI void addCommon(class Scripting::ModuleBindingBuilder &);
    /**
     * @hash   2009341275
     * @symbol  ??1ScriptMinecraftCommonModuleFactory\@\@QEAA\@XZ
     */
    MCAPI ~ScriptMinecraftCommonModuleFactory();

};