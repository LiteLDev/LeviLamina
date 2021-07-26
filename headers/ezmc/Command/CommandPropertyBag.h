#pragma once

#include <string>

#include "../dll.h"
#include "PropertyBag.h"

class CommandPropertyBag : public PropertyBag {
public:
    virtual ~CommandPropertyBag(){};

    MCAPI void addToResultList(std::string const& key, std::string const& value);
};