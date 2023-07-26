/**
 * @file  CommandParameterData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "CommandRegistry.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include <string_view>
#include "typeid_t.hpp"
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
    typeid_t<CommandRegistry> tid; // 0
    ParseFn parser;                // 8
    std::string name;              // 16
    char const* desc;              // 48
    int unk56;                     // 56
    CommandParameterDataType type; // 60
    int offset;                    // 64
    int flag_offset;               // 68
    bool mand;                     // 72
    unsigned char options;         // 73

    CommandParameterData()
        : tid(tid){};

    CommandParameterData(
        typeid_t<CommandRegistry> tid, ParseFn parser, std::string_view describe,
        CommandParameterDataType type, char const* enumName, int offset, bool optional, int flag_offset)
        : tid(tid)
        , parser(parser)
        , name(describe)
        , desc(enumName)
        , unk56(-1)
        , type(type)
        , offset(offset)
        , flag_offset(flag_offset)
        , mand(optional)
        , options(0){};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDPARAMETERDATA
public:
    class CommandParameterData& operator=(class CommandParameterData const &) = delete;
    CommandParameterData() = delete;
#endif

public:
    /**
     * @symbol  ??0CommandParameterData\@\@QEAA\@V?$typeid_t\@VCommandRegistry\@\@\@\@P8CommandRegistry\@\@EBA_NPEAXAEBUParseToken\@2\@AEBVCommandOrigin\@\@HAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@6\@\@ZPEBDW4CommandParameterDataType\@\@7H_NH\@Z
     */
    MCAPI CommandParameterData(class typeid_t<class CommandRegistry>, bool ( CommandRegistry::*)(void *, struct CommandRegistry::ParseToken const &, class CommandOrigin const &, int, std::string &, std::vector<std::string> &) const, char const *, enum class CommandParameterDataType, char const *, int, bool, int);
    /**
     * @symbol  ??0CommandParameterData\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI CommandParameterData(class CommandParameterData const &);
    /**
     * @symbol  ?addOptions\@CommandParameterData\@\@QEAAAEAV1\@W4CommandParameterOption\@\@\@Z
     */
    MCAPI class CommandParameterData & addOptions(enum class CommandParameterOption);
    /**
     * @symbol  ??1CommandParameterData\@\@QEAA\@XZ
     */
    MCAPI ~CommandParameterData();

};