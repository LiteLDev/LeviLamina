#pragma once

#include <string>

#include "../dll.h"

namespace Json {
class Value;
}

class ITextObject {
public:
    virtual ~ITextObject() {
    }
    virtual std::string asString() const    = 0;
    virtual Json::Value asJsonValue() const = 0;
};