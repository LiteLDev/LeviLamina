#pragma once

#include "ll/api/ddui/Observable.h"
#include "mc/world/actor/player/Player.h"
#include <functional>
#include <memory>
#include <string>
#include <variant>
#include <vector>

#include "ll/api/ddui/options/ButtonOptions.h"
#include "ll/api/ddui/options/DividerOptions.h"
#include "ll/api/ddui/options/DropdownOptions.h"
#include "ll/api/ddui/options/SliderOptions.h"
#include "ll/api/ddui/options/SpacingOptions.h"
#include "ll/api/ddui/options/TextFieldOptions.h"
#include "ll/api/ddui/options/TextOptions.h"
#include "ll/api/ddui/options/ToggleOptions.h"

enum class DataDrivenScreenClosedReason : uchar;

namespace ll::ddui {

enum class DataDrivenScreenClosedReason;

class CustomForm {
public:
    using Callback = std::function<void(Player&, ll::ddui::DataDrivenScreenClosedReason)>;

    // clang-format off

    /**
     * @brief Constructs a new Custom Form.
     * @param player The player to whom the form will be shown.
     * @param title The title of the form (supports static string or observable string).
     */
    LLNDAPI CustomForm(Player& player, ObsStringOrString title);
    LLAPI ~CustomForm();

    CustomForm(CustomForm const&)            = delete;
    CustomForm& operator=(CustomForm const&) = delete;

    /**
     * @brief Appends a button element to the form.
     * @param label The text displayed on the button.
     * @param onClick The callback function invoked when the button is clicked.
     * @param options Additional options for configuring the button (e.g. visibility, disabled state, tooltip).
     * @return Reference to the CustomForm instance for method chaining.
     */
    LLAPI CustomForm&
    appendButton(ObsStringOrString label, std::function<void()> onClick, ButtonOptions options = {});

    /**
     * @brief Appends a text input field to the form.
     * @param label The label text displayed above the text field.
     * @param text The observable string binding that synchronizes the input text.
     * @param options Additional options for configuring the text field (e.g. description, visibility, disabled state).
     * @return Reference to the CustomForm instance for method chaining.
     */
    LLAPI CustomForm& appendTextField(
        ObsStringOrString                 label,
        std::shared_ptr<ObservableString> text,
        TextFieldOptions                  options = {}
    );

    /**
     * @brief Appends a toggle switch to the form.
     * @param label The label text displayed next to the toggle.
     * @param toggled The observable boolean binding that synchronizes the toggle state.
     * @param options Additional options for configuring the toggle (e.g. description, visibility, disabled state).
     * @return Reference to the CustomForm instance for method chaining.
     */
    LLAPI CustomForm& appendToggle(
        ObsStringOrString                  label,
        std::shared_ptr<ObservableBoolean> toggled,
        ToggleOptions                      options = {}
    );

    /**
     * @brief Appends a numeric slider element to the form.
     * @param label The label text displayed above the slider.
     * @param value The observable number binding that synchronizes the slider value.
     * @param min The minimum value of the slider.
     * @param max The maximum value of the slider.
     * @param options Additional options for configuring the slider (e.g. step, description, visibility, disabled state).
     * @return Reference to the CustomForm instance for method chaining.
     */
    LLAPI CustomForm& appendSlider(
        ObsStringOrString                 label,
        std::shared_ptr<ObservableNumber> value,
        ObsNumberOrNumber                 min,
        ObsNumberOrNumber                 max,
        SliderOptions                     options = {}
    );

    /**
     * @brief Appends a dropdown selection list to the form.
     * @param label The label text displayed next to the dropdown.
     * @param value The observable number binding that synchronizes the index of the selected item.
     * @param items Vector containing data for all items in the dropdown list.
     * @param options Additional options for configuring the dropdown (e.g. description, visibility, disabled state).
     * @return Reference to the CustomForm instance for method chaining.
     */
    LLAPI CustomForm& appendDropdown(
        ObsStringOrString                 label,
        std::shared_ptr<ObservableNumber> value,
        std::vector<DropdownItemData>     items,
        DropdownOptions                   options = {}
    );

    /**
     * @brief Appends a header text element to the form.
     * @param text The header text content.
     * @param options Additional options for configuring the header (e.g. visibility).
     * @return Reference to the CustomForm instance for method chaining.
     */
    LLAPI CustomForm& appendHeader(ObsStringOrString text, TextOptions options = {});

    /**
     * @brief Appends a label text element to the form.
     * @param text The label text content.
     * @param options Additional options for configuring the label (e.g. visibility).
     * @return Reference to the CustomForm instance for method chaining.
     */
    LLAPI CustomForm& appendLabel(ObsStringOrString text, TextOptions options = {});

    /**
     * @brief Appends an empty spacing layout element to the form.
     * @param options Additional options for configuring the spacer (e.g. visibility).
     * @return Reference to the CustomForm instance for method chaining.
     */
    LLAPI CustomForm& appendSpacer(SpacingOptions options = {});

    /**
     * @brief Appends a visual horizontal divider element to the form.
     * @param options Additional options for configuring the divider (e.g. visibility).
     * @return Reference to the CustomForm instance for method chaining.
     */
    LLAPI CustomForm& appendDivider(DividerOptions options = {});

    /**
     * @brief Appends a default close button to the form screen.
     * @param label The text displayed on the close button.
     * @param onClick The callback function invoked when the close button is clicked.
     * @param options Additional options for configuring the close button.
     * @return Reference to the CustomForm instance for method chaining.
     */
    LLAPI CustomForm& appendCloseButton(
        ObsStringOrString     label   = "Close",
        std::function<void()> onClick = {},
        ButtonOptions         options = {}
    );

    /**
     * @brief Shows the form to the target player.
     * @param callback Function invoked when the form screen is closed by the client or server.
     * @return True if showing the form was successful, false otherwise (e.g. invalid form, player offline).
     */
    LLAPI bool show(Callback callback = {});

    /**
     * @brief Programmatically closes the form screen on the client.
     */
    LLAPI void close();

    /**
     * @brief Checks if the form screen is currently being shown to the player.
     * @return True if the form is open, false otherwise.
     */
    LLNDAPI bool isShowing() const;

    /**
     * @brief Validates the form configuration.
     * @return True if the form structure is valid.
     */
    LLNDAPI bool validate() const;

    // clang-format on

private:
    friend class CustomFormSession;
    friend class FormIdManager;

    std::shared_ptr<CustomFormSession> mSession;
};

} // namespace ll::ddui
