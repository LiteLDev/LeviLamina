#pragma once

#include "ll/api/ddui/Observable.h"
#include <memory>
#include <string>
#include <variant>

namespace ll::ddui {

struct ButtonOptions {
    std::variant<bool, std::shared_ptr<ObservableBoolean>>       disabled = false;
    std::variant<std::string, std::shared_ptr<ObservableString>> tooltip  = std::string("");
    std::variant<bool, std::shared_ptr<ObservableBoolean>>       visible  = true;
};

} // namespace ll::ddui
