#pragma once

#include "FormBase.h"
#include <mc/world/actor/player/Player.h>


namespace ll::form {

class SimpleFormElement {
protected:
    virtual ~SimpleFormElement() = default;
    virtual fifo_json serialize() = 0;
    friend class SimpleForm;
};


class SimpleForm {

    class SimpleFormImpl;
    std::unique_ptr<SimpleFormImpl> impl;

public:

    using Callback       = std::function<void(Player*, int)>;
    using ButtonCallback = std::function<void(Player*)>;

    explicit LLAPI SimpleForm(std::string title, std::string content = "");

    LLAPI SimpleForm& setTitle(const std::string& title);

    LLAPI SimpleForm& setContent(const std::string& content);

    LLAPI SimpleForm&
    appendButton(const std::string& text, const std::string& image = "", ButtonCallback callback = ButtonCallback());

    LLAPI SimpleForm& sendTo(Player* player, Callback callback = Callback());
};

} // namespace ll::form