#pragma once

#include <string>

class CommandRawText {
    std::string text;

public:
    inline std::string const& getText() const {
        return text;
    }
};