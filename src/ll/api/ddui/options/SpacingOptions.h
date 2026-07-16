#pragma once

#include "ll/api/ddui/Observable.h"
#include <memory>
#include <variant>

namespace ll::ddui {

struct SpacingOptions {
    std::variant<bool, std::shared_ptr<ObservableBoolean>> visible = true;
};

} // namespace ll::ddui
