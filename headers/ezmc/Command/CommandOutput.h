#pragma once

#include <memory>
#include <string>
#include <vector>

#include <modutils.h>

#include "../dll.h"
#include "CommandOutputMessage.h"
#include "CommandOutputParameter.h"
#include "CommandOutputType.h"
#include "CommandPropertyBag.h"

class Actor;

class CommandOutput {
public:
    CommandOutputType                   type;
    std::unique_ptr<CommandPropertyBag> property_bag;
    std::vector<CommandOutputMessage>   messages;

    BASEAPI void success();
    MCAPI void   success(std::string const&, std::vector<CommandOutputParameter> const& params = {});
    MCAPI void   error(std::string const&, std::vector<CommandOutputParameter> const& params = {});
    MCAPI void   addToResultList(std::string const&, Actor const&);
    inline void  addToResultList(std::string const& key, std::string const& value) {
        if (type == CommandOutputType::WithJson)
            property_bag->addToResultList(key, value);
    }
    template <typename T>
    MCAPI void set(char const* name, T value);
};