/**
 * @file  CommandSoftEnumRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "UpdateSoftEnumPacket.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandSoftEnumRegistry.
 *
 */
class CommandSoftEnumRegistry {

#define AFTER_EXTRA
// Add Member There
    class CommandRegistry* registry;
#define DISABLE_CONSTRUCTOR_PREVENTION_COMMANDSOFTENUMREGISTRY
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDSOFTENUMREGISTRY
public:
    class CommandSoftEnumRegistry& operator=(class CommandSoftEnumRegistry const &) = delete;
    CommandSoftEnumRegistry(class CommandSoftEnumRegistry const &) = delete;
    CommandSoftEnumRegistry() = delete;
#endif

public:
    /**
     * @symbol  ??0CommandSoftEnumRegistry\@\@QEAA\@PEAVCommandRegistry\@\@\@Z
     */
    MCAPI CommandSoftEnumRegistry(class CommandRegistry *);
    /**
     * @symbol  ?updateSoftEnum\@CommandSoftEnumRegistry\@\@QEAAXW4SoftEnumUpdateType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    MCAPI void updateSoftEnum(enum class SoftEnumUpdateType, std::string const &, std::vector<std::string>);
    /**
     * @symbol  ??1CommandSoftEnumRegistry\@\@QEAA\@XZ
     */
    MCAPI ~CommandSoftEnumRegistry();

};