/**
 * @file  CommandParameterData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "CommandRegistry.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include <string_view>
#include "CommandRegistry.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandParameterData.
 *
 */
class CommandParameterData {

#define AFTER_EXTRA
// Add Member There
#define DISABLE_CONSTRUCTOR_PREVENTION_COMMANDPARAMETERDATA
    using ParseFn = bool (CommandRegistry::*)(
        void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&,
        std::vector<std::string>&) const;

public:
    Bedrock::typeid_t<CommandRegistry> tid; // 0
    ParseFn parser;                         // 8
    std::string name;                       // 16
    char const* desc;                       // 48
    int fix_symbol;                         // 56
    char const* unk64;                      // 64
    int unk72;                              // 72
    CommandParameterDataType type;          // 76
    int offset;                             // 80
    int set_offset;                         // 84
    bool is_optional;                       // 88
    unsigned char options;                  // 89

    CommandParameterData()
        : tid(tid){};

    CommandParameterData(
        Bedrock::typeid_t<CommandRegistry> tid, ParseFn parser, std::string_view describe,
        CommandParameterDataType type, char const* enumName, int offset, bool optional, int flag_offset)
        : tid(tid)
        , parser(parser)
        , name(describe)
        , desc(enumName)
        , fix_symbol(-1)
        , unk64(nullptr)
        , unk72(-1)
        , type(type)
        , offset(offset)
        , set_offset(flag_offset)
        , is_optional(optional)
        , options(0){};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDPARAMETERDATA
public:
    class CommandParameterData& operator=(class CommandParameterData const &) = delete;
    CommandParameterData() = delete;
#endif

public:
    /**
     * @symbol ??0CommandParameterData\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI CommandParameterData(class CommandParameterData const &);
    /**
     * @symbol ??0CommandParameterData\@\@QEAA\@V?$typeid_t\@VCommandRegistry\@\@\@Bedrock\@\@P8CommandRegistry\@\@EBA_NPEAXAEBUParseToken\@3\@AEBVCommandOrigin\@\@HAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@7\@\@ZPEBDW4CommandParameterDataType\@\@77H_NH\@Z
     */
    MCAPI CommandParameterData(class Bedrock::typeid_t<class CommandRegistry>, bool ( CommandRegistry::*)(void *, struct CommandRegistry::ParseToken const &, class CommandOrigin const &, int, std::string &, std::vector<std::string> &) const, char const *, enum class CommandParameterDataType, char const *, char const *, int, bool, int);
    /**
     * @symbol ?addOptions\@CommandParameterData\@\@QEAAAEAV1\@W4CommandParameterOption\@\@\@Z
     */
    MCAPI class CommandParameterData & addOptions(enum class CommandParameterOption);
    /**
     * @symbol ??1CommandParameterData\@\@QEAA\@XZ
     */
    MCAPI ~CommandParameterData();

};
