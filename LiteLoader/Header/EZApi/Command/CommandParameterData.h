#pragma once

#include <string>
#include <vector>

#include "../Core/type_id.h"
#include "CommandRegistry.h"

class CommandOrigin;

enum class CommandParameterDataType { NORMAL,
                                      ENUM,
                                      SOFT_ENUM };
struct CommandParameterData {
    using ParseFn = bool (CommandRegistry::*)(
        void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&,
        std::vector<std::string>&) const;
    typeid_t<CommandRegistry> tid;         // 0
    ParseFn                   parser;      // 8
    std::string               name;        // 16
    char const*               desc;        // 48
    int                       unk56;       // 56
    CommandParameterDataType  type;        // 60
    int                       offset;      // 64
    int                       flag_offset; // 68
    bool                      optional;    // 72
    bool                      pad73;       // 73
    CommandParameterData(
        typeid_t<CommandRegistry> tid, ParseFn parser, std::string name, CommandParameterDataType type, char const* desc,
        int offset, bool mand, int flag_offset)
        : tid(tid)
        , parser(parser)
        , name(name)
        , desc(desc)
        , unk56(-1)
        , type(type)
        , offset(offset)
        , flag_offset(flag_offset)
        , optional(mand)
        , pad73(false) {
    }
};