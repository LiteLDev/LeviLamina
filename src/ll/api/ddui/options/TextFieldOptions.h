#pragma once

#include "ll/api/ddui/Observable.h"
#include <memory>
#include <string>
#include <variant>

namespace ll::ddui {

struct TextFieldOptions {
    ObsStringOrString                                      description = std::string("");
    std::variant<bool, std::shared_ptr<ObservableBoolean>> disabled    = false;
    std::variant<bool, std::shared_ptr<ObservableBoolean>> visible     = true;
};

} // namespace ll::ddui
