#include "ll/core/ddui/elements/Label.h"
#include <utility>

namespace ll::ddui {

static void setupTextSubscription(
    ObsStringOrString const& textOpt,
    std::string const& path,
    std::function<void(std::shared_ptr<void> const&, uint64_t, std::function<void(uint64_t)>)> const& addSub,
    std::function<void(std::string const&, std::string const&)> const& updateString
) {
    if (std::holds_alternative<std::shared_ptr<ObservableString>>(textOpt)) {
        auto obs = std::get<std::shared_ptr<ObservableString>>(textOpt);
        if (obs) {
            auto subId = obs->subscribe([updateString, path](std::string const& val) {
                updateString(path, val);
            });
            addSub(obs, subId, [obs](uint64_t id) { obs->unsubscribe(id); });
        }
    } else if (std::holds_alternative<std::shared_ptr<ObservableUIRawMessage>>(textOpt)) {
        auto obs = std::get<std::shared_ptr<ObservableUIRawMessage>>(textOpt);
        if (obs) {
            auto subId = obs->subscribe([updateString, path](UIRawMessage const& val) {
                updateString(path, val.serialize().dump());
            });
            addSub(obs, subId, [obs](uint64_t id) { obs->unsubscribe(id); });
        }
    }
}

Label::Label(ObsStringOrString text, TextOptions options) : mText(std::move(text)), mOptions(std::move(options)) {}

nlohmann::ordered_json Label::serialize() const {
    nlohmann::ordered_json j = nlohmann::ordered_json::object();

    j["visible"]       = resolveOption(mOptions.visible);
    j["label_visible"] = true;
    j["text"]          = resolveText(mText);

    return j;
}

void Label::setupSubscriptions(
    std::string const&                                                                                prefix,
    std::function<void(std::shared_ptr<void> const&, uint64_t, std::function<void(uint64_t)>)> const& addSub,
    std::function<void(std::string const&, double)> const& /*updateDouble*/,
    std::function<void(std::string const&, bool)> const&               updateBool,
    std::function<void(std::string const&, std::string const&)> const& updateString
) {
    setupTextSubscription(mText, prefix + "text", addSub, updateString);

    if (std::holds_alternative<std::shared_ptr<ObservableBoolean>>(mOptions.visible)) {
        auto obs = std::get<std::shared_ptr<ObservableBoolean>>(mOptions.visible);
        if (obs) {
            auto subId = obs->subscribe([updateBool, prefix](bool val) { updateBool(prefix + "visible", val); });
            addSub(obs, subId, [obs](uint64_t id) { obs->unsubscribe(id); });
        }
    }
}

void Label::handleUpdate(
    std::string const& /*subpath*/,
    std::variant<double, bool, std::string> const& /*value*/
) {}

bool Label::validate() const { return true; }

} // namespace ll::ddui
