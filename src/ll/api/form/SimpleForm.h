#pragma once

#include "FormBase.h"
#include "mc/world/actor/player/Player.h"


namespace ll::form {

class SimpleForm : public Form {

    class SimpleFormImpl;
    std::unique_ptr<SimpleFormImpl> impl{};

public:
    using Callback       = std::function<void(Player&, int)>;
    using ButtonCallback = std::function<void(Player&)>;

    LLNDAPI explicit SimpleForm(std::string const& title, std::string const& content = "");
    ~SimpleForm() override = default;

    LLAPI SimpleForm& setTitle(std::string const& title);

    LLAPI SimpleForm& setContent(std::string const& content);

    /**
     * @brief  Append a button to the form
     * @param  text      The text of the button
     * @param  image     The image of the button
     * @param  callback  The callback of the button
     * @return SimpleForm&  *this
     * @note   If the `callback` parameter of sendTo() is set, the callback of the button will be ignored
     */
    LLAPI SimpleForm&
    appendButton(std::string const& text, std::string const& image = "", ButtonCallback callback = {});

    /**
     * @brief  Send the form to the player
     * @param  player    The player to receive the form
     * @param  callback  The callback of the form(if set, the callback of the button will be ignored)
     * @return SimpleForm&  *this
     * @note   If `callback` is set, the callbacks of each buttons will be ignored
     */
    LLAPI SimpleForm& sendTo(Player& player, Callback callback = Callback());
};

} // namespace ll::form