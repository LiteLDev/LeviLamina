#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"
#include "mc/server/commands/CommandRegistry.h"

class CommandParameterData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDPARAMETERDATA
public:
    CommandParameterData& operator=(CommandParameterData const&) = delete;
    CommandParameterData()                                       = delete;
#endif

public:
    /**
     * @symbol ??0CommandParameterData\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI CommandParameterData(class CommandParameterData const&);
    /**
     * @symbol
     * ??0CommandParameterData\@\@QEAA\@V?$typeid_t\@VCommandRegistry\@\@\@Bedrock\@\@P8CommandRegistry\@\@EBA_NPEAXAEBUParseToken\@3\@AEBVCommandOrigin\@\@HAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@7\@\@ZPEBDW4CommandParameterDataType\@\@77H_NH\@Z
     */
    MCAPI CommandParameterData(
        class Bedrock::typeid_t<class CommandRegistry>,
        bool (CommandRegistry::*)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
            const,
        char const*,
        enum class CommandParameterDataType,
        char const*,
        char const*,
        int,
        bool,
        int
    );
    /**
     * @symbol ?addOptions\@CommandParameterData\@\@QEAAAEAV1\@W4CommandParameterOption\@\@\@Z
     */
    MCAPI class CommandParameterData& addOptions(enum class CommandParameterOption);
    /**
     * @symbol ??1CommandParameterData\@\@QEAA\@XZ
     */
    MCAPI ~CommandParameterData();
};
