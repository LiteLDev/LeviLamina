#pragma once

#include "ll/api/ddui/Observable.h"
#include <memory>
#include <string>
#include <variant>

namespace ll::ddui {

struct SliderOptions {
    std::variant<std::string, std::shared_ptr<ObservableString>> description = std::string("");
    std::variant<bool, std::shared_ptr<ObservableBoolean>>       disabled    = false;
    std::variant<double, std::shared_ptr<ObservableNumber>>      step        = 1.0;
    std::variant<bool, std::shared_ptr<ObservableBoolean>>       visible     = true;
};

} // namespace ll::ddui
