#include "ll/core/ddui/elements/TextField.h"
#include <utility>

namespace ll::ddui {

TextField::TextField(ObsStringOrString label, std::shared_ptr<ObservableString> text, TextFieldOptions options)
: mLabel(std::move(label)),
  mText(std::move(text)),
  mOptions(std::move(options)) {}

nlohmann::ordered_json TextField::serialize() const {
    nlohmann::ordered_json j = nlohmann::ordered_json::object();

    j["visible"]           = resolveOption(mOptions.visible);
    j["textfield_visible"] = true;
    j["label"]             = resolveString(mLabel);
    j["text"]              = mText ? mText->getData() : "";
    j["description"]       = resolveString(mOptions.description);
    j["disabled"]          = resolveOption(mOptions.disabled);

    return j;
}

void TextField::setupSubscriptions(
    std::string const&                                                                                prefix,
    std::function<void(std::shared_ptr<void> const&, uint64_t, std::function<void(uint64_t)>)> const& addSub,
    std::function<void(std::string const&, double)> const& /*updateDouble*/,
    std::function<void(std::string const&, bool)> const&               updateBool,
    std::function<void(std::string const&, std::string const&)> const& updateString
) {
    if (std::holds_alternative<std::shared_ptr<ObservableString>>(mLabel)) {
        auto obs = std::get<std::shared_ptr<ObservableString>>(mLabel);
        if (obs) {
            auto subId =
                obs->subscribe([updateString, prefix](std::string const& val) { updateString(prefix + "label", val); });
            addSub(obs, subId, [obs](uint64_t id) { obs->unsubscribe(id); });
        }
    }
    if (mText) {
        auto subId =
            mText->subscribe([updateString, prefix](std::string const& val) { updateString(prefix + "text", val); });
        addSub(mText, subId, [obs = mText](uint64_t id) { obs->unsubscribe(id); });
    }
    if (std::holds_alternative<std::shared_ptr<ObservableBoolean>>(mOptions.disabled)) {
        auto obs = std::get<std::shared_ptr<ObservableBoolean>>(mOptions.disabled);
        if (obs) {
            auto subId = obs->subscribe([updateBool, prefix](bool val) { updateBool(prefix + "disabled", val); });
            addSub(obs, subId, [obs](uint64_t id) { obs->unsubscribe(id); });
        }
    }
    if (std::holds_alternative<std::shared_ptr<ObservableBoolean>>(mOptions.visible)) {
        auto obs = std::get<std::shared_ptr<ObservableBoolean>>(mOptions.visible);
        if (obs) {
            auto subId = obs->subscribe([updateBool, prefix](bool val) { updateBool(prefix + "visible", val); });
            addSub(obs, subId, [obs](uint64_t id) { obs->unsubscribe(id); });
        }
    }
}

void TextField::handleUpdate(std::string const& subpath, std::variant<double, bool, std::string> const& value) {
    if (subpath == "text") {
        if (mText && std::holds_alternative<std::string>(value)) {
            mText->setData(std::get<std::string>(value));
        }
    }
}

bool TextField::validate() const { return true; }

} // namespace ll::ddui
