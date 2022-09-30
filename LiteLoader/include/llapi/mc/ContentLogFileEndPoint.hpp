/**
 * @file  ContentLogFileEndPoint.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ContentLogFileEndPoint.
 *
 */
class ContentLogFileEndPoint {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTENTLOGFILEENDPOINT
public:
    class ContentLogFileEndPoint& operator=(class ContentLogFileEndPoint const &) = delete;
    ContentLogFileEndPoint(class ContentLogFileEndPoint const &) = delete;
    ContentLogFileEndPoint() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CONTENTLOGFILEENDPOINT
    /**
     * @hash   1439183903
     * @symbol ?flush@ContentLogFileEndPoint@@UEAAXXZ
     */
    MCVAPI void flush();
    /**
     * @hash   233786451
     * @symbol ?isEnabled@ContentLogFileEndPoint@@UEBA_NXZ
     */
    MCVAPI bool isEnabled() const;
    /**
     * @hash   -1956865867
     * @symbol ?log@ContentLogFileEndPoint@@UEAAXW4LogArea@@W4LogLevel@@PEBD@Z
     */
    MCVAPI void log(enum class LogArea, enum class LogLevel, char const *);
    /**
     * @hash   57087341
     * @symbol ?logOnlyOnce@ContentLogFileEndPoint@@UEBA_NXZ
     */
    MCVAPI bool logOnlyOnce() const;
    /**
     * @hash   -546914078
     * @symbol ?setEnabled@ContentLogFileEndPoint@@UEAAX_N@Z
     */
    MCVAPI void setEnabled(bool);
#endif
    /**
     * @hash   -459232620
     * @symbol ??0ContentLogFileEndPoint@@QEAA@VPath@Core@@0@Z
     */
    MCAPI ContentLogFileEndPoint(class Core::Path, class Core::Path);
    /**
     * @hash   -383857013
     * @symbol ?FILE_NAME@ContentLogFileEndPoint@@2V?$basic_string_span@$$CBD$0?0@gsl@@B
     */
    MCAPI static class gsl::basic_string_span<char const, -1> const FILE_NAME;

};