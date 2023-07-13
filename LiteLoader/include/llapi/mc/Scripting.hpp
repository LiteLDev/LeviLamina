/**
 * @file  Scripting.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace Scripting.
 *
 */
namespace Scripting {

#define AFTER_EXTRA

template <typename T>
class ClassBindingBuilder {
    ClassBindingBuilder() = delete;
    ClassBindingBuilder(ClassBindingBuilder const&) = delete;
    ClassBindingBuilder(ClassBindingBuilder const&&) = delete;
};

template <typename T, typename T2>
class EnumBindingBuilder {
    EnumBindingBuilder() = delete;
    EnumBindingBuilder(EnumBindingBuilder const&) = delete;
    EnumBindingBuilder(EnumBindingBuilder const&&) = delete;
};

template <typename T>
class StrongTypedObjectHandle;

struct Version;

struct Error;

enum class LogLevel : int {
    Verbose = 0x0,
    Info = 0x1,
    Warning = 0x2,
    Error = 0x3,
    Count = 0x4,
};

#undef AFTER_EXTRA
    /**
     * @symbol ?LogMessage\@Scripting\@\@YAXW4LogLevel\@1\@PEBDI1ZZ
     */
    MCAPI void LogMessage(enum class Scripting::LogLevel, char const *, unsigned int, char const *, ...);
    /**
     * @symbol ?_versionSplit\@Scripting\@\@YA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@D\@Z
     */
    MCAPI std::vector<std::string> _versionSplit(std::string const &, char);
    /**
     * @symbol ?defaultLogFunction\@Scripting\@\@YAXPEAXW4LogLevel\@1\@PEBDI2\@Z
     */
    MCAPI void defaultLogFunction(void *, enum class Scripting::LogLevel, char const *, unsigned int, char const *);
    /**
     * @symbol ?logUserData\@Scripting\@\@3PEAXEA
     */
    MCAPI extern void * logUserData;

};