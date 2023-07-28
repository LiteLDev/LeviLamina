#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandSoftEnumRegistry {

public:
    class CommandRegistry* registry;
    /**
     * @symbol ??0CommandSoftEnumRegistry\@\@QEAA\@PEAVCommandRegistry\@\@\@Z
     */
    MCAPI CommandSoftEnumRegistry(class CommandRegistry*); // NOLINT
    /**
     * @symbol
     * ?updateSoftEnum\@CommandSoftEnumRegistry\@\@QEAAXW4SoftEnumUpdateType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@4\@\@Z
     */
    MCAPI void updateSoftEnum(enum class SoftEnumUpdateType, std::string const&, std::vector<std::string>); // NOLINT
    /**
     * @symbol ??1CommandSoftEnumRegistry\@\@QEAA\@XZ
     */
    MCAPI ~CommandSoftEnumRegistry(); // NOLINT
};
