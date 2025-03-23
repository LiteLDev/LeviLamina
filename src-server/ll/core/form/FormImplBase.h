#pragma once

#include "ll/api/form/FormBase.h"
#include "nlohmann/json.hpp"

namespace ll::form {

struct ButtonImage {
    std::string data{};
    std::string type{"path"};
};

class FormImpl {
protected:
    virtual ~FormImpl()                                            = default;
    [[nodiscard]] virtual FormType               getType() const   = 0;
    [[nodiscard]] virtual nlohmann::ordered_json serialize() const = 0;
};

} // namespace ll::form
