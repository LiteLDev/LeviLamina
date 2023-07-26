/**
 * @file  ScriptMemory.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Scripting.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ScriptMemory.
 *
 */
namespace ScriptMemory {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol  ?getQuickJSMallocFunctions\@ScriptMemory\@\@YA?AV?$unique_ptr\@UMallocFunctions\@QuickJS\@Scripting\@\@U?$default_delete\@UMallocFunctions\@QuickJS\@Scripting\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<struct Scripting::QuickJS::MallocFunctions> getQuickJSMallocFunctions();

};