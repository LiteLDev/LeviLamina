#include "ll/core/ddui/elements/Dropdown.h"
#include <utility>

namespace ll::ddui {

Dropdown::Dropdown(
    ObsStringOrString                 label,
    std::shared_ptr<ObservableNumber> value,
    std::vector<DropdownItemData>     items,
    DropdownOptions                   options
)
: mLabel(std::move(label)),
  mValue(std::move(value)),
  mItems(std::move(items)),
  mOptions(std::move(options)) {}

nlohmann::ordered_json Dropdown::serialize() const {
    nlohmann::ordered_json j = nlohmann::ordered_json::object();

    j["visible"]          = resolveOption(mOptions.visible);
    j["dropdown_visible"] = true;
    j["label"]            = resolveString(mLabel);
    j["description"]      = resolveString(mOptions.description);
    j["value"]            = mValue ? mValue->getData() : 0.0;
    j["disabled"]         = resolveOption(mOptions.disabled);

    nlohmann::ordered_json itemsObj = nlohmann::ordered_json::object();
    for (size_t i = 0; i < mItems.size(); ++i) {
        itemsObj[std::to_string(i)] = {
            {      "label",       resolveString(mItems[i].label)},
            {      "value",                      mItems[i].value},
            {"description", resolveString(mItems[i].description)}
        };
    }

    itemsObj["length"] = mItems.size();
    j["items"]         = itemsObj;

    return j;
}

void Dropdown::setupSubscriptions(
    std::string const&                                                                                prefix,
    std::function<void(std::shared_ptr<void> const&, uint64_t, std::function<void(uint64_t)>)> const& addSub,
    std::function<void(std::string const&, double)> const&                                            updateDouble,
    std::function<void(std::string const&, bool)> const&                                              updateBool,
    std::function<void(std::string const&, std::string const&)> const&                                updateString
) {
    if (std::holds_alternative<std::shared_ptr<ObservableString>>(mLabel)) {
        auto obs = std::get<std::shared_ptr<ObservableString>>(mLabel);
        if (obs) {
            auto subId =
                obs->subscribe([updateString, prefix](std::string const& val) { updateString(prefix + "label", val); });
            addSub(obs, subId, [obs](uint64_t id) { obs->unsubscribe(id); });
        }
    }
    if (mValue) {
        auto subId = mValue->subscribe([updateDouble, prefix](double val) { updateDouble(prefix + "value", val); });
        addSub(mValue, subId, [obs = mValue](uint64_t id) { obs->unsubscribe(id); });
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

void Dropdown::handleUpdate(std::string const& subpath, std::variant<double, bool, std::string> const& value) {
    if (subpath == "value") {
        if (mValue && std::holds_alternative<double>(value)) {
            double val = std::get<double>(value);

            auto index = static_cast<size_t>(val);
            if (index < mItems.size()) {
                mValue->setData(val);
            }
        }
    }
}

bool Dropdown::validate() const {
    if (mValue) {
        double val = mValue->getData();

        auto index = static_cast<size_t>(val);
        return index < mItems.size();
    }

    return true;
}

} // namespace ll::ddui
