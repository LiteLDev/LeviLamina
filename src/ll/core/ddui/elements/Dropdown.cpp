#include "ll/core/ddui/elements/Dropdown.h"
#include <cmath>
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
    j["label"]            = resolveText(mLabel);
    j["description"]      = resolveText(mOptions.description);

    double selectedIndex = 0.0;
    if (mValue) {
        double currentVal = mValue->getData();
        for (size_t i = 0; i < mItems.size(); ++i) {
            if (mItems[i].value == currentVal) {
                selectedIndex = static_cast<double>(i);
                break;
            }
        }
    }

    j["value"]    = selectedIndex;
    j["disabled"] = resolveOption(mOptions.disabled);

    nlohmann::ordered_json itemsObj = nlohmann::ordered_json::object();
    for (size_t i = 0; i < mItems.size(); ++i) {
        itemsObj[std::to_string(i)] = {
            {      "label",       resolveText(mItems[i].label)},
            {      "value",                    mItems[i].value},
            {"description", resolveText(mItems[i].description)}
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
    setupTextSubscription(mLabel, prefix + "label", addSub, updateString);
    setupTextSubscription(mOptions.description, prefix + "description", addSub, updateString);

    if (mValue) {
        auto subId = mValue->subscribe([this, updateDouble, prefix](double val) {
            double selectedIndex = 0.0;
            for (size_t i = 0; i < mItems.size(); ++i) {
                if (mItems[i].value == val) {
                    selectedIndex = static_cast<double>(i);
                    break;
                }
            }
            updateDouble(prefix + "value", selectedIndex);
        });
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

    for (size_t i = 0; i < mItems.size(); ++i) {
        std::string itemPrefix = prefix + "items[" + std::to_string(i) + "].";
        setupTextSubscription(mItems[i].label, itemPrefix + "label", addSub, updateString);
        setupTextSubscription(mItems[i].description, itemPrefix + "description", addSub, updateString);
    }
}

bool Dropdown::handleUpdate(std::string const& subpath, std::variant<double, bool, std::string> const& value) {
    if (resolveOption(mOptions.disabled) || !resolveOption(mOptions.visible)) {
        return false;
    }

    if (subpath == "value") {
        if (mValue && mValue->isClientWritable() && std::holds_alternative<double>(value)) {
            double val = std::get<double>(value);
            if (!std::isfinite(val) || val < 0.0) {
                return false;
            }

            auto index = static_cast<size_t>(val);
            if (index < mItems.size()) {
                mValue->setData(mItems[index].value);
                return true;
            }
        }
    }
    return false;
}

bool Dropdown::validate() const {
    if (mValue) {
        if (!mValue->isClientWritable()) {
            return false;
        }

        double currentVal = mValue->getData();

        bool found = false;
        for (auto const& item : mItems) {
            if (item.value == currentVal) {
                found = true;
                break;
            }
        }

        return found;
    }

    return true;
}

} // namespace ll::ddui
