#pragma once

#include "ll/api/ddui/Observable.h"
#include "mc/world/actor/player/Player.h"
#include <functional>
#include <memory>
#include <optional>

enum class DataDrivenScreenClosedReason : uchar;

namespace ll::ddui {

enum class DataDrivenScreenClosedReason;

struct MessageBoxResult {
    ll::ddui::DataDrivenScreenClosedReason closeReason{};
    std::optional<int>                     selection;
};

class MessageBox {
public:
    using Callback = std::function<void(Player&, MessageBoxResult const&)>;

    // clang-format off

    /**
     * @brief Constructs a new MessageBox instance.
     * @param player The player to whom the message box will be shown.
     * @param title The title text of the message box.
     */
    LLNDAPI MessageBox(Player& player, ObsStringOrString title);
    LLAPI ~MessageBox();

    MessageBox(MessageBox const&)            = delete;
    MessageBox& operator=(MessageBox const&) = delete;

    /**
     * @brief Appends body text content to the message box.
     * @param bodyText The body text content.
     * @return Reference to the MessageBox instance for method chaining.
     */
    LLAPI MessageBox& appendBody(ObsStringOrString bodyText);

    /**
     * @brief Appends the first (primary) button to the message box.
     * @param label The text displayed on the button.
     * @param tooltip Additional tooltip text for the button.
     * @return Reference to the MessageBox instance for method chaining.
     */
    LLAPI MessageBox& appendButton1(ObsStringOrString label, ObsStringOrString tooltip = "");

    /**
     * @brief Appends the second (secondary/cancel) button to the message box.
     * @param label The text displayed on the button.
     * @param tooltip Additional tooltip text for the button.
     * @return Reference to the MessageBox instance for method chaining.
     */
    LLAPI MessageBox& appendButton2(ObsStringOrString label, ObsStringOrString tooltip = "");

    /**
     * @brief Shows the message box screen to the player.
     * @param callback Function invoked when the player interacts with or closes the message box.
     * @return True if showing the message box was successful, false otherwise.
     */
    LLAPI bool show(Callback callback = {});

    /**
     * @brief Programmatically closes the message box screen on the client.
     */
    LLAPI void close();

    /**
     * @brief Checks if the message box screen is currently shown to the player.
     * @return True if the message box is open, false otherwise.
     */
    LLNDAPI bool isShowing() const;

    /**
     * @brief Validates the message box configuration.
     * @return True if valid.
     */
    LLNDAPI bool validate() const;

    // clang-format on

private:
    friend class MessageBoxSession;
    friend class FormIdManager;

    std::shared_ptr<MessageBoxSession> mSession;
};

} // namespace ll::ddui
